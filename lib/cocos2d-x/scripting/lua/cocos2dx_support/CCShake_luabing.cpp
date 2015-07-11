/*
** Lua binding: CCShake_luabing
** Generated automatically by tolua++-1.0.92 on Sat Nov 16 17:40:30 2013.
*/

#include "CCShake_luabing.h"
#include "CCLuaEngine.h"
#include "CCShake.h"

using namespace cocos2d;





/* function to release collected object via destructor */
#ifdef __cplusplus

static int tolua_collect_CCShake (lua_State* tolua_S)
{
 CCShake* self = (CCShake*) tolua_tousertype(tolua_S,1,0);
    Mtolua_delete(self);
    return 0;
}
#endif


/* function to register type */
static void tolua_reg_types (lua_State* tolua_S)
{
 tolua_usertype(tolua_S,"CCActionInterval");
 tolua_usertype(tolua_S,"CCShake");
}

/* method: new of class  CCShake */
#ifndef TOLUA_DISABLE_tolua_CCShake_luabing_CCShake_new00
static int tolua_CCShake_luabing_CCShake_new00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCShake",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCShake* tolua_ret = (CCShake*)  Mtolua_new((CCShake)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCShake");
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

/* method: new_local of class  CCShake */
#ifndef TOLUA_DISABLE_tolua_CCShake_luabing_CCShake_new00_local
static int tolua_CCShake_luabing_CCShake_new00_local(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCShake",0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,2,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  {
   CCShake* tolua_ret = (CCShake*)  Mtolua_new((CCShake)());
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCShake");
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

/* method: create of class  CCShake */
#ifndef TOLUA_DISABLE_tolua_CCShake_luabing_CCShake_create00
static int tolua_CCShake_luabing_CCShake_create00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCShake",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,4,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  float strength = ((float)  tolua_tonumber(tolua_S,3,0));
  {
   CCShake* tolua_ret = (CCShake*)  CCShake::create(d,strength);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCShake");
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

/* method: createWithStrength of class  CCShake */
#ifndef TOLUA_DISABLE_tolua_CCShake_luabing_CCShake_createWithStrength00
static int tolua_CCShake_luabing_CCShake_createWithStrength00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertable(tolua_S,1,"CCShake",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  float strength_x = ((float)  tolua_tonumber(tolua_S,3,0));
  float strength_y = ((float)  tolua_tonumber(tolua_S,4,0));
  {
   CCShake* tolua_ret = (CCShake*)  CCShake::createWithStrength(d,strength_x,strength_y);
    tolua_pushusertype(tolua_S,(void*)tolua_ret,"CCShake");
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'createWithStrength'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* method: initWithDuration of class  CCShake */
#ifndef TOLUA_DISABLE_tolua_CCShake_luabing_CCShake_initWithDuration00
static int tolua_CCShake_luabing_CCShake_initWithDuration00(lua_State* tolua_S)
{
#ifndef TOLUA_RELEASE
 tolua_Error tolua_err;
 if (
     !tolua_isusertype(tolua_S,1,"CCShake",0,&tolua_err) ||
     !tolua_isnumber(tolua_S,2,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,3,0,&tolua_err) ||
     !tolua_isnumber(tolua_S,4,0,&tolua_err) ||
     !tolua_isnoobj(tolua_S,5,&tolua_err)
 )
  goto tolua_lerror;
 else
#endif
 {
  CCShake* self = (CCShake*)  tolua_tousertype(tolua_S,1,0);
  float d = ((float)  tolua_tonumber(tolua_S,2,0));
  float strength_x = ((float)  tolua_tonumber(tolua_S,3,0));
  float strength_y = ((float)  tolua_tonumber(tolua_S,4,0));
#ifndef TOLUA_RELEASE
  if (!self) tolua_error(tolua_S,"invalid 'self' in function 'initWithDuration'", NULL);
#endif
  {
   bool tolua_ret = (bool)  self->initWithDuration(d,strength_x,strength_y);
   tolua_pushboolean(tolua_S,(bool)tolua_ret);
  }
 }
 return 1;
#ifndef TOLUA_RELEASE
 tolua_lerror:
 tolua_error(tolua_S,"#ferror in function 'initWithDuration'.",&tolua_err);
 return 0;
#endif
}
#endif //#ifndef TOLUA_DISABLE

/* Open function */
TOLUA_API int tolua_CCShake_luabing_open (lua_State* tolua_S)
{
 tolua_open(tolua_S);
 tolua_reg_types(tolua_S);
 tolua_module(tolua_S,NULL,0);
 tolua_beginmodule(tolua_S,NULL);
  #ifdef __cplusplus
  tolua_cclass(tolua_S,"CCShake","CCShake","CCActionInterval",tolua_collect_CCShake);
  #else
  tolua_cclass(tolua_S,"CCShake","CCShake","CCActionInterval",NULL);
  #endif
  tolua_beginmodule(tolua_S,"CCShake");
   tolua_function(tolua_S,"new",tolua_CCShake_luabing_CCShake_new00);
   tolua_function(tolua_S,"new_local",tolua_CCShake_luabing_CCShake_new00_local);
   tolua_function(tolua_S,".call",tolua_CCShake_luabing_CCShake_new00_local);
   tolua_function(tolua_S,"create",tolua_CCShake_luabing_CCShake_create00);
   tolua_function(tolua_S,"createWithStrength",tolua_CCShake_luabing_CCShake_createWithStrength00);
   tolua_function(tolua_S,"initWithDuration",tolua_CCShake_luabing_CCShake_initWithDuration00);
  tolua_endmodule(tolua_S);
 tolua_endmodule(tolua_S);
 return 1;
}


#if defined(LUA_VERSION_NUM) && LUA_VERSION_NUM >= 501
 TOLUA_API int luaopen_CCShake_luabing (lua_State* tolua_S) {
 return tolua_CCShake_luabing_open(tolua_S);
};
#endif

