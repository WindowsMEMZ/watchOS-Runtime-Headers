//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRTimeSynchronizationClusterTimeZoneType_h
#define MTRTimeSynchronizationClusterTimeZoneType_h
@import Foundation;

#include "MTRTimeSynchronizationClusterTimeZoneStruct.h"

@class NSNumber, NSString;

@interface MTRTimeSynchronizationClusterTimeZoneType : MTRTimeSynchronizationClusterTimeZoneStruct

@property (copy, @dynamic, nonatomic) NSNumber *offset;
@property (copy, @dynamic, nonatomic) NSNumber *validAt;
@property (copy, @dynamic, nonatomic) NSString *name;

@end

#endif /* MTRTimeSynchronizationClusterTimeZoneType_h */
