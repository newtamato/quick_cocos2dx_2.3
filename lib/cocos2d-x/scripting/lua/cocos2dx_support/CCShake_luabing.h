
#ifndef __CCSHAKE_LUABING_H_
#define __CCSHAKE_LUABING_H_

extern "C" {
#include "lua.h"
#include "tolua++.h"
#include "tolua_fix.h"
}

TOLUA_API int luaopen_CCShake_luabing(lua_State* tolua_S);

#endif // __CCSHAKE_LUABING_H_
