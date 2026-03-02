#pragma comment(lib, "lua51.lib")

#include "lua.hpp"

extern "C"
{
    #include "lfs.h"
    #include "lmarshal.h"
}

#include "script_additional_libs.h"

extern "C" __declspec(dllexport) int luaopen_lua_extensions(lua_State *L)
{
    open_additional_libs(L);

    luaopen_lfs(L);
    luaopen_marshal(L);

    return 0;
}