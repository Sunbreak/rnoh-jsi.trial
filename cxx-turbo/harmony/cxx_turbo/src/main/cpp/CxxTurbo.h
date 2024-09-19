#include "RNOH/TurboModule.h"
#include "react-native-cxx-turbo.h"

namespace rnoh {

using namespace facebook;

class JSI_EXPORT CxxTurbo : public TurboModule {
  public:
    CxxTurbo(const TurboModule::Context ctx, const std::string name) : TurboModule(ctx, name) {
        methodMap_ = {
            {"multiply", {
                2,
                [] (jsi::Runtime& rt, react::TurboModule& turboModule, const jsi::Value* args, size_t count) -> jsi::Value {
                    return jsi::Value(multiply(args[0].getNumber(), args[1].getNumber()));
                }
            }}
        };
    }
};

} // namespace rnoh