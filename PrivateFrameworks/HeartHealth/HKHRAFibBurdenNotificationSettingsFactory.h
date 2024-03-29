//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHRAFibBurdenNotificationSettingsFactory_h
#define HKHRAFibBurdenNotificationSettingsFactory_h
@import Foundation;

@class HKFeatureStatus;

@interface HKHRAFibBurdenNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKFeatureStatus *featureStatus;

/* instance methods */
- (id)initWithFeatureStatus:(id)status;
- (id)bridgeSettings;
- (id)_genericBridgeSettingFooter;
- (id)_wristDetectDisabledBridgeSettingFooter;
- (id)_deviceRegionGatedBridgeSettingFooter;
- (id)_irnEnabledBridgeSettingFooter;
- (id)_remoteDisabledBridgeSettingFooter;
- (id)_seedExpiryBridgeSettingFooter;
- (id)watchSettings;
- (id)_genericWatchSettingFooter;
- (id)_deviceRegionGatedWatchSettingFooter;
- (id)_irnEnabledWatchSettingFooter;
- (id)_remoteDisabledWatchSettingFooter;
- (id)_seedExpiryWatchSettingFooter;
- (BOOL)_isOnboarded;
- (id)_evaluationForIsOnboarded:(BOOL)onboarded;
- (BOOL)_isFeatureOnboardedAndAvailableWithIsOnboarded:(BOOL)onboarded requirementsEvaluation:(id)evaluation;
@end

#endif /* HKHRAFibBurdenNotificationSettingsFactory_h */
