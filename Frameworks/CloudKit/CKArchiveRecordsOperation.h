//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKArchiveRecordsOperation_h
#define CKArchiveRecordsOperation_h
@import Foundation;

#include "CKDatabaseOperation.h"
#include "CKArchiveRecordsOperationCallbacks-Protocol.h"
#include "CKArchiveRecordsOperationInfo.h"

@class NSArray, NSMutableDictionary;

@interface CKArchiveRecordsOperation : CKDatabaseOperation<CKArchiveRecordsOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *perItemErrors;
@property (readonly, @dynamic, nonatomic) NSObject<CKArchiveRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, @dynamic, nonatomic) CKArchiveRecordsOperationInfo *operationInfo;
@property (copy, nonatomic) NSArray *recordIDs;
@property (copy, nonatomic) id /* block */ recordArchivedBlock;
@property (copy, nonatomic) id /* block */ archiveRecordsCompletionBlock;

/* class methods */
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)tweaks;

/* instance methods */
- (id)init;
- (id)initWithRecordIDs:(id)ids;
- (void)fillOutOperationInfo:(id)info;
- (void)fillFromOperationInfo:(id)info;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)run;
- (void)handleRecordArchivalForRecordID:(id)id error:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)error;
- (id)activityCreate;
@end

#endif /* CKArchiveRecordsOperation_h */
