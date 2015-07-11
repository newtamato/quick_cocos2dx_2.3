//
//  MotionBlurScene.h
//  quickcocos2dx
//
//  Created by newtomato on 12/22/14.
//  Copyright (c) 2014 qeeplay.com. All rights reserved.
//

#ifndef __quickcocos2dx__MotionBlurScene__
#define __quickcocos2dx__MotionBlurScene__

#include <stdio.h>
#include "cocos2d.h"
#include "ExtensionMacros.h"
NS_CC_EXT_BEGIN

class CC_DLL MotionBlurScene: public CCScene
{
public:
    
    MotionBlurScene();
    
    virtual ~MotionBlurScene();
    bool init();
    
    static MotionBlurScene* create();
 
    virtual void execute();
    virtual void setTargtNode(CCNode* targetNode);
    virtual void moveRender();
private:
	bool mClearRenderTexture;
	CCArray* mRenderTextures;
	int mCurrentRenderTextureIndex;
	CCNode * mTaragetNode;
    void setupRenderTextures();
    void selectNextRenderTexture();
    void changeRenderTextureClearMode();
    void createTheItemIcon();
    
};
NS_CC_EXT_END;

#endif /* defined(__quickcocos2dx__MotionBlurScene__) */
