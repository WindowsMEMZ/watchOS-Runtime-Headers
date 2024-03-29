//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncPushSequenceOperation_h
#define HDCloudSyncPushSequenceOperation_h
@import Foundation;

#include "HDCloudSyncOperation.h"
#include "HDCloudSyncSequenceRecord.h"
#include "HDCloudSyncSequenceState.h"
#include "HDCloudSyncSessionContext.h"
#include "HDCloudSyncTarget.h"
#include "HDSyncSessionDelegate-Protocol.h"
#include "HDSynchronousTaskGroup.h"
#include "HDSynchronousTaskGroupDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HDCloudSyncPushSequenceOperation : HDCloudSyncOperation<HDSynchronousTaskGroupDelegate, HDSyncSessionDelegate> {
  /* instance variables */
  HDCloudSyncTarget *_target;
  HDCloudSyncSequenceRecord *_sequenceRecord;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_syncQueue;
  HDSynchronousTaskGroup *_taskGroup;
  HDCloudSyncSessionContext *_sessionContext;
  NSMutableArray *_changeRecordsPendingPush;
  NSMutableArray *_recordsPendingDeletion;
  BOOL _isPerformingRecentRecordRoll;
  BOOL _shouldClearRebaselineDeadline;
}

@property (readonly, nonatomic) BOOL hasMadeForwardProgress;
@property (retain, nonatomic) HDCloudSyncSequenceState *sequenceState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)shouldLogAtOperationStart;
+ (id)operationTagDependencies;
+ (BOOL)shouldPerformRecentRecordRollingForUnfrozenRecords:(id)records configuration:(id)configuration;
+ (id)unfrozenChangeRecordsForPushTarget:(id)target sequenceRecord:(id)record configuration:(id)configuration error:(id *)error;

/* instance methods */
- (id)initWithConfiguration:(id)configuration cloudState:(id)state;
- (id)initWithConfiguration:(id)configuration cloudState:(id)state target:(id)target sequence:(id)sequence;
- (void)main;
- (void)syncSessionWillBegin:(id)begin;
- (void)syncSession:(id)session willSyncAnchorRanges:(id)ranges;
- (void)syncSession:(id)session sendChanges:(id)changes completion:(id /* block */)completion;
- (BOOL)syncSession:(id)session didEndTransactionWithError:(id *)error;
- (void)syncSession:(id)session didFinishSuccessfully:(BOOL)successfully error:(id)error;
- (void)synchronousTaskGroup:(id)group didFinishWithSuccess:(BOOL)success errors:(id)errors;
@end

#endif /* HDCloudSyncPushSequenceOperation_h */
