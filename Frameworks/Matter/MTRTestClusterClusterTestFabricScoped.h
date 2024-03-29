//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 125.3.4.0.0
//
#ifndef MTRTestClusterClusterTestFabricScoped_h
#define MTRTestClusterClusterTestFabricScoped_h
@import Foundation;

#include "MTRUnitTestingClusterTestFabricScoped.h"
#include "MTRTestClusterClusterSimpleStruct.h"

@class NSArray, NSNumber, NSString;

@interface MTRTestClusterClusterTestFabricScoped : MTRUnitTestingClusterTestFabricScoped

@property (copy, @dynamic, nonatomic) NSNumber *fabricSensitiveInt8u;
@property (copy, @dynamic, nonatomic) NSNumber *optionalFabricSensitiveInt8u;
@property (copy, @dynamic, nonatomic) NSNumber *nullableFabricSensitiveInt8u;
@property (copy, @dynamic, nonatomic) NSNumber *nullableOptionalFabricSensitiveInt8u;
@property (copy, @dynamic, nonatomic) NSString *fabricSensitiveCharString;
@property (copy, @dynamic, nonatomic) MTRTestClusterClusterSimpleStruct *fabricSensitiveStruct;
@property (copy, @dynamic, nonatomic) NSArray *fabricSensitiveInt8uList;
@property (copy, @dynamic, nonatomic) NSNumber *fabricIndex;

@end

#endif /* MTRTestClusterClusterTestFabricScoped_h */
