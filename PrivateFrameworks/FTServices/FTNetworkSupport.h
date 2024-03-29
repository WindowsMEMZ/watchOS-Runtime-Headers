//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef FTNetworkSupport_h
#define FTNetworkSupport_h
@import Foundation;

@interface FTNetworkSupport : NSObject {
  /* instance variables */
  BOOL _criticalReliabilityEnabledState;
}

@property (readonly, nonatomic) BOOL allowAnyNetwork;
@property (readonly, nonatomic) BOOL validNetworkEnabled;
@property (readonly, nonatomic) BOOL validNetworkActive;
@property (readonly, nonatomic) BOOL validNetworkReachable;
@property (readonly, nonatomic) BOOL wiFiActiveAndReachable;
@property (readonly, nonatomic) BOOL willSearchForNetwork;
@property (readonly, nonatomic) BOOL dataActiveAndReachable;
@property (readonly, nonatomic) BOOL networkEnabled;
@property (readonly, nonatomic) BOOL networkActive;
@property (readonly, nonatomic) BOOL networkReachable;
@property (nonatomic) BOOL enableCriticalReliability;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (BOOL)validNetworkEnabledForBundleId:(id)id;
- (BOOL)validNetworkActiveForBundleId:(id)id;
- (BOOL)validNetworkReachableForBundleId:(id)id;
- (BOOL)willSearchForNetworkForBundleId:(id)id;
- (void)_clearReliabilityTimeoutInterval;
- (void)_setReliabilityTimeoutInterval;
- (void)_reallySetCriticalReliability:(BOOL)reliability;
- (void)_tryToEnableReliability;
@end

#endif /* FTNetworkSupport_h */
