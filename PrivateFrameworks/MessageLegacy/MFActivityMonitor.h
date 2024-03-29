//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 22.0.0.0.0
//
#ifndef MFActivityMonitor_h
#define MFActivityMonitor_h
@import Foundation;

#include "EFPriorityDesignator.h"
#include "EFCancelable-Protocol.h"
#include "MFError.h"
#include "MFInvocationQueue.h"
#include "MFMailboxUid.h"

@class NSMutableSet, NSString, NSThread;

@interface MFActivityMonitor : EFPriorityDesignator<EFCancelable> {
  /* instance variables */
  NSThread *_runningThread;
  NSString *_taskName;
  NSString *_displayName;
  NSString *_statusMessage;
  NSString *_descriptionString;
  MFInvocationQueue *_ourQueue;
  double _percentDone;
  unsigned int x :13 _key;
  unsigned int x :1 _canCancel;
  unsigned int x :1 _isActive;
  unsigned int x :8 _changeCount;
  id _delegate;
  id _target;
  MFError *_error;
  unsigned long long _expectedLength;
  unsigned long long _maxCount;
  unsigned long long _currentCount;
  double _currentItemPercentDone;
  unsigned int x :1 _supportsPerItemProgress;
  double _lastTime;
  double _startTime;
  unsigned long long _gotNewMessagesState;
  unsigned long long _bytesRead;
  unsigned long long _bytesWritten;
  NSMutableSet *_reasons;
  NSMutableSet *_associatedCancelables;
}

@property (retain) MFMailboxUid *mailbox;
@property (nonatomic) BOOL canBeCancelled;
@property (nonatomic) BOOL shouldCancel;
@property (nonatomic) BOOL isRemoteSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)currentMonitor;
+ (void)destroyMonitor;

/* instance methods */
- (id)init;
- (void)dealloc;
- (BOOL)isActive;
- (void)setDelegate:(id)delegate;
- (void)cancelMessage;
- (void)postActivityStarting;
- (void)postActivityFinished:(id)finished;
- (void)startActivity;
- (void)finishedActivity:(id)activity;
- (void)notifyConnectionEstablished;
- (id)userInfoForNotification;
- (void)postDidChangeWithUserInfo:(id)info;
- (void)_didChange;
- (void)setMaxCount:(unsigned long long)count;
- (void)setCurrentCount:(unsigned long long)count;
- (void)setSupportsPerItemProgress:(BOOL)progress;
- (id)_ntsThrottledUserInfoDict;
- (void)setPercentDoneOfCurrentItem:(double)item;
- (void)reset;
- (void)setGotNewMessagesState:(unsigned long long)state;
- (unsigned long long)gotNewMessagesState;
- (void)addReason:(id)reason;
- (BOOL)hasReason:(id)reason;
- (id)reasons;
- (int)changeCount;
- (void)setStatusMessage:(id)message;
- (void)setStatusMessage:(id)message percentDone:(double)done;
- (id)statusMessage;
- (void)setPercentDone:(double)done;
- (double)percentDone;
- (double)startTime;
- (void)setExpectedLength:(unsigned long long)length;
- (unsigned long long)expectedLength;
- (id)taskName;
- (void)setTaskName:(id)name;
- (id)displayName;
- (void)setDisplayName:(id)name maxCount:(unsigned long long)count;
- (void)setDisplayName:(id)name;
- (void)setActivityTarget:(id)target;
- (id)activityTarget;
- (BOOL)_lockedAddActivityTarget:(id)target;
- (void)addActivityTarget:(id)target;
- (void)addActivityTargets:(id)targets;
- (void)removeActivityTarget:(id)target;
- (void)setPrimaryTarget:(id)target;
- (id)primaryTarget;
- (id)activityTargets;
- (void)addCancelable:(id)cancelable;
- (void)removeCancelable:(id)cancelable;
- (void)_cancelAssociatedCancelables;
- (void)cancel;
- (void)setInvocationQueue:(id)queue;
- (int)acquireExclusiveAccessKey;
- (void)relinquishExclusiveAccessKey:(int)key;
- (void)setStatusMessage:(id)message percentDone:(double)done withKey:(int)key;
- (void)setStatusMessage:(id)message withKey:(int)key;
- (void)setPercentDone:(double)done withKey:(int)key;
- (id)error;
- (void)setError:(id)error;
- (void)resetConnectionStats;
- (void)recordBytesRead:(unsigned long long)read;
- (void)recordBytesWritten:(unsigned long long)written;
- (unsigned long long)bytesRead;
- (unsigned long long)bytesWritten;
@end

#endif /* MFActivityMonitor_h */
