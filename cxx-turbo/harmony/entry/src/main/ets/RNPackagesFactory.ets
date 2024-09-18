import { RNPackageContext, RNPackage } from '@rnoh/react-native-openharmony/ts';
import { CxxTurboPackage } from 'rnoh-cxx-turbo/ts';

export function createRNPackages(ctx: RNPackageContext): RNPackage[] {
  return [
    new CxxTurboPackage(ctx),
  ];
}
