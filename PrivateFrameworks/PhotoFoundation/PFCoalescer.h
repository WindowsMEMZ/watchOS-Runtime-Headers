//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFCoalescer_h
#define PFCoalescer_h
@import Foundation;

#include "PFCoalescerContext.h"
#include "PFStateCaptureHandler.h"
#include "PFStateCaptureProvider-Protocol.h"

@class NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject<PFStateCaptureProvider> {
  /* instance variables */
  long long _resetSequenceNumber;
  long long _lastUpdateResetSequenceNumber;
  PFStateCaptureHandler *_stateCaptureHandler;
  NSDate *_lastTransactionStartDate;
  NSDate *_lastTransactionEndDate;
}

@property (retain) NSString *label;
@property (weak) id target;
@property BOOL usesTarget;
@property (retain) id buffer;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (copy) id /* block */ action;
@property (retain) PFCoalescerContext *context;
@property BOOL initialDelayTimerIsArmed;
@property long long state;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property double initialDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)coalescerWithLabel:(id)label target:(id)target buffer:(id)buffer queue:(id)queue bufferDrainer:(id /* block */)drainer action:(id /* block */)action;
+ (id)coalescerWithLabel:(id)label target:(id)target queue:(id)queue action:(id /* block */)action;
+ (id)coalescerWithLabel:(id)label queue:(id)queue action:(id /* block */)action;
+ (id)mutableContainerCoalescerWithLabel:(id)label target:(id)target container:(id)container queue:(id)queue action:(id /* block */)action;
+ (id)mutableContainerCoalescerWithLabel:(id)label container:(id)container queue:(id)queue action:(id /* block */)action;
+ (id)setCoalescerWithLabel:(id)label queue:(id)queue action:(id /* block */)action;
+ (id)setCoalescerWithLabel:(id)label target:(id)target queue:(id)queue action:(id /* block */)action;
+ (id)dictionaryCoalescerWithLabel:(id)label queue:(id)queue action:(id /* block */)action;
+ (id)dictionaryCoalescerWithLabel:(id)label target:(id)target queue:(id)queue action:(id /* block */)action;
+ (id)arrayCoalescerWithLabel:(id)label queue:(id)queue action:(id /* block */)action;
+ (id)arrayCoalescerWithLabel:(id)label target:(id)target queue:(id)queue action:(id /* block */)action;
+ (id /* block */)mutableCollectionBufferDrainer;

/* instance methods */
- (id)init;
- (id)initWithLabel:(id)label target:(id)target buffer:(id)buffer queue:(id)queue bufferDrainer:(id /* block */)drainer action:(id /* block */)action;
- (void)performEventActionWithTarget:(id)target;
- (void)update:(id /* block */)update;
- (void)update;
- (void)reset;
- (void)resetAndShutDown;
- (void)_resetWhileLocked;
- (id)stateCaptureDictionary;
@end

#endif /* PFCoalescer_h */
