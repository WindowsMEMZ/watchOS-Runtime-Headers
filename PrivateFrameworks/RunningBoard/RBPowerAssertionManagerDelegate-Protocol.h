//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBPowerAssertionManagerDelegate_Protocol_h
#define RBPowerAssertionManagerDelegate_Protocol_h
@import Foundation;

@protocol RBPowerAssertionManagerDelegate <NSObject>
/* instance methods */
- (void)powerAssertionManagerDidPreventIdleSleep:(id)sleep;
- (void)powerAssertionManagerDidAllowIdleSleep:(id)sleep;
@end

#endif /* RBPowerAssertionManagerDelegate_Protocol_h */
