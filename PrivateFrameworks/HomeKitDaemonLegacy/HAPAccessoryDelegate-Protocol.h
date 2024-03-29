//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPAccessoryDelegate_Protocol_h
#define HAPAccessoryDelegate_Protocol_h
@import Foundation;

@protocol HAPAccessoryDelegate <NSObject>
@optional
/* instance methods */
- (void)accessoryDidBecomeReachable:(id)reachable;
- (void)accessoryDidBecomeUnreachable:(id)unreachable;
- (void)accessory:(id)accessory didUpdateReachabilityState:(BOOL)state;
@end

#endif /* HAPAccessoryDelegate_Protocol_h */
