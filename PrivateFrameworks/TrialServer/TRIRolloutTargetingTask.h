//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIRolloutTargetingTask_h
#define TRIRolloutTargetingTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRolloutTaskSupport.h"
#include "TRITask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSString, TRIRolloutDeployment;

@interface TRIRolloutTargetingTask : TRIBaseTask<TRITask, TRIMetricsProviding> {
  /* instance variables */
  TRIRolloutTaskSupport *_support;
  BOOL _includeDependencies;
  NSObject<TRITaskAttributing> *_taskAttribution;
  unsigned long long _triggerEvent;
}

@property (readonly, nonatomic) TRIRolloutDeployment *rolloutDeployment;
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
+ (id)taskWithRolloutDeployment:(id)deployment includeDependencies:(BOOL)dependencies taskAttribution:(id)attribution triggerEvent:(unsigned long long)event;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithRolloutDeployment:(id)deployment includeDependencies:(BOOL)dependencies taskAttribution:(id)attribution triggerEvent:(unsigned long long)event;
- (void)runEnqueueHandlerUsingContext:(id)context;
- (void)runDequeueHandlerUsingContext:(id)context;
- (id)_systemCovariatesWithPaths:(id)paths;
- (id)_runTaskUsingContext:(id)context withTaskQueue:(id)queue rolloutTargeter:(id)targeter error:(id *)error;
- (id)_taskResultWithStatus:(int)status reportResults:(BOOL)results nextTasks:(id)tasks;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (id)_categoricalValueForTriggerEvent:(unsigned long long)event;
- (id)metrics;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIRolloutTargetingTask_h */
