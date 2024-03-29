//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRClusterOTASoftwareUpdateProvider_h
#define MTRClusterOTASoftwareUpdateProvider_h
@import Foundation;

#include "MTRCluster.h"
#include "MTRDevice.h"

@interface MTRClusterOTASoftwareUpdateProvider : MTRCluster

@property (readonly, nonatomic) MTRDevice *device;

/* instance methods */
- (id)initWithDevice:(id)device endpointID:(id)id queue:(id)queue;
- (void)queryImageWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)applyUpdateRequestWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (void)notifyUpdateAppliedWithParams:(id)params expectedValues:(id)values expectedValueInterval:(id)interval completion:(id /* block */)completion;
- (id)readAttributeGeneratedCommandListWithParams:(id)params;
- (id)readAttributeAcceptedCommandListWithParams:(id)params;
- (id)readAttributeEventListWithParams:(id)params;
- (id)readAttributeAttributeListWithParams:(id)params;
- (id)readAttributeFeatureMapWithParams:(id)params;
- (id)readAttributeClusterRevisionWithParams:(id)params;
@end

#endif /* MTRClusterOTASoftwareUpdateProvider_h */
