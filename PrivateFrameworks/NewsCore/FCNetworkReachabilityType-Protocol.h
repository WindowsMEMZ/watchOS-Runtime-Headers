//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCNetworkReachabilityType_Protocol_h
#define FCNetworkReachabilityType_Protocol_h
@import Foundation;

@protocol FCNetworkReachabilityType <NSObject>

@property (readonly, nonatomic) BOOL isNetworkReachable;
@property (readonly, nonatomic) BOOL isCloudKitReachable;
@property (nonatomic) long long offlineReason;

/* instance methods */
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
@end

#endif /* FCNetworkReachabilityType_Protocol_h */
