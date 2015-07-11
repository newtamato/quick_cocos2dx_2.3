/****************************************************************************
 Copyright (c) 2012 cocos2d-x.org
 Copyright (c) 2010 Sangwoo Im

 http://www.cocos2d-x.org

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "cocos2d.h"
#include "CCTableView.h"
#include "CCTableViewCell.h"
#include "menu_nodes/CCMenu.h"
#include "support/CCPointExtension.h"
#include "CCSorting.h"
#include "layers_scenes_transitions_nodes/CCLayer.h"

NS_CC_EXT_BEGIN

CCTableView* CCTableView::create(CCTableViewDataSource* dataSource, CCSize size)
{
    return CCTableView::create(dataSource, size, NULL);
}

CCTableView* CCTableView::create(CCTableViewDataSource* dataSource, CCSize size, CCNode *container)
{
    CCTableView *table = new CCTableView();
    table->initWithViewSize(size, container);
    table->autorelease();
    table->setDataSource(dataSource);
    table->_updateCellPositions();
    table->_updateContentSize();

    return table;
}

bool CCTableView::initWithViewSize(CCSize size, CCNode* container/* = NULL*/)
{
    if (CCScrollView::initWithViewSize(size,container))
    {
        m_pCellsUsed      = new CCArrayForObjectSorting();
        m_pCellsFreed     = new CCArrayForObjectSorting();
        m_pIndices        = new std::set<unsigned int>();
        m_eVordering      = kCCTableViewFillBottomUp;
        this->setDirection(kCCScrollViewDirectionVertical);

        CCScrollView::setDelegate(this);
        return true;
    }
    return false;
}

CCTableView::CCTableView()
: m_pTouchedCell(NULL)
, m_pIndices(NULL)
, m_pCellsUsed(NULL)
, m_pCellsFreed(NULL)
, m_pDataSource(NULL)
, m_pTableViewDelegate(NULL)
, m_eOldDirection(kCCScrollViewDirectionNone)
{

}

CCTableView::~CCTableView()
{
    CC_SAFE_DELETE(m_pIndices);
    CC_SAFE_RELEASE(m_pCellsUsed);
    CC_SAFE_RELEASE(m_pCellsFreed);
    unregisterAllScriptHandler();
}

void CCTableView::setVerticalFillOrder(CCTableViewVerticalFillOrder fillOrder)
{
    if (m_eVordering != fillOrder) {
        m_eVordering = fillOrder;
        if (m_pCellsUsed->count() > 0) {
            this->reloadData();
        }
    }
}

CCTableViewVerticalFillOrder CCTableView::getVerticalFillOrder()
{
    return m_eVordering;
}

void CCTableView::reloadData()
{
    m_eOldDirection = kCCScrollViewDirectionNone;
    CCObject* pObj = NULL;
    CCARRAY_FOREACH(m_pCellsUsed, pObj)
    {
        CCTableViewCell* cell = (CCTableViewCell*)pObj;

        if(m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellWillRecycle(this, cell);
        }

        m_pCellsFreed->addObject(cell);
        cell->reset();
        if (cell->getParent() == this->getContainer())
        {
            this->getContainer()->removeChild(cell, true);
        }
    }

    m_pIndices->clear();
    m_pCellsUsed->release();
    m_pCellsUsed = new CCArrayForObjectSorting();

    this->_updateCellPositions();
    this->_updateContentSize();
    if (m_pDataSource->numberOfCellsInTableView(this) > 0)
    {
        this->scrollViewDidScroll(this);
    }
}

CCTableViewCell *CCTableView::cellAtIndex(unsigned int idx)
{
    CCTableViewCell *found = NULL;

    if (m_pIndices->find(idx) != m_pIndices->end())
    {
        found = (CCTableViewCell *)m_pCellsUsed->objectWithObjectID(idx);
    }

    return found;
}

void CCTableView::updateCellAtIndex(unsigned int idx)
{
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }
    unsigned int uCountOfItems = m_pDataSource->numberOfCellsInTableView(this);
    if (0 == uCountOfItems || idx > uCountOfItems-1)
    {
        return;
    }

    CCTableViewCell* cell = this->cellAtIndex(idx);
    if (cell)
    {
        this->_moveCellOutOfSight(cell);
    }
    cell = m_pDataSource->tableCellAtIndex(this, idx);
    this->_setIndexForCell(idx, cell);
    CCLOG("update cell at index ,index is %i",idx);
    this->_addCellIfNecessary(cell);
}

