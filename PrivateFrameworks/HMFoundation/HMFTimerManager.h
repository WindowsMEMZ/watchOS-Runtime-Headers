//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFTimerManager_h
#define HMFTimerManager_h
@import Foundation;

#include "HMFTimer.h"
#include "HMFTimerDelegate-Protocol.h"
#include "HMFTimerManager-Protocol.h"
#include "HMFTimerManagerDataSource-Protocol.h"
#include "HMFTimerManagerTimerContext.h"

@class NSMutableArray, NSString;
@protocol HMFTimerManagerDelegate, OS_dispatch_queue;

@interface HMFTimerManager : NSObject<HMFTimerDelegate, HMFTimerManager> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  unsigned long long _options;
  HMFTimer *_nextTimer;
  HMFTimerManagerTimerContext *_nextTimerContext;
  NSObject<HMFTimerManagerDataSource> *_dataSource;
  NSMutableArray *_sortedTimerContexts;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFTimerManagerDelegate> *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

/* instance methods */
- (id)initWithOptions:(unsigned long long)options;
- (id)initWithOptions:(unsigned long long)options dataSource:(id)source;
- (id)startTimerWithTimeInterval:(double)interval object:(id)object;
- (id)startTimerWithTimeInterval:(double)interval andReplaceObject:(id)object;
- (id)startTimerWithTimeInterval:(double)interval object:(id)object shouldReplace:(BOOL)replace;
- (void)cancelTimerForContext:(id)context;
- (void)_addTimerContext:(id)context;
- (void)_removeTimerContextsWithMatchingObject:(id)object;
- (void)_removeTimerContext:(id)context;
- (BOOL)_suspendTimerManagerIfEmpty;
- (void)_refreshNextTimerIfNeededWithTimeInterval:(double)interval;
- (id)_removeExpiredTimerContextsAndRefreshNextTimer;
- (void)refreshTimerManager;
- (void)refreshTimerManagerWithShouldDispatchNotifications:(BOOL)notifications;
- (void)notifyDidFireForTimerContexts:(id)contexts shouldDispatch:(BOOL)dispatch;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMFTimerManager_h */
