#include "CCLabelTTFLoader.h"



#define PROPERTY_COLOR "color"
#define PROPERTY_OPACITY "opacity"
#define PROPERTY_BLENDFUNC "blendFunc"
#define PROPERTY_FONTNAME "fontName"
#define PROPERTY_FONTSIZE "fontSize"
#define PROPERTY_HORIZONTALALIGNMENT "horizontalAlignment"
#define PROPERTY_VERTICALALIGNMENT "verticalAlignment"
#define PROPERTY_STRING "string"
#define PROPERTY_DIMENSIONS "dimensions"

NS_CC_EXT_BEGIN

void CCLabelTTFLoader::onHandlePropTypeColor3(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccColor3B pCCColor3B, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_COLOR) == 0) {
        ((CCLabelTTF *)pNode)->setColor(pCCColor3B);
    } else {
        CCNodeLoader::onHandlePropTypeColor3(pNode, pParent, pPropertyName, pCCColor3B, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeByte(CCNode * pNode, CCNode * pParent, const char * pPropertyName, unsigned char pByte, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_OPACITY) == 0) {
        ((CCLabelTTF *)pNode)->setOpacity(pByte);
    } else {
        CCNodeLoader::onHandlePropTypeByte(pNode, pParent, pPropertyName, pByte, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeBlendFunc(CCNode * pNode, CCNode * pParent, const char * pPropertyName, ccBlendFunc pCCBlendFunc, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_BLENDFUNC) == 0) {
        ((CCLabelTTF *)pNode)->setBlendFunc(pCCBlendFunc);
    } else {
        CCNodeLoader::onHandlePropTypeBlendFunc(pNode, pParent, pPropertyName, pCCBlendFunc, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeFontTTF(CCNode * pNode, CCNode * pParent, const char * pPropertyName, const char * pFontTTF, CCBReader * pCCBReader) {
//    CCLOG("pPropertyName is %s, and font file is %s", pPropertyName,pFontTTF);
    if(strcmp(pPropertyName, PROPERTY_FONTNAME) == 0) {
        
        TargetPlatform target = CCApplication::sharedApplication()->getTargetPlatform();
        if ( target != kTargetAndroid ){
            ((CCLabelTTF *)pNode)->enableStroke(ccc3(0,0,0),3.0,false);    
            ((CCLabelTTF *)pNode)->setFontName(pFontTTF);
        }else{
            ((CCLabelTTF *)pNode)->enableStroke(ccc3(0,0,0),0.3,false);    
            ((CCLabelTTF *)pNode)->setFontName("assets/font/FZZhengHeiS-M-GB2.ttf");
        }
    } else {
        CCNodeLoader::onHandlePropTypeFontTTF(pNode, pParent, pPropertyName, pFontTTF, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeText(CCNode * pNode, CCNode * pParent, const char * pPropertyName, const char * pText, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_STRING) == 0) {
//        ((CCLabelTTF *)pNode)->setString(pText);
    } else {
        CCNodeLoader::onHandlePropTypeText(pNode, pParent, pPropertyName, pText, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeFloatScale(CCNode * pNode, CCNode * pParent, const char * pPropertyName, float pFloatScale, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_FONTSIZE) == 0) {
        ((CCLabelTTF *)pNode)->setFontSize(pFloatScale);
    } else {
        CCNodeLoader::onHandlePropTypeFloatScale(pNode, pParent, pPropertyName, pFloatScale, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeIntegerLabeled(CCNode * pNode, CCNode * pParent, const char * pPropertyName, int pIntegerLabeled, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_HORIZONTALALIGNMENT) == 0) {
        ((CCLabelTTF *)pNode)->setHorizontalAlignment(CCTextAlignment(pIntegerLabeled));
    } else if(strcmp(pPropertyName, PROPERTY_VERTICALALIGNMENT) == 0) {
        ((CCLabelTTF *)pNode)->setVerticalAlignment(CCVerticalTextAlignment(pIntegerLabeled));
    } else {
        CCNodeLoader::onHandlePropTypeFloatScale(pNode, pParent, pPropertyName, pIntegerLabeled, pCCBReader);
    }
}

void CCLabelTTFLoader::onHandlePropTypeSize(CCNode * pNode, CCNode * pParent, const char * pPropertyName, CCSize pSize, CCBReader * pCCBReader) {
    if(strcmp(pPropertyName, PROPERTY_DIMENSIONS) == 0) {
        ((CCLabelTTF *)pNode)->setDimensions(pSize);
    } else {
        CCNodeLoader::onHandlePropTypeSize(pNode, pParent, pPropertyName, pSize, pCCBReader);
    }
}

NS_CC_EXT_END