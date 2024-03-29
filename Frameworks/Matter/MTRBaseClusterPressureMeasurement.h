//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRBaseClusterPressureMeasurement_h
#define MTRBaseClusterPressureMeasurement_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRBaseDevice.h"

@interface MTRBaseClusterPressureMeasurement : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

/* class methods */
+ (void)readAttributeMeasuredValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeMinMeasuredValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeMaxMeasuredValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeToleranceWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeScaledValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeMinScaledValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeMaxScaledValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeScaledToleranceWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeScaleWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAttributeListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeMeasuredValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMinMeasuredValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMaxMeasuredValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeToleranceWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeScaledValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMinScaledValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMaxScaledValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeScaledToleranceWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeScaleWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEventListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (void)readAttributeMeasuredValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeMeasuredValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMinMeasuredValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeMinMeasuredValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMaxMeasuredValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeMaxMeasuredValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeToleranceWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeToleranceWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaledValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeScaledValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMinScaledValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeMinScaledValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMaxScaledValueWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeMaxScaledValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaledToleranceWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeScaledToleranceWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaleWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeScaleWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeGeneratedCommandListWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeAcceptedCommandListWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeAttributeListWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeAttributeListWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeFeatureMapWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeFeatureMapWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeClusterRevisionWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeClusterRevisionWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (id)initWithDevice:(id)device endpoint:(unsigned short)endpoint queue:(id)queue;
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)readAttributeMeasuredValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMeasuredValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMinMeasuredValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMinMeasuredValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMaxMeasuredValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMaxMeasuredValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeToleranceWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeToleranceWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaledValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeScaledValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMinScaledValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMinScaledValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMaxScaledValueWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMaxScaledValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaledToleranceWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeScaledToleranceWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeScaleWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeScaleWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeGeneratedCommandListWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeGeneratedCommandListWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeAcceptedCommandListWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeAcceptedCommandListWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeEventListWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeEventListWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeAttributeListWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeAttributeListWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeFeatureMapWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeFeatureMapWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeClusterRevisionWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeClusterRevisionWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
@end

#endif /* MTRBaseClusterPressureMeasurement_h */
