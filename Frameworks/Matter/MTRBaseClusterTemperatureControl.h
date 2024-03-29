//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRBaseClusterTemperatureControl_h
#define MTRBaseClusterTemperatureControl_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRBaseDevice.h"

@interface MTRBaseClusterTemperatureControl : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

/* class methods */
+ (void)readAttributeTemperatureSetpointWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMinTemperatureWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeMaxTemperatureWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeStepWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeSelectedTemperatureLevelWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeSupportedTemperatureLevelsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEventListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)setTemperatureWithParams:(id)params completion:(id /* block */)completion;
- (void)readAttributeTemperatureSetpointWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeTemperatureSetpointWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMinTemperatureWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMinTemperatureWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeMaxTemperatureWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeMaxTemperatureWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeStepWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeStepWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeSelectedTemperatureLevelWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeSelectedTemperatureLevelWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeSupportedTemperatureLevelsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeSupportedTemperatureLevelsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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

#endif /* MTRBaseClusterTemperatureControl_h */
