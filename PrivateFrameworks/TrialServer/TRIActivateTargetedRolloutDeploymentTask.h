//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIActivateTargetedRolloutDeploymentTask_h
#define TRIActivateTargetedRolloutDeploymentTask_h
@import Foundation;

#include "TRIBaseTask.h"
#include "TRIMetricsProviding-Protocol.h"
#include "TRIRolloutTaskSupport.h"
#include "TRITask-Protocol.h"
#include "TRITaskAttributing-Protocol.h"
#include "TRITaskCapabilityModifier.h"
#include "TRITaskQueueStateProviding-Protocol.h"

@class NSArray, NSDate, NSString, TRIRolloutDeployment;
@protocol NSString<TRIFactorPackSetId;

@interface TRIActivateTargetedRolloutDeploymentTask : TRIBaseTask<TRITask, TRIMetricsProviding> {
  /* instance variables */
  NSObject<TRITaskAttributing> *_taskAttribution;
  TRIRolloutTaskSupport *_support;
  TRITaskCapabilityModifier *_capabilityModifier;
}

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *factorPackSetId;
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
+ (id)taskWithDeployment:(id)deployment factorPackSetId:(id)id taskAttribution:(id)attribution capabilityModifier:(id)modifier;
+ (id)parseFromData:(id)data;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDeployment:(id)deployment factorPackSetId:(id)id taskAttribution:(id)attribution capabilityModifier:(id)modifier;
- (void)runEnqueueHandlerUsingContext:(id)context;
- (void)runDequeueHandlerUsingContext:(id)context;
- (BOOL)_notifyUpdatedShadowEvaluationsWithDeployments:(id)deployments context:(id)context usingTransaction:(id)transaction;
- (id)runUsingContext:(id)context withTaskQueue:(id)queue;
- (BOOL)isEqual:(id)equal;
- (id)metrics;
- (id)dimensions;
- (id)trialSystemTelemetry;
- (id)_asPersistedTask;
- (id)serialize;
- (unsigned long long)requiredCapabilities;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TRIActivateTargetedRolloutDeploymentTask_h */
