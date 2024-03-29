//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef _EFReplayObservable_h
#define _EFReplayObservable_h
@import Foundation;

#include "EFObservable.h"
#include "EFObserver-Protocol.h"
#include "EFQueue.h"

@class NSError, NSLock, NSMutableArray, NSString;

@interface _EFReplayObservable : EFObservable<EFObserver> {
  /* instance variables */
  NSLock *_lock;
  BOOL _isStopped;
  NSError *_error;
  EFQueue *_queue;
  NSMutableArray *_observers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCount:(unsigned long long)count;
- (id)subscribe:(id)subscribe;
- (void)_unsubscribe:(id)_unsubscribe;
- (void)observerDidReceiveResult:(id)result;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)error;
@end

#endif /* _EFReplayObservable_h */
