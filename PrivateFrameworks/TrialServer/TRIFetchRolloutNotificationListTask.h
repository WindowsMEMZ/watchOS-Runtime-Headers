//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFetchRolloutNotificationListTask_h
#define TRIFetchRolloutNotificationListTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRetryableTask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;

@interface TRIFetchRolloutNotificationListTask : TRIBaseTask<TRIRetryableTask, TRIMetricsProviding> {
  /* instance variables */
  NSMutableArray *_metrics;
  NSMutableArray *_dimensions;
  NSMutableArray *_nextTasks;
  NSDate *_startingFetchDateOverride;
  NSSet *_namespaceNames;
  NSObject<TRITaskAttributing> *_taskAttribution;
}

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
+ (id)taskWithStartingFetchDateOverride:(id)override namespaceNames:(id)names taskAttribution:(id)attribution;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStartingFetchDateOverride:(id)override namespaceNames:(id)names taskAttribution:(id)attribution;
- (void)_addNextTask:(id)task;
- (long long)nextTaskCount;
- (void)_processRolloutArtifact:(id)artifact context:(id)context taskQueue:(id)queue;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (BOOL)isEqual:(id)equal;
- (void)_addMetric:(id)metric;
- (void)_addDimension:(id)dimension;
- (id)metrics;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIFetchRolloutNotificationListTask_h */
