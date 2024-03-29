//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRClusterGroups_h
#define MTRClusterGroups_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRDevice.h"

@interface MTRClusterGroups : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

/* instance methods */
- (id)initWithDevice:(id)device endpoint:(unsigned short)endpoint queue:(id)queue;
- (void)addGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)viewGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)getGroupMembershipWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)removeGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)removeAllGroupsWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)removeAllGroupsWithExpectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (void)addGroupIfIdentifyingWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completionHandler:(id /* block */)handler;
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)addGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)viewGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)getGroupMembershipWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)removeGroupWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)removeAllGroupsWithExpectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)removeAllGroupsWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)addGroupIfIdentifyingWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (id)readAttributeNameSupportWithParams:(id)params;
- (id)readAttributeGeneratedCommandListWithParams:(id)params;
- (id)readAttributeAcceptedCommandListWithParams:(id)params;
- (id)readAttributeEventListWithParams:(id)params;
- (id)readAttributeAttributeListWithParams:(id)params;
- (id)readAttributeFeatureMapWithParams:(id)params;
- (id)readAttributeClusterRevisionWithParams:(id)params;
@end

#endif /* MTRClusterGroups_h */
