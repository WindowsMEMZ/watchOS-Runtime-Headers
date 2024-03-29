//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 34.0.0.0.0
//
#ifndef ITIdleTimerStateRequestHandling_Protocol_h
#define ITIdleTimerStateRequestHandling_Protocol_h
@import Foundation;

@protocol ITIdleTimerStateRequestHandling <NSObject>
/* instance methods */
- (BOOL)isIdleTimerServiceAvailable;
- (void)addIdleTimerConfiguration:(id)configuration forReason:(id)reason error:(id *)error;
- (void)removeIdleTimerConfiguration:(id)configuration forReason:(id)reason;
@end

#endif /* ITIdleTimerStateRequestHandling_Protocol_h */
