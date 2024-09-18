#include "napi/native_api.h"
#include "RNOH/ArkJS.h"
#include "react-native-cpp-turbo.h"

static napi_value Multiply(napi_env env, napi_callback_info info)
{
    ArkJS arkJs(env);
    auto args = arkJs.getCallbackArgs(info, 2);
    auto a = arkJs.getDouble(args[0]);
    auto b = arkJs.getDouble(args[1]);
    auto r = multiply(a, b);
    return arkJs.createDouble(r);
}

EXTERN_C_START
static napi_value Init(napi_env env, napi_value exports)
{
    napi_property_descriptor desc[] = {
        { "multiply", nullptr, Multiply, nullptr, nullptr, nullptr, napi_default, nullptr }
    };
    napi_define_properties(env, exports, sizeof(desc) / sizeof(desc[0]), desc);
    return exports;
}
EXTERN_C_END

static napi_module demoModule = {
    .nm_version = 1,
    .nm_flags = 0,
    .nm_filename = nullptr,
    .nm_register_func = Init,
    .nm_modname = "cpp_turbo",
    .nm_priv = ((void*)0),
    .reserved = { 0 },
};

extern "C" __attribute__((constructor)) void RegisterModule(void)
{
    napi_module_register(&demoModule);
}
