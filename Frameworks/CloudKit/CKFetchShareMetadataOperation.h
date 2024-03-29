//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKFetchShareMetadataOperation_h
#define CKFetchShareMetadataOperation_h
@import Foundation;

#include "CKOperation.h"
#include "CKFetchShareMetadataOperationCallbacks-Protocol.h"
#include "CKFetchShareMetadataOperationInfo.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareMetadataOperation : CKOperation<CKFetchShareMetadataOperationCallbacks>

@property (retain, nonatomic) NSMutableDictionary *errorsByURL;
@property (retain, nonatomic) NSMutableSet *packagesToDestroy;
@property (readonly, @dynamic, nonatomic) NSObject<CKFetchShareMetadataOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly, @dynamic, nonatomic) CKFetchShareMetadataOperationInfo *operationInfo;
@property (copy, nonatomic) id /* block */ perShareMetadataBlock_wrapper;
@property (copy, nonatomic) id /* block */ fetchShareMetadataCompletionBlock_wrapper;
@property (copy, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) BOOL overwriteContainerPCSServiceIfManatee;
@property (nonatomic) BOOL skipShareDecryption;
@property (copy, nonatomic) NSArray *shareURLs;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (copy, nonatomic) NSArray *rootRecordDesiredKeys;
@property (copy, nonatomic) id /* block */ perShareMetadataBlock;
@property (copy, nonatomic) id /* block */ fetchShareMetadataCompletionBlock;

/* class methods */
+ (SEL)daemonInvocationSelector;
+ (void)applyDaemonCallbackInterfaceTweaks:(id)tweaks;

/* instance methods */
- (id)init;
- (id)initWithShareURLs:(id)urls;
- (id)initWithShareURLs:(id)urls invitationTokensByShareURL:(id)url;
- (void)setFetchShareMetadataCompletionBlockIVar:(id /* block */)ivar;
- (void)fillOutOperationInfo:(id)info;
- (void)fillFromOperationInfo:(id)info;
- (BOOL)hasCKOperationCallbacksSet;
- (BOOL)CKOperationShouldRun:(id *)run;
- (BOOL)claimPackagesInRecord:(id)record error:(id *)error;
- (void)handleShareMetadataFetchForURL:(id)url shareMetadata:(id)metadata error:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (void)ckSignpostBegin;
- (void)ckSignpostEndWithError:(id)error;
- (id)activityCreate;
@end

#endif /* CKFetchShareMetadataOperation_h */
