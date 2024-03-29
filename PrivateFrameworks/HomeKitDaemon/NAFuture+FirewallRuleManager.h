//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef NAFuture_FirewallRuleManager_h
#define NAFuture_FirewallRuleManager_h
@import Foundation;

@interface NAFuture (FirewallRuleManager)
/* class methods */
+ (id)futureWithRetries:(long long)retries timeInterval:(double)interval workQueue:(id)queue block:(id /* block */)block;
+ (id)futureWithRetryIntervals:(id)intervals workQueue:(id)queue block:(id /* block */)block;
+ (id)combineAllFuturesFlatteningArrayResults:(id)results;
+ (id)combineAllFuturesIgnoringEmptyResults:(id)results;

/* instance methods */
- (id)hmfFuture;
- (id)blockAndWaitForCompletionWithError:(id *)error;
@end

#endif /* NAFuture_FirewallRuleManager_h */
