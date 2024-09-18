import { TurboModule } from "@rnoh/react-native-openharmony/ts";

export class MyModModule extends TurboModule {
  multiply(a: number, b: number): number {
    return a * b
  }
}