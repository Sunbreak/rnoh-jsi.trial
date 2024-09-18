/**
 * This code was generated by "react-native codegen-harmony"
 *
 * Do not edit this file as changes may cause incorrect behavior and will be
 * lost once the code is regenerated.
 *
 * @generatorVersion: 2
 */
#pragma once

#include "RNOH/Package.h"
#include "RNOH/ArkTSTurboModule.h"
#include "RNOH/generated/turbo_modules/MyMod.h"

namespace rnoh {

class BaseReactNativeMyModPackageTurboModuleFactoryDelegate : public TurboModuleFactoryDelegate {
  public:
    SharedTurboModule createTurboModule(Context ctx, const std::string &name) const override {
        if (name == "MyMod") {
            return std::make_shared<MyMod>(ctx, name);
        }
        return nullptr;
    };
};

class BaseReactNativeMyModPackage : public Package {
  public:
    BaseReactNativeMyModPackage(Package::Context ctx) : Package(ctx){};

    std::unique_ptr<TurboModuleFactoryDelegate> createTurboModuleFactoryDelegate() override {
        return std::make_unique<BaseReactNativeMyModPackageTurboModuleFactoryDelegate>();
    }

    std::vector<facebook::react::ComponentDescriptorProvider> createComponentDescriptorProviders() override {
        return {
        };
    }

    ComponentJSIBinderByString createComponentJSIBinderByName() override {
        return {
        };
    };

    EventEmitRequestHandlers createEventEmitRequestHandlers() override {
        return {};
    }
};

} // namespace rnoh
