/*
** Lua binding: MotionBlurScene_luabinding
** Generated automatically by tolua++-1.0.92 on Mon Dec 22 20:59:53 2014.
*/

#include "MotionBlurScene_luabinding.h"
#include "CCLuaEngine.h"
#include "MotionBlurScene.h"
USING_NS_CC_EXT;
using namespace cocos2d;





/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_MotionBlurScene (lua_State* tolua_S)
{
 MotionBlurScene* self = (MotionBlurScene*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 // tolua_usertype(tolua_S,"CCNode"); toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(CCNode)), "CCNode");
 tolua_usertype(tolua_S,"MotionBlurScene"); toluafix_add_type_mapping(CLASS_HASH_CODE(typeid(MotionBlurScene)), "MotionBlurScene");
}

/* method: new of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_new00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MotionBlurScene* tolua_ret = (MotionBlurScene*)  Mtolua_new((MotionBlurScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MotionBlurScene");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: new_local of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_new00_local
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MotionBlurScene* tolua_ret = (MotionBlurScene*)  Mtolua_new((MotionBlurScene)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MotionBlurScene");
    tolua_register_gc(tolua_S,lua_gettop(tolua_S));
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'new'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: delete of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_delete00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_delete00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MotionBlurScene* self = (MotionBlurScene*)  tolua_tousertype(tolua_S,1,0);
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

/* method: init of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_init00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_init00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MotionBlurScene* self = (MotionBlurScene*)  tolua_tousertype(tolua_S,1,0);
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

/* method: create of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_create00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   MotionBlurScene* tolua_ret = (MotionBlurScene*)  MotionBlurScene::create();
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"MotionBlurScene");
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

/* method: execute of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_execute00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_execute00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MotionBlurScene* self = (MotionBlurScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'execute'", NULL);
#endif
  {
   self->execute();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'execute'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: setTargtNode of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_setTargtNode00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_setTargtNode00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isusertype(tolua_S,2,"CCNode",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,3,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MotionBlurScene* self = (MotionBlurScene*)  tolua_tousertype(tolua_S,1,0);
  CCNode* targetNode = ((CCNode*)  tolua_tousertype(tolua_S,2,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'setTargtNode'", NULL);
#endif
  {
   self->setTargtNode(targetNode);
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'setTargtNode'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: visit of class  MotionBlurScene */
#ifndef TOLUA_DISABLE_tolua_MotionBlurScene_luabinding_MotionBlurScene_visit00
static int tolua_MotionBlurScene_luabinding_MotionBlurScene_visit00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"MotionBlurScene",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  MotionBlurScene* self = (MotionBlurScene*)  tolua_tousertype(tolua_S,1,0);
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'visit'", NULL);
#endif
  {
   self->visit();
  }
 }
 return 0;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'visit'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_MotionBlurScene_luabinding_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"MotionBlurScene","MotionBlurScene","CCScene",tolua_collect_MotionBlurScene);
  #else
  tolua_cclass(tolua_S,"MotionBlurScene","MotionBlurScene","CCScene",NULL);
  #endif
  tolua_beginmodule(tolua_S,"MotionBlurScene");
   tolua_function(tolua_S,"new",tolua_MotionBlurScene_luabinding_MotionBlurScene_new00);
   tolua_function(tolua_S,"new_local",tolua_MotionBlurScene_luabinding_MotionBlurScene_new00_local);
   tolua_function(tolua_S,".call",tolua_MotionBlurScene_luabinding_MotionBlurScene_new00_local);
   tolua_function(tolua_S,"delete",tolua_MotionBlurScene_luabinding_MotionBlurScene_delete00);
   tolua_function(tolua_S,"init",tolua_MotionBlurScene_luabinding_MotionBlurScene_init00);
   tolua_function(tolua_S,"create",tolua_MotionBlurScene_luabinding_MotionBlurScene_create00);
   tolua_function(tolua_S,"execute",tolua_MotionBlurScene_luabinding_MotionBlurScene_execute00);
   tolua_function(tolua_S,"setTargtNode",tolua_MotionBlurScene_luabinding_MotionBlurScene_setTargtNode00);
   tolua_function(tolua_S,"visit",tolua_MotionBlurScene_luabinding_MotionBlurScene_visit00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_MotionBlurScene_luabinding (lua_State* tolua_S) {
 return tolua_MotionBlurScene_luabinding_open(tolua_S);
};
#endif


