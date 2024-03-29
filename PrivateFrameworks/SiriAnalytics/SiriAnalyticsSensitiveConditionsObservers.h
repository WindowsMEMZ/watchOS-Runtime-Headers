//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SiriAnalyticsSensitiveConditionsObservers_h
#define SiriAnalyticsSensitiveConditionsObservers_h
@import Foundation;

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface SiriAnalyticsSensitiveConditionsObservers : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableSet *_observers;
}

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)addSensitiveConditionsObserver:(id)observer;
- (void)pollAllObserversWithCompletion:(id /* block */)completion;
@end

#endif /* SiriAnalyticsSensitiveConditionsObservers_h */
