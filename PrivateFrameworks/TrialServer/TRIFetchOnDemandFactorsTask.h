//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFetchOnDemandFactorsTask_h
#define TRIFetchOnDemandFactorsTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIArtifactProvider-Protocol.h"
#include "TRICancellableTask-Protocol.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRetryableTask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskCapabilityModifier.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, TRIRolloutDeployment, TRITrialSystemTelemetry, _PASLock;

@interface TRIFetchOnDemandFactorsTask : TRIBaseTask<TRIRetryableTask, TRIMetricsProviding, TRICancellableTask> {
  /* instance variables */
  NSDictionary *_assetIndexesByTreatment;
  NSDictionary *_assetIdsByFactorPack;
  NSSet *_rolloutFactorNames;
  NSString *_namespaceName;
  NSObject<TRITaskAttributing> *_taskAttributing;
  NSString *_notificationKey;
  TRITaskCapabilityModifier *_capabilityModifier;
  TRITrialSystemTelemetry *_trialSystemTelemetry;
  NSMutableArray *_metrics;
  NSMutableArray *_dimensions;
  NSObject<TRIArtifactProvider> *_artifactProvider;
  _PASLock *_lock;
  NSMutableDictionary *_factorNameByAssetId;
}

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSObject<TRITaskAttributing> *taskAttribution;
@property (readonly, nonatomic) BOOL isCurrentlyExecuting;
@property (nonatomic) int retryCount;
@property BOOL wasDeferred;
@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) NSObject<TRITaskQueueStateProviding> *stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)taskWithAssetIndexesByTreatment:(id)treatment experimentId:(id)id assetIdsByFactorPack:(id)pack rolloutFactorNames:(id)names rolloutDeployment:(id)deployment namespaceName:(id)name taskAttributing:(id)attributing notificationKey:(id)key capabilityModifier:(id)modifier;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAssetIndexesByTreatment:(id)treatment experimentId:(id)id assetIdsByFactorPack:(id)pack rolloutFactorNames:(id)names rolloutDeployment:(id)deployment namespaceName:(id)name taskAttributing:(id)attributing notificationKey:(id)key capabilityModifier:(id)modifier;
- (id)_telemetryForFactorPackIds:(id)ids rolloutDeployment:(id)deployment treatmentIds:(id)ids experimentId:(id)id namespaceName:(id)name taskAttributing:(id)attributing;
- (struct { unsigned char x0; })_saveIndexedAssetURLs:(id)urls withTreatmentId:(id)id usingAssetMetadata:(id)metadata downloadOptions:(id)options paths:(id)paths downloadSize:(unsigned long long *)size error:(id *)error;
- (struct { unsigned char x0; })_saveNamedAssetURLs:(id)urls usingAssetMetadata:(id)metadata downloadOptions:(id)options downloadSize:(unsigned long long *)size paths:(id)paths error:(id *)error;
- (BOOL)_updateFactorPacksByMergingAssets:(id)assets context:(id)context;
- (id)_assetIdsFromKeysInDictionary:(id)dictionary;
- (id)_fetchOptionsWithDownloadOptions:(id)options paths:(id)paths;
- (void)removeDownloadableFactorNames:(id)names;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (unsigned long long)_requiredDiskSpaceForPlan:(id)plan;
- (void)_completeTaskWithStatus:(int)status earliestRetryDate:(id)date error:(id)error aggregateProgress:(id)progress context:(id)context;
- (id)_currentTaskStatus;
- (id)_planForFetchingAssetsFromTreatmentRecordsWithContext:(id)context downloadOptions:(id)options updatingAggregateProgress:(id)progress;
- (id)_planForFetchingAssetDiffsWithContext:(id)context downloadOptions:(id)options updatingAggregateProgress:(id)progress nonDiffableAssetIds:(id *)ids unlinkedMAAssetsOnDisk:(id *)disk;
- (id)_planForFetchingAssetsFromFactorPacksWithContext:(id)context assetDiffFetchPlan:(id)plan requiredAssetIds:(id)ids downloadOptions:(id)options updatingAggregateProgress:(id)progress;
- (void)_asyncFetchAssetsFromTreatmentRecordsWithContext:(id)context plan:(id)plan aggregateProgress:(id)progress downloadSize:(unsigned long long *)size downloadOptions:(id)options group:(id)group;
- (id)_fetchDiffsFromAssetDiffRecordsWithContext:(id)context plan:(id)plan aggregateProgress:(id)progress downloadSize:(unsigned long long *)size options:(id)options;
- (void)_asyncFetchCKAssetsFromAssetRecordsWithContext:(id)context plan:(id)plan aggregateProgress:(id)progress downloadSize:(unsigned long long *)size options:(id)options group:(id)group;
- (void)_asyncFetchMAAssetsFromFactorPacksWithContext:(id)context plan:(id)plan aggregateProgress:(id)progress downloadSize:(unsigned long long *)size options:(id)options group:(id)group;
- (void)willBeCancelledByTaskQueue:(id)queue withContext:(id)context;
- (void)_addMetricForFetchOnDemandFactorsTaskError:(int)error;
- (BOOL)isEqual:(id)equal;
- (void)_addMetric:(id)metric;
- (void)_addDimension:(id)dimension;
- (id)metrics;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (void)_logOnDemandFactor:(id)factor metricName:(id)name namespaceName:(id)name client:(id)client error:(id)error;
- (id)_asPersistedTask;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIFetchOnDemandFactorsTask_h */
