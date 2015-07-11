//
//  MotionBlurScene.cpp
//  quickcocos2dx
//
//  Created by newtomato on 12/22/14.
//  Copyright (c) 2014 qeeplay.com. All rights reserved.
//

#include "MotionBlurScene.h"
#include "cocos2d.h"
NS_CC_EXT_BEGIN

const int kRenderTextureCount = 4;
MotionBlurScene::MotionBlurScene():
	mTaragetNode(NULL),
	mCurrentRenderTextureIndex(0),
	mRenderTextures(NULL),
	mClearRenderTexture(false)
{}

MotionBlurScene::~MotionBlurScene()
{
	mTaragetNode = NULL;
    mRenderTextures->release();
	mCurrentRenderTextureIndex = 0;
	mClearRenderTexture = false;
	mRenderTextures = NULL;

}
MotionBlurScene* MotionBlurScene::create(){
    MotionBlurScene* pRet = new MotionBlurScene();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }

}

void MotionBlurScene::setupRenderTextures()
{
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    this->mRenderTextures = CCArray::create();
    this->mRenderTextures->retain();
    for (int i = 0; i<kRenderTextureCount; i++) {
        CCRenderTexture * renderTexture = CCRenderTexture::create(size.width, size.height);
        renderTexture->setPosition(size.width/2, size.height/2);
//        CCSprite *sprite = renderTexture->getSprite();
//        CCTexture2D * texture2d = sprite->getTexture();
        CCSprite *sprite2 = CCSprite::createWithTexture(renderTexture->getSprite()->getTexture());
        sprite2->setPosition(renderTexture->getPosition());
        sprite2->setScaleY(-1);
        this->addChild(sprite2,i+1);
        renderTexture->setUserData(sprite2);
        this->mRenderTextures->addObject(renderTexture);
    }
    
}


bool MotionBlurScene::init(){
    if (CCLayer::init())
    {
        this->setupRenderTextures();
//        this->scheduleUpdate();
        this->createTheItemIcon();
        this->mClearRenderTexture = true;
        CCDirector::sharedDirector()->getScheduler()->scheduleSelector(schedule_selector(MotionBlurScene::changeRenderTextureClearMode),this,20,false);
                CCDirector::sharedDirector()->getScheduler()->scheduleSelector(schedule_selector(MotionBlurScene::moveRender),this,0.03,false);

        return true;
    }
    return false;
    
}
void MotionBlurScene::createTheItemIcon()
{
    CCSprite* sprite = CCSprite::create("otherAssets/billy.png");
    this->addChild(sprite);
    sprite->setCascadeOpacityEnabled(true);
    sprite->setPosition(ccp(330, 400));
    sprite->setTag(11);
    CCRotateBy *act = CCRotateBy::create(10,180);
    CCRepeatForever* repeatAct = CCRepeatForever::create(act);
    sprite:runAction(repeatAct);
    CCLabelTTF* label = CCLabelTTF::create("AASDFASDsfsdsadf", "Arial", 28);
    label->setPosition(ccp(0,0));
    sprite->addChild(label);
    
    
    
    
    

}
void MotionBlurScene::setTargtNode(CCNode* targetNode)
{
    this->mTaragetNode = targetNode;
}
void MotionBlurScene::execute(){
    
//    this->schedule(schedule_selector(MotionBlurScene::changeRenderTextureClearMode),1.0f);
}

void MotionBlurScene::changeRenderTextureClearMode()
{
    this->mClearRenderTexture = !this->mClearRenderTexture;
    CCLog("开始受到onEnterFrame事件");
    CCObject * renderItem;
//    CCSprite* sprite = (CCSprite*)this->getChildByTag(11);
//    sprite->setPosition(ccp(random()*20, random()*30));
    
    CCARRAY_FOREACH(this->mRenderTextures, renderItem){
        CCRenderTexture* renderTexture = (CCRenderTexture*)renderItem;
        renderTexture->clear(1, 1, 1, 0);
    }
    
    
}
void MotionBlurScene::selectNextRenderTexture()
{
    mCurrentRenderTextureIndex ++;
    CCLog("selectNextRenderTexture is %d",mCurrentRenderTextureIndex);
    if (mCurrentRenderTextureIndex >= kRenderTextureCount)
    {
        mCurrentRenderTextureIndex = 0;
    }
}

void MotionBlurScene::moveRender(){
    // force manual drawing by not calling super visit ...
    //[super visit];
    
    // render into next rendertexture
    CCLOG("运动模糊开始visit,mCurrentRenderTextureIndex is %d",mCurrentRenderTextureIndex);
    CCRenderTexture* rtx = (CCRenderTexture*)this->mRenderTextures->objectAtIndex(mCurrentRenderTextureIndex);
    
    if (this->mClearRenderTexture)
    {
        rtx->beginWithClear(0, 0, 0, 0);
    }
    else
    {
        rtx->begin();
    }
    
    CCObject* node;
    
   
    CCARRAY_FOREACH(this->getChildren(), node)
    {
        CCNode* ccnode = (CCNode*)node;
        if (ccnode->getTag() == 11)
        {
            ccnode->visit();
        }
    }
    rtx->end();
//     reorder the render textures so that the most recently rendered texture is drawn last

    this->selectNextRenderTexture();
    int index = this->mCurrentRenderTextureIndex;
    for (int i = 0; i < kRenderTextureCount; i++)
    {
        CCRenderTexture* rtx = (CCRenderTexture*)this->mRenderTextures->objectAtIndex(index);
        CCSprite* renderSprite = (CCSprite*)rtx->getUserData();
        renderSprite:setOpacity((255.0f / kRenderTextureCount) * (i + 1));
        this->reorderChild(renderSprite, i+1);
//        this->selectNextRenderTexture();
        
        index++;
        if (index >= kRenderTextureCount) {
            index = 0;
        }
    }
    
    // draw any remaining nodes
    CCARRAY_FOREACH(this->getChildren(), node)
    {
        CCNode* ccnode = (CCNode*)node;
        if (ccnode->getTag() != 11){
            ccnode->visit();
        }
        
    }

}




NS_CC_EXT_END;