void CCTableView::insertCellAtIndex(unsigned  int idx)
{
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }

    unsigned int uCountOfItems = m_pDataSource->numberOfCellsInTableView(this);
    if (0 == uCountOfItems || idx > uCountOfItems-1)
    {
        return;
    }

    CCTableViewCell* cell = NULL;
    int newIdx = 0;

    cell = (CCTableViewCell*)m_pCellsUsed->objectWithObjectID(idx);
    if (cell)
    {
        newIdx = m_pCellsUsed->indexOfSortedObject(cell);
        for (unsigned int i=newIdx; i<m_pCellsUsed->count(); i++)
        {
            cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(i);
            this->_setIndexForCell(cell->getIdx()+1, cell);
        }
    }

 //   [m_pIndices shiftIndexesStartingAtIndex:idx by:1];

    //insert a new cell
    cell = m_pDataSource->tableCellAtIndex(this, idx);
    this->_setIndexForCell(idx, cell);
    this->_addCellIfNecessary(cell);

    this->_updateCellPositions();
    this->_updateContentSize();
}

void CCTableView::removeCellAtIndex(unsigned int idx)
{
    CCLOG("remove cell at index %d",idx);
    if (idx == CC_INVALID_INDEX)
    {
        return;
    }

    unsigned int uCountOfItems = m_pDataSource->numberOfCellsInTableView(this);
    CCLOG("remove cell at uCountOfItems %d",uCountOfItems);
    if (0 == uCountOfItems || idx > uCountOfItems)
    {
        return;
    }

    unsigned int newIdx = 0;

    CCTableViewCell* cell = this->cellAtIndex(idx);
    if (!cell)
    {
        CCLOG("remove cell at index %d,cell is nil",idx);
        return;
    }
    int usedCount = m_pCellsUsed->count();
    newIdx = m_pCellsUsed->indexOfSortedObject(cell);
    //remove first
    this->_moveCellOutOfSight(cell);
    
    this->_updateCellPositions();
    this->_updateContentSize();
    m_pIndices->clear();
   
    int lastIndex = -1;
    
    CCLOG("removeCellAtIndex newIdx is %d",newIdx);
    if (newIdx == 0 ){
//        return;
    }
    for (int i = 0; i < (int)newIdx; i++)
    {
        cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(i);
        int index = cell->getIdx() ;
        m_pIndices->insert(index);
        CCPoint pos = this->_offsetFromIndex(index);
        CCLOG("索引的index 是 %d,y的位置是%f",i,pos.y);
        cell->setPosition(this->_offsetFromIndex(index));
    }

    for (int i=(int)m_pCellsUsed->count()-1; i >= (int)newIdx; --i)
    {
        cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(i);
        int index = cell->getIdx()-1;
        this->_setIndexForCell(index, cell);
        CCPoint pos = this->_offsetFromIndex(index);
        m_pIndices->insert(index);
    }
    
    int nowUsedCount = m_pCellsUsed->count();
    cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(nowUsedCount-1);
    lastIndex = cell->getIdx();
    if (usedCount > nowUsedCount ){
        int offset = usedCount - nowUsedCount;
        int endIndex = (lastIndex + 1 ) + offset ;
        for (int i = (lastIndex + 1) ;i < endIndex;i++){
            CCLOG("自动更新第index个，%d",i);
            if (i < uCountOfItems -1){
                this->updateCellAtIndex(i);
            }
        }
    }
    
}

CCTableViewCell *CCTableView::dequeueCell()
{
    CCTableViewCell *cell;

    if (m_pCellsFreed->count() == 0) {
        cell = NULL;
    } else {
        cell = (CCTableViewCell*)m_pCellsFreed->objectAtIndex(0);
        cell->retain();
        m_pCellsFreed->removeObjectAtIndex(0);
        cell->autorelease();
    }
    return cell;
}

void CCTableView::_addCellIfNecessary(CCTableViewCell * cell)
{
    if (cell->getParent() != this->getContainer())
    {
        this->getContainer()->addChild(cell);
    }
    m_pCellsUsed->insertSortedObject(cell);
    m_pIndices->insert(cell->getIdx());
    // [m_pIndices addIndex:cell.idx];
}

void CCTableView::_updateContentSize()
{
    CCSize size = CCSizeZero;
    unsigned int cellsCount = m_pDataSource->numberOfCellsInTableView(this);

    if (cellsCount > 0)
    {
        float maxPosition = m_vCellsPositions[cellsCount];

        switch (this->getDirection())
        {
            case kCCScrollViewDirectionHorizontal:
                size = CCSizeMake(maxPosition, m_tViewSize.height);
                break;
            default:
                size = CCSizeMake(m_tViewSize.width, maxPosition);
                break;
        }
    }
    CCLOG("删除之后数据长度是%d",cellsCount);
    CCLOG("删除之后重新设置tableView的宽高 width is %f , height is %f",size.width,size.height);
//    CCLayer::setContentSize(size);
    this->setContentSize(size);

	if (m_eOldDirection != m_eDirection)
	{
		if (m_eDirection == kCCScrollViewDirectionHorizontal)
		{
			this->setContentOffset(ccp(0,0));
		}
		else
		{
			this->setContentOffset(ccp(0,this->minContainerOffset().y));
		}
		m_eOldDirection = m_eDirection;
	}

}

CCPoint CCTableView::_offsetFromIndex(unsigned int index)
{
    CCPoint offset = this->__offsetFromIndex(index);

    const CCSize cellSize = m_pDataSource->tableCellSizeForIndex(this, index);
    if (m_eVordering == kCCTableViewFillTopDown)
    {
        offset.y = this->getContainer()->getContentSize().height - offset.y - cellSize.height;
    }
    CCLOG("this->getContainer()->getContentSize().height is %f",this->getContainer()->getContentSize().height);
    CCLOG("m_eVordering is %i,index is %i,lhou offset y is %f",m_eVordering,index,offset.y);
    return offset;
}

CCPoint CCTableView::__offsetFromIndex(unsigned int index)
{
    CCPoint offset;
    CCSize  cellSize;

    switch (this->getDirection())
    {
        case kCCScrollViewDirectionHorizontal:
            offset = ccp(m_vCellsPositions[index], 0.0f);
            break;
        default:
            offset = ccp(0.0f, m_vCellsPositions[index]);
            break;
    }

    return offset;
}

unsigned int CCTableView::_indexFromOffset(CCPoint offset)
{
    int index = 0;
    const int maxIdx = m_pDataSource->numberOfCellsInTableView(this)-1;

    if (m_eVordering == kCCTableViewFillTopDown)
    {
        offset.y = this->getContainer()->getContentSize().height - offset.y;
    }
    index = this->__indexFromOffset(offset);
    if (index != -1)
    {
        index = MAX(0, index);
        if (index > maxIdx)
        {
            index = CC_INVALID_INDEX;
        }
    }

    return index;
}

int CCTableView::__indexFromOffset(CCPoint offset)
{
    int low = 0;
    int high = m_pDataSource->numberOfCellsInTableView(this) - 1;
    float search;
    switch (this->getDirection())
    {
        case kCCScrollViewDirectionHorizontal:
            search = offset.x;
            break;
        default:
            search = offset.y;
            break;
    }

    while (high >= low)
    {
        int index = low + (high - low) / 2;
        float cellStart = m_vCellsPositions[index];
        float cellEnd = m_vCellsPositions[index + 1];

        if (search >= cellStart && search <= cellEnd)
        {
            return index;
        }
        else if (search < cellStart)
        {
            high = index - 1;
        }
        else
        {
            low = index + 1;
        }
    }

    if (low <= 0) {
        return 0;
    }

    return -1;
}

void CCTableView::_moveCellOutOfSight(CCTableViewCell *cell)
{
    if(m_pTableViewDelegate != NULL) {
        m_pTableViewDelegate->tableCellWillRecycle(this, cell);
    }

    m_pCellsFreed->addObject(cell);
    m_pCellsUsed->removeSortedObject(cell);
    m_pIndices->erase(cell->getIdx());
    // [m_pIndices removeIndex:cell.idx];
    cell->reset();
    if (cell->getParent() == this->getContainer()) {
        this->getContainer()->removeChild(cell, true);;
    }
}

void CCTableView::_setIndexForCell(unsigned int index, CCTableViewCell *cell)
{
    cell->setAnchorPoint(ccp(0.0f, 0.0f));
    cell->setPosition(this->_offsetFromIndex(index));
    cell->setIdx(index);
}

