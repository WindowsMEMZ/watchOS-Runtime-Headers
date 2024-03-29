//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLEcoModeDaemonXPCDelegate_Protocol_h
#define CSLEcoModeDaemonXPCDelegate_Protocol_h
@import Foundation;

@protocol CSLEcoModeDaemonXPCDelegate <NSObject>
/* instance methods */
- (void)xpcSetEcoMode:(BOOL)mode thermalTrap:(BOOL)trap completion:(id /* block */)completion;
- (void)xpcSetInfo24hMode:(BOOL)mode deviceRotatedUp:(BOOL)up utcOffset:(long long)offset completion:(id /* block */)completion;
- (void)xpcSet24hMode:(BOOL)mode;
- (void)xpcSetDeviceRotatedUp:(BOOL)up;
- (void)xpcSetUtcOffset:(long long)offset;
- (void)xpcObliterateSettings:(id /* block */)settings;
- (void)xpcAddScreenOnDuration:(long long)duration;
- (void)xpcUpdatePowerSettingsForDemoModeWithChargeThrottling:(BOOL)throttling chargeLimitVoltage:(long long)voltage;
@end

#endif /* CSLEcoModeDaemonXPCDelegate_Protocol_h */
