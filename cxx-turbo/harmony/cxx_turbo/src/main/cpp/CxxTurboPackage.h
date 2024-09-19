#include "RNOH/Package.h"
#include "CxxTurbo.h"

namespace rnoh {

class CxxTurboPackageTurboModuleFactoryDelegate : public TurboModuleFactoryDelegate {
  public:
    SharedTurboModule createTurboModule(Context ctx, const std::string &name) const override {
        if (name == "CxxTurbo") {
            return std::make_shared<CxxTurbo>(ctx, name);
        }
        return nullptr;
    };
};

class CxxTurboPackage : public Package {
  public:
    CxxTurboPackage(Package::Context ctx) : Package(ctx) {}
    
    std::unique_ptr<TurboModuleFactoryDelegate> createTurboModuleFactoryDelegate() override {
        return std::make_unique<CxxTurboPackageTurboModuleFactoryDelegate>();
    }
};

} // namespace rnoh