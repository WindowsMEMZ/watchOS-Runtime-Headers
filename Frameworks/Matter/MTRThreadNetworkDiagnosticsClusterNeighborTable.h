//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRThreadNetworkDiagnosticsClusterNeighborTable_h
#define MTRThreadNetworkDiagnosticsClusterNeighborTable_h
@import Foundation;

#include "MTRThreadNetworkDiagnosticsClusterNeighborTableStruct.h"

@class NSNumber;

@interface MTRThreadNetworkDiagnosticsClusterNeighborTable : MTRThreadNetworkDiagnosticsClusterNeighborTableStruct

@property (copy, @dynamic, nonatomic) NSNumber *extAddress;
@property (copy, @dynamic, nonatomic) NSNumber *age;
@property (copy, @dynamic, nonatomic) NSNumber *rloc16;
@property (copy, @dynamic, nonatomic) NSNumber *linkFrameCounter;
@property (copy, @dynamic, nonatomic) NSNumber *mleFrameCounter;
@property (copy, @dynamic, nonatomic) NSNumber *lqi;
@property (copy, @dynamic, nonatomic) NSNumber *averageRssi;
@property (copy, @dynamic, nonatomic) NSNumber *lastRssi;
@property (copy, @dynamic, nonatomic) NSNumber *frameErrorRate;
@property (copy, @dynamic, nonatomic) NSNumber *messageErrorRate;
@property (copy, @dynamic, nonatomic) NSNumber *rxOnWhenIdle;
@property (copy, @dynamic, nonatomic) NSNumber *fullThreadDevice;
@property (copy, @dynamic, nonatomic) NSNumber *fullNetworkData;
@property (copy, @dynamic, nonatomic) NSNumber *isChild;

@end

#endif /* MTRThreadNetworkDiagnosticsClusterNeighborTable_h */
