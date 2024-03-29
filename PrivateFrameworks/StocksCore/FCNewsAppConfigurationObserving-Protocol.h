//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef FCNewsAppConfigurationObserving_Protocol_h
#define FCNewsAppConfigurationObserving_Protocol_h
@import Foundation;

@protocol FCNewsAppConfigurationObserving <NSObject>
@optional
/* instance methods */
- (void)configurationManager:(id)manager appConfigurationDidChange:(id)change;
- (void)configurationManagerSignificantAppConfigChange:(id)change;
- (void)configurationManagerPaywallConfigDidChange:(id)change;
@end

#endif /* FCNewsAppConfigurationObserving_Protocol_h */
