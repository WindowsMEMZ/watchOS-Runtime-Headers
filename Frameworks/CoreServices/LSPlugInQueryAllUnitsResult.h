//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1299.2.3.1.0
//
#ifndef LSPlugInQueryAllUnitsResult_h
#define LSPlugInQueryAllUnitsResult_h
@import Foundation;

#include "_LSQueryResult.h"

@class NSArray, NSUUID;

@interface LSPlugInQueryAllUnitsResult : _LSQueryResult

@property (readonly, nonatomic) NSArray *pluginUnits;
@property (readonly, nonatomic) NSUUID *dbUUID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlugInUnits:(id)units forDatabaseWithUUID:(id)uuid;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* LSPlugInQueryAllUnitsResult_h */
