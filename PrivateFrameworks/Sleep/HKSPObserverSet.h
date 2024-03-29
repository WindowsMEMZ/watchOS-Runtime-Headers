//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPObserverSet_h
#define HKSPObserverSet_h
@import Foundation;

#include "NAScheduler-Protocol.h"

@class NSMapTable;

@interface HKSPObserverSet : NSObject

@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } observersLock;
@property (readonly, nonatomic) NSMapTable *observerRecords;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)initWithCallbackScheduler:(id)scheduler;
- (void)_withLock:(id /* block */)lock;
- (void)addObserver:(id)observer;
- (void)addObserver:(id)observer wasFirst:(BOOL *)first;
- (void)addObserver:(id)observer callbackScheduler:(id)scheduler;
- (void)addObserver:(id)observer callbackScheduler:(id)scheduler wasFirst:(BOOL *)first;
- (void)removeObserver:(id)observer;
- (void)removeObserver:(id)observer wasLast:(BOOL *)last;
- (void)removeAllObservers;
- (void)enumerateObserversWithBlock:(id /* block */)block;
- (id)enumerateObserversWithFutureBlock:(id /* block */)block;
- (BOOL)containsObserver:(id)observer;
- (id)description;
@end

#endif /* HKSPObserverSet_h */
