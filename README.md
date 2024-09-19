> 因为`react_native_openharmony-xxx.har`源码包体积140MB，需要使用Git LFS插件，参考[Installing Git Large File Storage](https://docs.github.com/en/repositories/working-with-files/managing-large-files/installing-git-large-file-storage)

# 项目列表

|            | type         | languages               |
|------------|--------------|-------------------------|
| cpp-turbo  | Turbo module | ArkTS & C++ for Harmony |
| cxx-turbo  | Turbo module | C++ for Harmony         |
| jsi-simple | JSI module   | JSI for Harmony         |

# 如何运行

e.g. `cpp-turbo`

0. 设置端口转发

```sh
$ hdc rport tcp:8081 tcp:8081
```

1. 运行前端debug server

```sh
$ cd example && npm i
$ npm start
```

2. DevStudio运行客户端工程

# 如何新建

e.g. `cpp-turbo`

1. 参考[rnoh-my-mod](https://github.com/Sunbreak/rnoh-my-mod.trial)新建cpp-turbo项目
2. 在`harmony/cpp_turbo`模块新增N-API声明模块`libcpp_turbo`（含`Index.d.ts`和`oh-package.json5`)，`cpp_turbo`模块添加对`libcpp_turbo`模块依赖
3. 在`harmony/cpp_turbo`模块新增N-API的注册代码`napi_init.cpp`
4. 在`cpp`文件夹新增`react-native-cpp-turbo.h`和`react-native-cpp-turbo.cpp`实现代码

# 参考

- Harmony的TurboModule示例：https://github.com/Sunbreak/rnoh-my-mod.trial
- Android/iOS的JSI示例：https://github.com/Sunbreak/reactnative-jsi.trial