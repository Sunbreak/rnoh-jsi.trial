import { TurboModule } from "@rnoh/react-native-openharmony/ts";
import { multiply } from "libcpp_turbo.so";

export class CppTurboModule extends TurboModule {
  multiply(a: number, b: number): number {
    return multiply(a, b)
  }
}