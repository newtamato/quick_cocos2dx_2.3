/*
** Lua binding: cocos2dx_x_extension_gesture_recognizer
** Generated automatically by tolua++-1.0.92 on Tue Sep 10 14:56:21 2013.
*/

#include "cocos2dx_x_extension_gesture_recognizer.h"
#include "CCLuaEngine.h"

using namespace cocos2d;





/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCPanGestureRecognizer (lua_State* tolua_S)
{
 CCPanGestureRecognizer* self = (CCPanGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCSwipeGestureRecognizer (lua_State* tolua_S)
{
 CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCGestureRecognizer (lua_State* tolua_S)
{
 CCGestureRecognizer* self = (CCGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCTapGestureRecognizer (lua_State* tolua_S)
{
 CCTapGestureRecognizer* self = (CCTapGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}

static int tolua_collect_CCPinchGestureRecognizer (lua_State* tolua_S)
{
 CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"cocos2d::CCLayer");
 tolua_usertype(tolua_S,"CCSwipeGestureRecognizer");
 tolua_usertype(tolua_S,"CCPinchGestureRecognizer");
 tolua_usertype(tolua_S,"CCPinch");
 tolua_usertype(tolua_S,"cocos2d::CCNode");
 tolua_usertype(tolua_S,"CCPanGestureRecognizer");
 tolua_usertype(tolua_S,"cocos2d::CCCallFunc");
 tolua_usertype(tolua_S,"CCPan");
 tolua_usertype(tolua_S,"cocos2d::CCEvent");
 tolua_usertype(tolua_S,"cocos2d::CCTouch");
 tolua_usertype(tolua_S,"CCGestureRecognizer");
 tolua_usertype(tolua_S,"CCTapGestureRecognizer");
 tolua_usertype(tolua_S,"CCTap");
 tolua_usertype(tolua_S,"cocos2d::CCPoint");
 tolua_usertype(tolua_S,"CCSwipe");
 tolua_usertype(tolua_S,"cocos2d::CCObject");
}

/* method: init of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSwipe",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSwipe* tolua_ret = (CCSwipe*)  CCSwipe::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSwipe");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: direction of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_get_CCSwipe_direction
static int tolua_get_CCSwipe_direction(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->direction);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: direction of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_set_CCSwipe_direction
static int tolua_set_CCSwipe_direction(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'direction'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->direction = ((CCSwipeGestureRecognizerDirection) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_get_CCSwipe_location
static int tolua_get_CCSwipe_location(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location,"cocos2d::CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location of class  CCSwipe */
#ifndef TOLUA_DISABLE_tolua_set_CCSwipe_location
static int tolua_set_CCSwipe_location(lua_State* tolua_S)
{
  CCSwipe* self = (CCSwipe*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cocos2d::CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location = *((cocos2d::CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_delete00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCSwipeGestureRecognizer* tolua_ret = (CCSwipeGestureRecognizer*)  CCSwipeGestureRecognizer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCSwipeGestureRecognizer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchBegan00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchMoved00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCSwipeGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchEnded00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCSwipeGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCSwipeGestureRecognizer* self = (CCSwipeGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'create'", NULL);
#endif
  {
   self->create();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_delete00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTarget of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setTarget00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setTarget00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCObject",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCCallFunc",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCObject* tar = ((cocos2d::CCObject*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCCallFunc* sel = ((cocos2d::CCCallFunc*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTarget'", NULL);
#endif
  {
   self->setTarget(tar,sel);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTarget'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setParent of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setParent00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setParent00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCNode* p = ((cocos2d::CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setParent'", NULL);
#endif
  {
   self->setParent(p);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setParent'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: getCancelsTouchesInView of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_getCancelsTouchesInView00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_getCancelsTouchesInView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'getCancelsTouchesInView'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->getCancelsTouchesInView();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'getCancelsTouchesInView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setCancelsTouchesInView of class  CCGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setCancelsTouchesInView00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setCancelsTouchesInView00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCGestureRecognizer",0,&tolua_err) ||
     !tolua_isboolean(tolua_S,2,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCGestureRecognizer* self = (CCGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  bool cancelsTouchesInView = ((bool)  tolua_toboolean(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setCancelsTouchesInView'", NULL);
#endif
  {
   self->setCancelsTouchesInView(cancelsTouchesInView);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setCancelsTouchesInView'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCTap */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTap* self = (CCTap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCTap */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTap",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTap* tolua_ret = (CCTap*)  CCTap::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCTap");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location of class  CCTap */
#ifndef TOLUA_DISABLE_tolua_get_CCTap_location
static int tolua_get_CCTap_location(lua_State* tolua_S)
{
  CCTap* self = (CCTap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location,"cocos2d::CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location of class  CCTap */
#ifndef TOLUA_DISABLE_tolua_set_CCTap_location
static int tolua_set_CCTap_location(lua_State* tolua_S)
{
  CCTap* self = (CCTap*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cocos2d::CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location = *((cocos2d::CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTapGestureRecognizer* self = (CCTapGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_delete00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTapGestureRecognizer* self = (CCTapGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCTapGestureRecognizer* tolua_ret = (CCTapGestureRecognizer*)  CCTapGestureRecognizer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCTapGestureRecognizer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchBegan00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTapGestureRecognizer* self = (CCTapGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchMoved00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTapGestureRecognizer* self = (CCTapGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCTapGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchEnded00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCTapGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCTapGestureRecognizer* self = (CCTapGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPan* self = (CCPan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPan",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPan* tolua_ret = (CCPan*)  CCPan::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPan");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: location of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_get_CCPan_location
static int tolua_get_CCPan_location(lua_State* tolua_S)
{
  CCPan* self = (CCPan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->location,"cocos2d::CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: location of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_set_CCPan_location
static int tolua_set_CCPan_location(lua_State* tolua_S)
{
  CCPan* self = (CCPan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'location'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cocos2d::CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->location = *((cocos2d::CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* get function: delta of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_get_CCPan_delta
static int tolua_get_CCPan_delta(lua_State* tolua_S)
{
  CCPan* self = (CCPan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'delta'",NULL);
#endif
   tolua_pushusertype(tolua_S,(void*)&self->delta,"cocos2d::CCPoint");
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: delta of class  CCPan */
#ifndef TOLUA_DISABLE_tolua_set_CCPan_delta
static int tolua_set_CCPan_delta(lua_State* tolua_S)
{
  CCPan* self = (CCPan*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'delta'",NULL);
  if ((tolua_isvaluenil(tolua_S,2,&tolua_err) || !tolua_isusertype(tolua_S,2,"cocos2d::CCPoint",0,&tolua_err)))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->delta = *((cocos2d::CCPoint*)  tolua_tousertype(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPanGestureRecognizer* self = (CCPanGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_delete00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPanGestureRecognizer* self = (CCPanGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPanGestureRecognizer* tolua_ret = (CCPanGestureRecognizer*)  CCPanGestureRecognizer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPanGestureRecognizer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchBegan00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPanGestureRecognizer* self = (CCPanGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchMoved00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPanGestureRecognizer* self = (CCPanGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCPanGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchEnded00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPanGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPanGestureRecognizer* self = (CCPanGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCPinch */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinch* self = (CCPinch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPinch */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPinch",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPinch* tolua_ret = (CCPinch*)  CCPinch::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPinch");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* get function: type of class  CCPinch */
#ifndef TOLUA_DISABLE_tolua_get_CCPinch_type
static int tolua_get_CCPinch_type(lua_State* tolua_S)
{
  CCPinch* self = (CCPinch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
#endif
  tolua_pushnumber(tolua_S,(lua_Number)self->type);
 return 1;
}
#endif //#ifndef TOLUA_DISABLE

/* set function: type of class  CCPinch */
#ifndef TOLUA_DISABLE_tolua_set_CCPinch_type
static int tolua_set_CCPinch_type(lua_State* tolua_S)
{
  CCPinch* self = (CCPinch*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  tolua_Error tolua_err;
  if (!self) tolua_error(tolua_S,"invalid 'self' in accessing variable 'type'",NULL);
  if (!tolua_isnumber(tolua_S,2,0,&tolua_err))
   tolua_error(tolua_S,"#vinvalid type in variable assignment.",&tolua_err);
#endif
  self->type = ((CCPinchGestureRecognizerType) (int)  tolua_tonumber(tolua_S,2,0))
;
 return 0;
}
#endif //#ifndef TOLUA_DISABLE

/* method: init of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_init00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'init'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->init();
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'init'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_delete00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'delete'", NULL);
#endif
  Mtolua_delete(self);
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'delete'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: create of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_create00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCPinchGestureRecognizer* tolua_ret = (CCPinchGestureRecognizer*)  CCPinchGestureRecognizer::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCPinchGestureRecognizer");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'create'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchBegan of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchBegan00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchBegan00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchBegan'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->ccTouchBegan(pTouch,pEvent);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchBegan'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchMoved of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchMoved00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchMoved00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchMoved'", NULL);
#endif
  {
   self->ccTouchMoved(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchMoved'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: ccTouchEnded of class  CCPinchGestureRecognizer */
#ifndef TOLUA_DISABLE_tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchEnded00
static int tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchEnded00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCPinchGestureRecognizer",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"cocos2d::CCTouch",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,3,"cocos2d::CCEvent",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCPinchGestureRecognizer* self = (CCPinchGestureRecognizer*)  tolua_tousertype(tolua_S,1,0);
  cocos2d::CCTouch* pTouch = ((cocos2d::CCTouch*)  tolua_tousertype(tolua_S,2,0));
  cocos2d::CCEvent* pEvent = ((cocos2d::CCEvent*)  tolua_tousertype(tolua_S,3,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'ccTouchEnded'", NULL);
#endif
  {
   self->ccTouchEnded(pTouch,pEvent);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'ccTouchEnded'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_cocos2dx_x_extension_gesture_recognizer_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  tolua_constant(tolua_S,"kSwipeMaxDuration",kSwipeMaxDuration);
  tolua_constant(tolua_S,"kSwipeMinDistance",kSwipeMinDistance);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionRight",kSwipeGestureRecognizerDirectionRight);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionLeft",kSwipeGestureRecognizerDirectionLeft);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionUp",kSwipeGestureRecognizerDirectionUp);
  tolua_constant(tolua_S,"kSwipeGestureRecognizerDirectionDown",kSwipeGestureRecognizerDirectionDown);
  tolua_cclass(tolua_S,"CCSwipe","CCSwipe","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCSwipe");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_init00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipe_create00);
   tolua_variable(tolua_S,"direction",tolua_get_CCSwipe_direction,tolua_set_CCSwipe_direction);
   tolua_variable(tolua_S,"location",tolua_get_CCSwipe_location,tolua_set_CCSwipe_location);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCSwipeGestureRecognizer","CCSwipeGestureRecognizer","CCGestureRecognizer",tolua_collect_CCSwipeGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCSwipeGestureRecognizer","CCSwipeGestureRecognizer","CCGestureRecognizer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCSwipeGestureRecognizer");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_init00);
   tolua_function(tolua_S,"delete",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_delete00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_create00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_cocos2dx_x_extension_gesture_recognizer_CCSwipeGestureRecognizer_ccTouchEnded00);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCGestureRecognizer","CCGestureRecognizer","cocos2d::CCLayer",tolua_collect_CCGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCGestureRecognizer","CCGestureRecognizer","cocos2d::CCLayer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCGestureRecognizer");
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_create00);
   tolua_function(tolua_S,"delete",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_delete00);
   tolua_function(tolua_S,"setTarget",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setTarget00);
   tolua_function(tolua_S,"setParent",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setParent00);
   tolua_function(tolua_S,"getCancelsTouchesInView",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_getCancelsTouchesInView00);
   tolua_function(tolua_S,"setCancelsTouchesInView",tolua_cocos2dx_x_extension_gesture_recognizer_CCGestureRecognizer_setCancelsTouchesInView00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kTapMaxDuration",kTapMaxDuration);
  tolua_constant(tolua_S,"kTapMaxDurationBetweenTaps",kTapMaxDurationBetweenTaps);
  tolua_constant(tolua_S,"kTapMaxDistance",kTapMaxDistance);
  tolua_constant(tolua_S,"kTapMaxDistanceBetweenTaps",kTapMaxDistanceBetweenTaps);
  tolua_cclass(tolua_S,"CCTap","CCTap","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCTap");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_init00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCTap_create00);
   tolua_variable(tolua_S,"location",tolua_get_CCTap_location,tolua_set_CCTap_location);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCTapGestureRecognizer","CCTapGestureRecognizer","CCGestureRecognizer",tolua_collect_CCTapGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCTapGestureRecognizer","CCTapGestureRecognizer","CCGestureRecognizer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCTapGestureRecognizer");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_init00);
   tolua_function(tolua_S,"delete",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_delete00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_create00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_cocos2dx_x_extension_gesture_recognizer_CCTapGestureRecognizer_ccTouchEnded00);
  tolua_endmodule(tolua_S);
  tolua_cclass(tolua_S,"CCPan","CCPan","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCPan");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_init00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCPan_create00);
   tolua_variable(tolua_S,"location",tolua_get_CCPan_location,tolua_set_CCPan_location);
   tolua_variable(tolua_S,"delta",tolua_get_CCPan_delta,tolua_set_CCPan_delta);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCPanGestureRecognizer","CCPanGestureRecognizer","CCGestureRecognizer",tolua_collect_CCPanGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCPanGestureRecognizer","CCPanGestureRecognizer","CCGestureRecognizer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCPanGestureRecognizer");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_init00);
   tolua_function(tolua_S,"delete",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_delete00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_create00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_cocos2dx_x_extension_gesture_recognizer_CCPanGestureRecognizer_ccTouchEnded00);
  tolua_endmodule(tolua_S);
  tolua_constant(tolua_S,"kPinchThreshold",kPinchThreshold);
  tolua_constant(tolua_S,"kPinchGestureRecognizerTypeClose",kPinchGestureRecognizerTypeClose);
  tolua_constant(tolua_S,"kPinchGestureRecognizerTypeOpen",kPinchGestureRecognizerTypeOpen);
  tolua_cclass(tolua_S,"CCPinch","CCPinch","cocos2d::CCObject",NULL);
  tolua_beginmodule(tolua_S,"CCPinch");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_init00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinch_create00);
   tolua_variable(tolua_S,"type",tolua_get_CCPinch_type,tolua_set_CCPinch_type);
  tolua_endmodule(tolua_S);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCPinchGestureRecognizer","CCPinchGestureRecognizer","CCGestureRecognizer",tolua_collect_CCPinchGestureRecognizer);
  #else
  tolua_cclass(tolua_S,"CCPinchGestureRecognizer","CCPinchGestureRecognizer","CCGestureRecognizer",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCPinchGestureRecognizer");
   tolua_function(tolua_S,"init",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_init00);
   tolua_function(tolua_S,"delete",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_delete00);
   tolua_function(tolua_S,"create",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_create00);
   tolua_function(tolua_S,"ccTouchBegan",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchBegan00);
   tolua_function(tolua_S,"ccTouchMoved",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchMoved00);
   tolua_function(tolua_S,"ccTouchEnded",tolua_cocos2dx_x_extension_gesture_recognizer_CCPinchGestureRecognizer_ccTouchEnded00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_cocos2dx_x_extension_gesture_recognizer (lua_State* tolua_S) {
 return tolua_cocos2dx_x_extension_gesture_recognizer_open(tolua_S);
};
#endif

