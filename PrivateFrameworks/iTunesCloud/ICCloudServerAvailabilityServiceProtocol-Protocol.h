//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICCloudServerAvailabilityServiceProtocol_Protocol_h
#define ICCloudServerAvailabilityServiceProtocol_Protocol_h
@import Foundation;

@protocol ICCloudServerAvailabilityServiceProtocol <NSObject>
/* instance methods */
- (void)hasProperNetworkConditionsToPlayMediaWithCompletion:(id /* block */)completion;
- (void)hasProperNetworkConditionsToShowCloudMediaWithCompletion:(id /* block */)completion;
- (void)isCellularDataRestrictedForMusicWithCompletion:(id /* block */)completion;
- (void)shouldProhibitMusicActionForCurrentNetworkConditionsWithCompletion:(id /* block */)completion;
- (void)isCellularDataRestrictedForVideosWithCompletion:(id /* block */)completion;
- (void)shouldProhibitVideosActionForCurrentNetworkConditionsWithCompletion:(id /* block */)completion;
- (void)isCellularDataRestrictedForStoreAppsWithCompletion:(id /* block */)completion;
- (void)shouldProhibitStoreAppsActionForCurrentNetworkConditionsWithCompletion:(id /* block */)completion;
- (void)canShowCloudDownloadButtonsWithCompletion:(id /* block */)completion;
- (void)canShowCloudMusicWithCompletion:(id /* block */)completion;
- (void)canShowCloudVideoWithCompletion:(id /* block */)completion;
@end

#endif /* ICCloudServerAvailabilityServiceProtocol_Protocol_h */
