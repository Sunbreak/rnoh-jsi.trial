#include "RNOH/Package.h"
#include "react-native-jsi-simple.h"

namespace rnoh {

using namespace facebook;

class JsiSimpleGlobalJSIBinder : public GlobalJSIBinder {
  public:
    JsiSimpleGlobalJSIBinder(GlobalJSIBinder::Context ctx) : GlobalJSIBinder(ctx) {}

    void createBindings(
        jsi::Runtime& rt,
        std::shared_ptr<TurboModuleProvider> provider) override {
        rt.global().setProperty(
            rt,
            "multiply",
            jsi::Function::createFromHostFunction(
                rt,
                jsi::PropNameID::forAscii(rt, "multiply"),
                2,
                [](jsi::Runtime &rt, const jsi::Value &thisVal, const jsi::Value *args, size_t count) -> jsi::Value {
                    return jsi::Value(multiply(args[0].getNumber(), args[1].getNumber()));
                }
            )
        );
    }
};

class JsiSimplePackage : public Package {
  public:
    JsiSimplePackage(Package::Context ctx) : Package(ctx) {}

    GlobalJSIBinders createGlobalJSIBinders() override {
        return {
            std::make_shared<JsiSimpleGlobalJSIBinder>(GlobalJSIBinder::Context{})
        };
    }
};

} // namespace rnoh