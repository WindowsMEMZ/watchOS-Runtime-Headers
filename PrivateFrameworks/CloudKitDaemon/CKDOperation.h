//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDOperation_h
#define CKDOperation_h
@import Foundation;

#include "NSOperation.h"
#include "CKDContainer.h"
#include "CKDLogicalDeviceContext.h"
#include "CKDOperation.h"
#include "CKDOperationMetrics.h"
#include "CKDURLRequest.h"
#include "CKOperationCallbacks-Protocol.h"
#include "CKThrottlingCriteria-Protocol.h"
#include "OS_os_transaction-Protocol.h"

@class CKOperationInfo, CKOperationMMCSRequestOptions, CKOperationMetrics, CKSignpost, NSDate, NSDictionary, NSError, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_os_activity;

@interface CKDOperation : NSOperation<CKThrottlingCriteria> {
  /* instance variables */
  struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _metricsLock;
  CKDOperationMetrics *_cloudKitMetrics;
  CKDOperationMetrics *_MMCSMetrics;
  int _executionState;
}

@property (readonly, nonatomic) NSMutableArray *requestUUIDs;
@property (weak) CKDOperation *parentOperation;
@property (readonly, nonatomic) NSMutableArray *childOperations;
@property (readonly, nonatomic) NSMutableArray *finishedChildOperationIDs;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup;
@property (nonatomic) atomic int pcsWaitCount;
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, nonatomic) CKSignpost *signpost;
@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;
@property (retain, nonatomic) NSDate *metricExecuteStartDate;
@property (nonatomic) BOOL didAttemptDugongKeyRoll;
@property (readonly, nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures;
@property (readonly, nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior;
@property (readonly, nonatomic) unsigned long long duetPreClearedMode;
@property (readonly, nonatomic) unsigned long long discretionaryWhenBackgroundedState;
@property (readonly, nonatomic) unsigned long long systemScheduler;
@property (readonly, weak, nonatomic) CKDOperation *topmostParentOperation;
@property (retain, nonatomic) NSObject<CKOperationCallbacks> *clientOperationCallbackProxy;
@property (readonly) CKDContainer *container;
@property (nonatomic) BOOL useEncryption;
@property (nonatomic) BOOL useClearAssetEncryption;
@property (readonly, nonatomic) BOOL isLongLivedCallbackRelayOperation;
@property (readonly, nonatomic) BOOL shouldCheckAppVersion;
@property (readonly, nonatomic) BOOL usesBackgroundSession;
@property (readonly, nonatomic) BOOL expectDelayBeforeRequestBegins;
@property (readonly, nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic) BOOL shouldPipelineFetchAllChangesRequests;
@property (readonly, nonatomic) unsigned int QOSClass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain) NSError *error;
@property (retain, nonatomic) CKDURLRequest *request;
@property (readonly, nonatomic) CKOperationMetrics *operationMetrics;
@property (copy, nonatomic) id /* block */ requestCompletedBlock;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) long long clientQueuePriority;
@property (readonly, nonatomic) BOOL isLongLived;
@property (readonly, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (readonly, nonatomic) NSDictionary *unitTestOverrides;
@property (readonly, nonatomic) BOOL allowsCellularAccess;
@property (readonly, nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForContainerAccess;
@property (readonly, nonatomic) NSString *applicationBundleIdentifierForNetworkAttribution;
@property (readonly, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) NSString *authPromptReason;
@property (readonly, nonatomic) BOOL automaticallyRetryNetworkFailures;
@property (readonly, nonatomic) BOOL preferAnonymousRequests;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) double timeoutIntervalForResource;
@property (readonly, nonatomic) BOOL supportsDeviceThrottling;
@property (readonly, nonatomic) NSString *operationGroupID;
@property (readonly, nonatomic) NSString *operationGroupName;
@property (readonly, nonatomic) NSNumber *operationGroupQuantityNumber;
@property (readonly, nonatomic) BOOL isCloudKitSupportOperation;
@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass;
@property (readonly, nonatomic) unsigned long long networkServiceType;
@property (readonly, nonatomic) CKOperationInfo *operationInfo;
@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (nonatomic) unsigned long long requestOriginator;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_globalOperationCallbackQueueForQOS:(long long)qos;
+ (long long)isPredominatelyDownload;
+ (id)nameForState:(unsigned long long)state;

/* instance methods */
- (id)initWithOperationInfo:(id)info container:(id)container;
- (id)activityCreate;
- (void)_ensureOperationGroup;
- (void)dealloc;
- (id)createSerialQueue;
- (id)createInactiveSerialQueue;
- (id)createConcurrentQueue;
- (id)createInactiveConcurrentQueue;
- (id)containerID;
- (BOOL)checkAndClearUnitTestOverrides:(id)overrides;
- (unsigned long long)discretionaryNetworkBehavior;
- (id)additionalRequestHTTPHeaders;
- (id)_stateFlags;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)public private:(BOOL)private shouldExpand:(BOOL)expand;
- (id)ckShortDescription;
- (BOOL)isEqual:(id)equal;
- (void)combineMetricsWithOperation:(id)operation;
- (void)spawnAndRunOperationOfClass:(Class)class operationInfo:(id)info spawnQueue:(id)queue container:(id)container operationConfigurationBlock:(id /* block */)block;
- (void)spawnAndRunOperationOfClass:(Class)class operationInfo:(id)info spawnQueue:(id)queue operationConfigurationBlock:(id /* block */)block;
- (void)spawnAndRunOperationOfClass:(Class)class operationInfo:(id)info operationConfigurationBlock:(id /* block */)block;
- (void)_continueOperationStart;
- (void)_registerAttemptForOperation;
- (BOOL)_checkAppVersion;
- (void)_determineNetworkServiceType;
- (void)start;
- (void)main;
- (void)_finishInternalOnCallbackQueueWithError:(id)error;
- (void)finishWithError:(id)error;
- (void)_finishOnCallbackQueueWithError:(id)error;
- (BOOL)isTopLevelDaemonOperation;
- (void)cancel;
- (BOOL)makeStateTransition;
- (void)makeStateTransition:(BOOL)transition;
- (void)noteOperationWillWaitOnPCS;
- (void)noteOperationDidFinishWaitingOnPCS;
- (BOOL)isWaitingOnPCS;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (void)transitionToExecuting;
- (void)transitionToFinished;
- (BOOL)shouldKeepXPCConnectionAlive;
- (void)configureQualityOfServiceFromOperationInfo:(id)info;
- (void)setQualityOfService:(long long)service;
- (BOOL)isConcurrent;
- (void)setCompletionBlock:(id /* block */)block;
- (id)openFileWithOpenInfo:(id)info error:(id *)error;
- (BOOL)finishWithAssetDownloadStagingInfo:(id)info fileURL:(id *)url fileHandle:(id *)handle error:(id *)error;
- (void)configureRequest:(id)request;
- (void)request:(id)request didFinishWithMetrics:(id)metrics w3cNavigationTiming:(id)timing;
- (void)updateCloudKitMetrics:(id /* block */)metrics;
- (void)updateMMCSMetrics:(id /* block */)mmcsmetrics;
- (id)_startDateString;
- (id)CKStatusReportProperties;
- (id)CKStatusReportLogGroups;
- (id)statusReportWithIndent:(unsigned long long)indent;
- (BOOL)isNetworkingBehaviorEquivalentForOperation:(id)operation;
- (void)sendCoreAnalyticsEventOperationFinished;
- (id)baseOperationAndErrorInfoCoreAnalyticsPayloadWithError:(id)error;
- (id)dugongKeyRollAnalyticsPayloadWithError:(id)error;
- (id)analyticsPayload;
- (int)operationType;
- (BOOL)isOperationType:(int)type;
- (BOOL)validateAgainstLiveContainer:(id)container error:(id *)error;
- (void)pushStatisticsTo:(id)to;
@end

#endif /* CKDOperation_h */
