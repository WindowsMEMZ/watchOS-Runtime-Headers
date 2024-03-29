//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRBaseClusterBinaryInputBasic_h
#define MTRBaseClusterBinaryInputBasic_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRBaseDevice.h"

@interface MTRBaseClusterBinaryInputBasic : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

/* class methods */
+ (void)readAttributeActiveTextWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeDescriptionWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeInactiveTextWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeOutOfServiceWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributePolarityWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributePresentValueWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeReliabilityWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeStatusFlagsWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeApplicationTypeWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAttributeListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeActiveTextWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeDescriptionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeInactiveTextWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeOutOfServiceWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributePolarityWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributePresentValueWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeReliabilityWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeStatusFlagsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeApplicationTypeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEventListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (void)readAttributeActiveTextWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeActiveTextWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeActiveTextWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeActiveTextWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeDescriptionWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeDescriptionWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeDescriptionWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeDescriptionWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInactiveTextWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeInactiveTextWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeInactiveTextWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeInactiveTextWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeOutOfServiceWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeOutOfServiceWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeOutOfServiceWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeOutOfServiceWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePolarityWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributePolarityWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePresentValueWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributePresentValueWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributePresentValueWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributePresentValueWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeReliabilityWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeReliabilityWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeReliabilityWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeReliabilityWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeStatusFlagsWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeStatusFlagsWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeApplicationTypeWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeApplicationTypeWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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
- (void)readAttributeActiveTextWithCompletion:(id /* block */)completion;
- (void)writeAttributeActiveTextWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeActiveTextWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeActiveTextWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeDescriptionWithCompletion:(id /* block */)completion;
- (void)writeAttributeDescriptionWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeDescriptionWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeDescriptionWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInactiveTextWithCompletion:(id /* block */)completion;
- (void)writeAttributeInactiveTextWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeInactiveTextWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeInactiveTextWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeOutOfServiceWithCompletion:(id /* block */)completion;
- (void)writeAttributeOutOfServiceWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeOutOfServiceWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeOutOfServiceWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePolarityWithCompletion:(id /* block */)completion;
- (void)subscribeAttributePolarityWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePresentValueWithCompletion:(id /* block */)completion;
- (void)writeAttributePresentValueWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributePresentValueWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributePresentValueWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeReliabilityWithCompletion:(id /* block */)completion;
- (void)writeAttributeReliabilityWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeReliabilityWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeReliabilityWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeStatusFlagsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeStatusFlagsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeApplicationTypeWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeApplicationTypeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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

#endif /* MTRBaseClusterBinaryInputBasic_h */
