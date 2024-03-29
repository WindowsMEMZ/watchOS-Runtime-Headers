//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetLowPowerModeIntentHandling_Protocol_h
#define WFSetLowPowerModeIntentHandling_Protocol_h
@import Foundation;

@protocol WFSetLowPowerModeIntentHandling <NSObject>
/* instance methods */
- (void)handleSetLowPowerMode:(id)mode completion:(id /* block */)completion;
- (void)resolveOperationForSetLowPowerMode:(id)mode withCompletion:(id /* block */)completion;
- (void)resolveStateForSetLowPowerMode:(id)mode withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmSetLowPowerMode:(id)mode completion:(id /* block */)completion;
@end

#endif /* WFSetLowPowerModeIntentHandling_Protocol_h */
