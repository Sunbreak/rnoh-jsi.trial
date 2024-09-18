import { TurboModule } from "@rnoh/react-native-openharmony/ts";

export class CxxTurboModule extends TurboModule {
  multiply(a: number, b: number): number {
    return a * b
  }
}