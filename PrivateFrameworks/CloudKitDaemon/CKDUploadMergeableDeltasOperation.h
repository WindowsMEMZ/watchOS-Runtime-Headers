//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDUploadMergeableDeltasOperation_h
#define CKDUploadMergeableDeltasOperation_h
@import Foundation;

#include "CKDDatabaseOperation.h"

@class NSArray, NSMutableArray;
@protocol CKUploadMergeableDeltasOperationCallbacks;

@interface CKDUploadMergeableDeltasOperation : CKDDatabaseOperation

@property (copy, nonatomic) NSArray *deltas;
@property (copy, nonatomic) NSArray *replacementRequests;
@property (retain, nonatomic) NSMutableArray *pendingReplacementRequests;
@property (retain, nonatomic) NSMutableArray *pendingDeltaUploads;
@property (@dynamic, nonatomic) unsigned long long state;
@property (retain, @dynamic, nonatomic) NSObject<CKUploadMergeableDeltasOperationCallbacks> *clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ uploadDeltaCompletionBlock;
@property (copy, nonatomic) id /* block */ replaceDeltasRequestCompletionBlock;

/* class methods */
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (int)operationType;
- (id)activityCreate;
- (BOOL)makeStateTransition;
- (void)main;
- (void)_encryptMergeableDeltas;
- (void)_uploadAndReplaceDeltas;
- (void)_uploadAndReplaceDeltas:(id /* block */)deltas;
- (void)handleDeltaUploaded:(id)uploaded result:(id)result;
- (void)handleReplaceDeltasRequest:(id)request result:(id)result;
@end

#endif /* CKDUploadMergeableDeltasOperation_h */
