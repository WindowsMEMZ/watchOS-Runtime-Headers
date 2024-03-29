//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFScheduler_h
#define HMFScheduler_h
@import Foundation;

#include "HMFObject.h"

@class NSOperationQueue;

@interface HMFScheduler : HMFObject {
  /* instance variables */
  NSOperationQueue *_operationQueue;
}

/* class methods */
+ (id)defaultScheduler;
+ (id)mainScheduler;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (id)performOperation:(id)operation;
- (id)performBlock:(id /* block */)block;
- (id)performWithQualityOfService:(long long)service block:(id /* block */)block;
- (id)performSelector:(SEL)selector target:(id)target argument:(id)argument;
- (id)performSelector:(SEL)selector target:(id)target argument:(id)argument qualityOfService:(long long)service;
@end

#endif /* HMFScheduler_h */
