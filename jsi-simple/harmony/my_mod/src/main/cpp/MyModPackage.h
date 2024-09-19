#include "RNOH/Package.h"
#include "RNOH/generated/BaseReactNativeMyModPackage.h"

namespace rnoh {

class MyModPackage : public BaseReactNativeMyModPackage {
  public:
    MyModPackage(Package::Context ctx) : BaseReactNativeMyModPackage(ctx) {}
};

} // namespace rnoh