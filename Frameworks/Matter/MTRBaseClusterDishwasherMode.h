//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRBaseClusterDishwasherMode_h
#define MTRBaseClusterDishwasherMode_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRBaseDevice.h"

@interface MTRBaseClusterDishwasherMode : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

/* class methods */
+ (void)readAttributeSupportedModesWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentModeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeStartUpModeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeOnModeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEventListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)changeToModeWithParams:(id)params completion:(id /* block */)completion;
- (void)readAttributeSupportedModesWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeSupportedModesWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentModeWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentModeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeStartUpModeWithCompletion:(id /* block */)completion;
- (void)writeAttributeStartUpModeWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeStartUpModeWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeStartUpModeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeOnModeWithCompletion:(id /* block */)completion;
- (void)writeAttributeOnModeWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeOnModeWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeOnModeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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

#endif /* MTRBaseClusterDishwasherMode_h */
