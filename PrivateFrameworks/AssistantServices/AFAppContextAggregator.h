//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAppContextAggregator_h
#define AFAppContextAggregator_h
@import Foundation;

@interface AFAppContextAggregator : NSObject
/* instance methods */
- (void)aggregateContextWithRawOutputForAppWithBundleIdentifier:(id)identifier contextProvider:(id)provider deliveryHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)aggregateContextForAppWithBundleIdentifier:(id)identifier contextProvider:(id)provider deliveryHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)aggregateContextForAppWithBundleIdentifier:(id)identifier contextProvider:(id)provider completionHandler:(id /* block */)handler;
@end

#endif /* AFAppContextAggregator_h */
