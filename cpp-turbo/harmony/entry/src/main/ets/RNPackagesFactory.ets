import { RNPackageContext, RNPackage } from '@rnoh/react-native-openharmony/ts';
import { CppTurboPackage } from 'rnoh-cpp-turbo/ts';

export function createRNPackages(ctx: RNPackageContext): RNPackage[] {
  return [
    new CppTurboPackage(ctx),
  ];
}
