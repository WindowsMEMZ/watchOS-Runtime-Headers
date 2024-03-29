//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRBaseClusterWindowCovering_h
#define MTRBaseClusterWindowCovering_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRBaseDevice.h"

@interface MTRBaseClusterWindowCovering : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device;

/* class methods */
+ (void)readAttributeTypeWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributePhysicalClosedLimitLiftWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributePhysicalClosedLimitTiltWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionLiftWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionTiltWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeNumberOfActuationsLiftWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeNumberOfActuationsTiltWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeConfigStatusWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionLiftPercentageWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionTiltPercentageWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeOperationalStatusWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeTargetPositionLiftPercent100thsWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeTargetPositionTiltPercent100thsWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeEndProductTypeWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionLiftPercent100thsWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeCurrentPositionTiltPercent100thsWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeInstalledOpenLimitLiftWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeInstalledClosedLimitLiftWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeInstalledOpenLimitTiltWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeInstalledClosedLimitTiltWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeModeWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeSafetyStatusWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeGeneratedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAcceptedCommandListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeAttributeListWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeFeatureMapWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeClusterRevisionWithAttributeCache:(id)cache endpoint:(id)endpoint queue:(id)queue completionHandler:(id /* block */)handler;
+ (void)readAttributeTypeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributePhysicalClosedLimitLiftWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributePhysicalClosedLimitTiltWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionLiftWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionTiltWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeNumberOfActuationsLiftWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeNumberOfActuationsTiltWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeConfigStatusWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionLiftPercentageWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionTiltPercentageWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeOperationalStatusWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeTargetPositionLiftPercent100thsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeTargetPositionTiltPercent100thsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEndProductTypeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionLiftPercent100thsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeCurrentPositionTiltPercent100thsWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeInstalledOpenLimitLiftWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeInstalledClosedLimitLiftWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeInstalledOpenLimitTiltWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeInstalledClosedLimitTiltWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeModeWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeSafetyStatusWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeGeneratedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAcceptedCommandListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeEventListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeAttributeListWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeFeatureMapWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;
+ (void)readAttributeClusterRevisionWithClusterStateCache:(id)cache endpoint:(id)endpoint queue:(id)queue completion:(id /* block */)completion;

/* instance methods */
- (void)upOrOpenWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)upOrOpenWithCompletionHandler:(id /* block */)handler;
- (void)downOrCloseWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)downOrCloseWithCompletionHandler:(id /* block */)handler;
- (void)stopMotionWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)stopMotionWithCompletionHandler:(id /* block */)handler;
- (void)goToLiftValueWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)goToLiftPercentageWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)goToTiltValueWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)goToTiltPercentageWithParams:(id)params completionHandler:(id /* block */)handler;
- (void)readAttributeTypeWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeTypeWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePhysicalClosedLimitLiftWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributePhysicalClosedLimitLiftWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePhysicalClosedLimitTiltWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributePhysicalClosedLimitTiltWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionLiftWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionTiltWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeNumberOfActuationsLiftWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeNumberOfActuationsLiftWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeNumberOfActuationsTiltWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeNumberOfActuationsTiltWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeConfigStatusWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeConfigStatusWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftPercentageWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionLiftPercentageWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltPercentageWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionTiltPercentageWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeOperationalStatusWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeOperationalStatusWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeTargetPositionLiftPercent100thsWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeTargetPositionLiftPercent100thsWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeTargetPositionTiltPercent100thsWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeTargetPositionTiltPercent100thsWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeEndProductTypeWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeEndProductTypeWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftPercent100thsWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionLiftPercent100thsWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltPercent100thsWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeCurrentPositionTiltPercent100thsWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledOpenLimitLiftWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeInstalledOpenLimitLiftWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledClosedLimitLiftWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeInstalledClosedLimitLiftWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledOpenLimitTiltWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeInstalledOpenLimitTiltWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledClosedLimitTiltWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeInstalledClosedLimitTiltWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeModeWithCompletionHandler:(id /* block */)handler;
- (void)writeAttributeModeWithValue:(id)value completionHandler:(id /* block */)handler;
- (void)writeAttributeModeWithValue:(id)value params:(id)params completionHandler:(id /* block */)handler;
- (void)subscribeAttributeModeWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeSafetyStatusWithCompletionHandler:(id /* block */)handler;
- (void)subscribeAttributeSafetyStatusWithMinInterval:(id)interval maxInterval:(id)interval params:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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
- (void)upOrOpenWithCompletion:(id /* block */)completion;
- (void)upOrOpenWithParams:(id)params completion:(id /* block */)completion;
- (void)downOrCloseWithCompletion:(id /* block */)completion;
- (void)downOrCloseWithParams:(id)params completion:(id /* block */)completion;
- (void)stopMotionWithCompletion:(id /* block */)completion;
- (void)stopMotionWithParams:(id)params completion:(id /* block */)completion;
- (void)goToLiftValueWithParams:(id)params completion:(id /* block */)completion;
- (void)goToLiftPercentageWithParams:(id)params completion:(id /* block */)completion;
- (void)goToTiltValueWithParams:(id)params completion:(id /* block */)completion;
- (void)goToTiltPercentageWithParams:(id)params completion:(id /* block */)completion;
- (void)readAttributeTypeWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeTypeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePhysicalClosedLimitLiftWithCompletion:(id /* block */)completion;
- (void)subscribeAttributePhysicalClosedLimitLiftWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributePhysicalClosedLimitTiltWithCompletion:(id /* block */)completion;
- (void)subscribeAttributePhysicalClosedLimitTiltWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionLiftWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionTiltWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeNumberOfActuationsLiftWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeNumberOfActuationsLiftWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeNumberOfActuationsTiltWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeNumberOfActuationsTiltWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeConfigStatusWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeConfigStatusWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftPercentageWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionLiftPercentageWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltPercentageWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionTiltPercentageWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeOperationalStatusWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeOperationalStatusWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeTargetPositionLiftPercent100thsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeTargetPositionLiftPercent100thsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeTargetPositionTiltPercent100thsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeTargetPositionTiltPercent100thsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeEndProductTypeWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeEndProductTypeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionLiftPercent100thsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionLiftPercent100thsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeCurrentPositionTiltPercent100thsWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeCurrentPositionTiltPercent100thsWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledOpenLimitLiftWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeInstalledOpenLimitLiftWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledClosedLimitLiftWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeInstalledClosedLimitLiftWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledOpenLimitTiltWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeInstalledOpenLimitTiltWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeInstalledClosedLimitTiltWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeInstalledClosedLimitTiltWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeModeWithCompletion:(id /* block */)completion;
- (void)writeAttributeModeWithValue:(id)value completion:(id /* block */)completion;
- (void)writeAttributeModeWithValue:(id)value params:(id)params completion:(id /* block */)completion;
- (void)subscribeAttributeModeWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
- (void)readAttributeSafetyStatusWithCompletion:(id /* block */)completion;
- (void)subscribeAttributeSafetyStatusWithParams:(id)params subscriptionEstablished:(id /* block */)established reportHandler:(id /* block */)handler;
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

#endif /* MTRBaseClusterWindowCovering_h */
