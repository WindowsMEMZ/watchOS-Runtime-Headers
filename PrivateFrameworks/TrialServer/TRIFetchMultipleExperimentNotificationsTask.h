//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIFetchMultipleExperimentNotificationsTask_h
#define TRIFetchMultipleExperimentNotificationsTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRetryableTask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSMutableArray, NSSet, NSString;

@interface TRIFetchMultipleExperimentNotificationsTask : TRIBaseTask<TRIRetryableTask, TRIMetricsProviding> {
  /* instance variables */
  NSMutableArray *_metrics;
  NSMutableArray *_dimensions;
  NSMutableArray *_nextTasks;
  NSDate *_startingFetchDateOverride;
  BOOL _rollbacksOnly;
  BOOL _limitedCarryOnly;
  NSObject<TRITaskAttributing> *_taskAttributing;
  NSSet *_namespaceNames;
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
+ (id)taskWithStartingFetchDateOverride:(id)override namespaceNames:(id)names taskAttributing:(id)attributing rollbacksOnly:(BOOL)only limitedCarryOnly:(BOOL)only;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStartingFetchDateOverride:(id)override namespaceNames:(id)names taskAttributing:(id)attributing rollbacksOnly:(BOOL)only limitedCarryOnly:(BOOL)only;
- (id)initWithStartingFetchDateOverride:(id)override container:(int)container team:(id)team rollbacksOnly:(BOOL)only withNamespaceNames:(id)names;
- (void)_addNextTask:(id)task;
- (long long)nextTaskCount;
- (id)_getNextTaskForExperiment:(id)experiment database:(id)database taskQueue:(id)queue;
- (id)_nameForNotificationType:(int)type;
- (BOOL)_processExperiment:(id)experiment experimentDatabase:(id)database namespaceDatabase:(id)database taskQueue:(id)queue paths:(id)paths;
- (void)updateStatusForNamespacesWithContext:(id)context;
- (BOOL)_checkIfAnyTreatmentPresent:(id)present usingContext:(id)context;
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

#endif /* TRIFetchMultipleExperimentNotificationsTask_h */