void CCTableView::_updateCellPositions() {
    int cellsCount = m_pDataSource->numberOfCellsInTableView(this);
    m_vCellsPositions.resize(cellsCount + 1, 0.0);

    if (cellsCount > 0)
    {
        float currentPos = 0;
        CCSize cellSize;
        for (int i=0; i < cellsCount; i++)
        {
            m_vCellsPositions[i] = currentPos;
            cellSize = m_pDataSource->tableCellSizeForIndex(this, i);
            switch (this->getDirection())
            {
                case kCCScrollViewDirectionHorizontal:
                    currentPos += cellSize.width;
                    break;
                default:
                    currentPos += cellSize.height;
                    break;
            }
        }
        m_vCellsPositions[cellsCount] = currentPos;//1 extra value allows us to get right/bottom of the last cell
    }

}

void CCTableView::scrollViewDidScroll(CCScrollView* view)
{
    unsigned int uCountOfItems = m_pDataSource->numberOfCellsInTableView(this);
    if (0 == uCountOfItems)
    {
        return;
    }

    if(m_pTableViewDelegate != NULL) {
        m_pTableViewDelegate->scrollViewDidScroll(this);
    }

    unsigned int startIdx = 0, endIdx = 0, idx = 0, maxIdx = 0;
    CCPoint offset = ccpMult(this->getContentOffset(), -1);
    maxIdx = MAX(uCountOfItems-1, 0);

    if (m_eVordering == kCCTableViewFillTopDown)
    {
        offset.y = offset.y + m_tViewSize.height/this->getContainer()->getScaleY();
    }
    startIdx = this->_indexFromOffset(offset);
	if (startIdx == CC_INVALID_INDEX)
	{
		startIdx = uCountOfItems - 1;
	}

    if (m_eVordering == kCCTableViewFillTopDown)
    {
        offset.y -= m_tViewSize.height/this->getContainer()->getScaleY();
    }
    else
    {
        offset.y += m_tViewSize.height/this->getContainer()->getScaleY();
    }
    offset.x += m_tViewSize.width/this->getContainer()->getScaleX();

    endIdx   = this->_indexFromOffset(offset);
    if (endIdx == CC_INVALID_INDEX)
	{
		endIdx = uCountOfItems - 1;
	}

#if 0 // For Testing.
    CCObject* pObj;
    int i = 0;
    CCARRAY_FOREACH(m_pCellsUsed, pObj)
    {
        CCTableViewCell* pCell = (CCTableViewCell*)pObj;
        CCLog("cells Used index %d, value = %d", i, pCell->getIdx());
        i++;
    }
    CCLog("---------------------------------------");
    i = 0;
    CCARRAY_FOREACH(m_pCellsFreed, pObj)
    {
        CCTableViewCell* pCell = (CCTableViewCell*)pObj;
        CCLog("cells freed index %d, value = %d", i, pCell->getIdx());
        i++;
    }
    CCLog("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
#endif

    if (m_pCellsUsed->count() > 0)
    {
        CCTableViewCell* cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(0);

        idx = cell->getIdx();
        while(idx <startIdx)
        {
            this->_moveCellOutOfSight(cell);
            if (m_pCellsUsed->count() > 0)
            {
                cell = (CCTableViewCell*)m_pCellsUsed->objectAtIndex(0);
                idx = cell->getIdx();
            }
            else
            {
                break;
            }
        }
    }
    if (m_pCellsUsed->count() > 0)
    {
        CCTableViewCell *cell = (CCTableViewCell*)m_pCellsUsed->lastObject();
        idx = cell->getIdx();

        while(idx <= maxIdx && idx > endIdx)
        {
            this->_moveCellOutOfSight(cell);
            if (m_pCellsUsed->count() > 0)
            {
                cell = (CCTableViewCell*)m_pCellsUsed->lastObject();
                idx = cell->getIdx();

            }
            else
            {
                break;
            }
        }
    }
    CCLOG("lhou::::::::::::::::start index is %i,endIndex is %i",startIdx,endIdx);
    for (unsigned int i=startIdx; i <= endIdx; i++)
    {
        //if ([m_pIndices containsIndex:i])
        if (m_pIndices->find(i) != m_pIndices->end())
        {
            continue;
        }
        this->updateCellAtIndex(i);
    }
}

void CCTableView::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
{
    if (!this->isVisible()) {
        return;
    }
    CCLOG("ccTouchEnded m_pTouches 的长度是 %d",m_pTouches->count());
    if (m_pTouchedCell){
		CCRect bb = this->boundingBox();
		bb.origin = m_pParent->convertToWorldSpace(bb.origin);
        if(m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellUnhighlight(this, m_pTouchedCell,pTouch);
        }
		if (bb.containsPoint(pTouch->getLocation()) && m_pTableViewDelegate != NULL)
        {
            m_pTableViewDelegate->tableCellTouched(this, m_pTouchedCell,pTouch);
        }

        m_pTouchedCell = NULL;
    }
    
    CCScrollView::ccTouchEnded(pTouch, pEvent);
    if (hasScriptEventListener(NODE_TOUCH_EVENT))
    {
        executeScriptTouchHandler(CCTOUCHENDED, pTouch);
    }
}

bool CCTableView::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
{
    if (!this->isVisible()) {
        return false;
    }
    CCLOG("ccTouchBegan m_pTouches 的长度是 %d,当前的touch id 是 %d",m_pTouches->count(),pTouch->getID());
    for(int index = 0; index < m_pTouches->count();index++){
        CCTouch *touchItem = (CCTouch *)(m_pTouches->objectAtIndex(index));
        CCLOG("cctouch touch id 是 %d",touchItem->getID());
    }
    m_bTouchMoved = false;
    m_pTouches->removeAllObjects();
    if (m_pTouches->count()>=1){
        return false;
    }

    
    bool touchResult = CCScrollView::ccTouchBegan(pTouch, pEvent);

    if(m_pTouches->count() == 1) {
        unsigned int        index;
        CCPoint           point;

        point = this->getContainer()->convertTouchToNodeSpace(pTouch);

        index = this->_indexFromOffset(point);
		if (index == CC_INVALID_INDEX)
		{
			m_pTouchedCell = NULL;
		}
        else
		{
			m_pTouchedCell  = this->cellAtIndex(index);
		}

        if (m_pTouchedCell && m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellHighlight(this, m_pTouchedCell,pTouch);
        }
    }
    else if(m_pTouchedCell) {
        if(m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellUnhighlight(this, m_pTouchedCell,pTouch);
        }

        m_pTouchedCell = NULL;
    }
    if (hasScriptEventListener(NODE_TOUCH_EVENT))
    {
        executeScriptTouchHandler(CCTOUCHBEGAN, pTouch);
    }


    return touchResult;
}

void CCTableView::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
{
    CCLOG("ccTouchMoved m_pTouches 的长度是 %d",m_pTouches->count());
    CCScrollView::ccTouchMoved(pTouch, pEvent);
//    lhou
    
    if (hasScriptEventListener(NODE_TOUCH_EVENT))
    {
        executeScriptTouchHandler(CCTOUCHMOVED, pTouch);
    }

    if (m_pTouchedCell && isTouchMoved()) {
        if(m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellUnhighlight(this, m_pTouchedCell,pTouch);

        }

        m_pTouchedCell = NULL;
    }
}

void CCTableView::ccTouchCancelled(CCTouch *pTouch, CCEvent *pEvent)
{
        CCLOG("ccTouchCancelled m_pTouches 的长度是 %d",m_pTouches->count());
    CCScrollView::ccTouchCancelled(pTouch, pEvent);

    if (hasScriptEventListener(NODE_TOUCH_EVENT))
    {
        executeScriptTouchHandler(CCTOUCHCANCELLED, pTouch);
    }
    if (m_pTouchedCell) {
        if(m_pTableViewDelegate != NULL) {
            m_pTableViewDelegate->tableCellUnhighlight(this, m_pTouchedCell,pTouch);
        }

        m_pTouchedCell = NULL;
    }
}

void CCTableView::unregisterAllScriptHandler()
{
    unregisterScriptHandler(kTableViewScroll);
    unregisterScriptHandler(kTableViewZoom);
    unregisterScriptHandler(kTableCellTouched);
    unregisterScriptHandler(kTableCellHighLight);
    unregisterScriptHandler(kTableCellUnhighLight);
    unregisterScriptHandler(kTableCellWillRecycle);
    unregisterScriptHandler(kTableCellSizeForIndex);
    unregisterScriptHandler(kTableCellSizeAtIndex);
    unregisterScriptHandler(kNumberOfCellsInTableView);
}

NS_CC_EXT_END
