#include "RNOH/Package.h"
#include "RNOH/generated/BaseReactNativeCxxTurboPackage.h"

namespace rnoh {

class CxxTurboPackage : public BaseReactNativeCxxTurboPackage {
  public:
    CxxTurboPackage(Package::Context ctx) : BaseReactNativeCxxTurboPackage(ctx) {}
};

} // namespace rnoh