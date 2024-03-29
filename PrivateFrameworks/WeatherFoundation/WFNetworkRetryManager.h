//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFNetworkRetryManager_h
#define WFNetworkRetryManager_h
@import Foundation;

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WFNetworkRetryManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *failTrackerDict;
@property (readonly, nonatomic) NSMutableSet *failingAPIVersionsSet;
@property (readonly, nonatomic) NSArray *apiVersions;
@property (readonly, nonatomic) NSArray *failingAPIVersions;

/* instance methods */
- (id)init;
- (id)apiVersionForSettings:(id)settings;
- (void)requestSuccessForAPIVersion:(id)apiversion;
- (void)requestFailureForAPIVersion:(id)apiversion error:(id)error;
- (BOOL)defaultAPIVersionIsFailingForSettings:(id)settings failTracker:(id)tracker;
- (int)consecutiveFailsForAPIVersion:(id)apiversion;
- (double)lastFailTimeInSecondsForAPIVersion:(id)apiversion;
@end

#endif /* WFNetworkRetryManager_h */
