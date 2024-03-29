//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSUniqueExecutionQueue_h
#define SSUniqueExecutionQueue_h
@import Foundation;

#include "SSPromise.h"

@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (retain, nonatomic) SSPromise *promise;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue;

/* instance methods */
- (id)initWithBlock:(id /* block */)block;
- (void)addCompletionBlock:(id /* block */)block;
@end

#endif /* SSUniqueExecutionQueue_h */
