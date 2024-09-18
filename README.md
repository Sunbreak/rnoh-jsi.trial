# 项目列表

|           | type         | languages       |
|-----------|--------------|-----------------|
| cpp-turbo | Turbo module | C++ for Harmony |

# 如何运行

# 如何新建

e.g. `cpp-turbo`

1. 参考[rnoh-my-mod](https://github.com/Sunbreak/rnoh-my-mod.trial)新建cpp-turbo项目
2. 在`harmony/cpp_turbo`模块新增N-API声明模块`libcpp_turbo`（含`Index.d.ts`和`oh-package.json5`)，`cpp_turbo`模块添加对`libcpp_turbo`模块依赖
3. 在`harmony/cpp_turbo`模块新增N-API的注册代码`napi_init.cpp`
4. 在`cpp`文件夹新增`react-native-cpp-turbo.h`和`react-native-cpp-turbo.cpp`实现代码

# 参考

- Harmony的TurboModule示例：https://github.com/Sunbreak/rnoh-my-mod.trial
- Android/iOS的JSI示例：https://github.com/Sunbreak/reactnative-jsi.trial