import { TurboModule } from "@rnoh/react-native-openharmony/ts";

export class CppTurboModule extends TurboModule {
  multiply(a: number, b: number): number {
    return a * b
  }
}