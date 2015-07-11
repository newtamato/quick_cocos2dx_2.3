
#ifndef __COCOS2DX_X_EXTENSION_GESTURE_RECOGNIZER_H_
#define __COCOS2DX_X_EXTENSION_GESTURE_RECOGNIZER_H_

extern "C" {
#include "lua.h"
#include "tolua++.h"
#include "tolua_fix.h"
}

TOLUA_API int luaopen_cocos2dx_x_extension_gesture_recognizer(lua_State* tolua_S);

#endif // __COCOS2DX_X_EXTENSION_GESTURE_RECOGNIZER_H_
