#include "RNOH/Package.h"
#include "RNOH/generated/BaseReactNativeCppTurboPackage.h"

namespace rnoh {

class CppTurboPackage : public BaseReactNativeCppTurboPackage {
  public:
    CppTurboPackage(Package::Context ctx) : BaseReactNativeCppTurboPackage(ctx) {}
};

} // namespace rnoh