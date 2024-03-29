//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDFetchArchivedRecordsOperation_h
#define CKDFetchArchivedRecordsOperation_h
@import Foundation;

#include "CKDFetchBatchedRecordsOperation.h"
#include "CKDOperationPipelining-Protocol.h"

@class NSString;
@protocol CKFetchArchivedRecordsOperationCallbacks, OS_dispatch_queue;

@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation<CKDOperationPipelining>

@property (retain, @dynamic, nonatomic) NSObject<CKFetchArchivedRecordsOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ recordFetchedBlock;
@property (copy, nonatomic) id /* block */ serverChangeTokenUpdatedBlock;
@property (readonly, nonatomic) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_noteCompletedURLRequest:(id)urlrequest withSchedulerInfo:(id)info;
- (void)_noteChangedRecordWithID:(id)id record:(id)record error:(id)error;
- (void)_noteDeletedRecordWithID:(id)id recordType:(id)type;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)request;
- (int)operationType;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)ids optionsByZoneID:(id)id;
- (void)_noteOperationBeginning;
- (void)_noteOperationEnding;
- (void)_noteOperationFinishedBlockEnd;
- (void)_finishOnCallbackQueueWithError:(id)error;
@end

#endif /* CKDFetchArchivedRecordsOperation_h */
