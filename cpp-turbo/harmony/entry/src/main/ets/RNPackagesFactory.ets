import { RNPackageContext, RNPackage } from '@rnoh/react-native-openharmony/ts';
import { MyModPackage } from 'rnoh-my-mod/ts';

export function createRNPackages(ctx: RNPackageContext): RNPackage[] {
  return [
    new MyModPackage(ctx),
  ];
}
