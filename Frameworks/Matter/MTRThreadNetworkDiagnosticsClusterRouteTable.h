//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRThreadNetworkDiagnosticsClusterRouteTable_h
#define MTRThreadNetworkDiagnosticsClusterRouteTable_h
@import Foundation;

#include "MTRThreadNetworkDiagnosticsClusterRouteTableStruct.h"

@class NSNumber;

@interface MTRThreadNetworkDiagnosticsClusterRouteTable : MTRThreadNetworkDiagnosticsClusterRouteTableStruct

@property (copy, @dynamic, nonatomic) NSNumber *extAddress;
@property (copy, @dynamic, nonatomic) NSNumber *rloc16;
@property (copy, @dynamic, nonatomic) NSNumber *routerId;
@property (copy, @dynamic, nonatomic) NSNumber *nextHop;
@property (copy, @dynamic, nonatomic) NSNumber *pathCost;
@property (copy, @dynamic, nonatomic) NSNumber *lqiIn;
@property (copy, @dynamic, nonatomic) NSNumber *lqiOut;
@property (copy, @dynamic, nonatomic) NSNumber *age;
@property (copy, @dynamic, nonatomic) NSNumber *allocated;
@property (copy, @dynamic, nonatomic) NSNumber *linkEstablished;

@end

#endif /* MTRThreadNetworkDiagnosticsClusterRouteTable_h */
