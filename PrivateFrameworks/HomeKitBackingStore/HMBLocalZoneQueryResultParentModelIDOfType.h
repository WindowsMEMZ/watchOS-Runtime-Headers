//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBLocalZoneQueryResultParentModelIDOfType_h
#define HMBLocalZoneQueryResultParentModelIDOfType_h
@import Foundation;

#include "HMBLocalZoneQueryResultRecordColumns.h"

@class NSString, NSUUID;

@interface HMBLocalZoneQueryResultParentModelIDOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int parentModelIDOffset;
@property (readonly, nonatomic) NSUUID *parentModelID;
@property (readonly, nonatomic) int modelClassNameOffset;
@property (readonly, nonatomic) NSString *modelClassName;

/* instance methods */
- (id)initWithLocalZone:(id)zone parentModelID:(id)id modelClassName:(id)name;
- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt *)statement error:(id *)error;
@end

#endif /* HMBLocalZoneQueryResultParentModelIDOfType_h */
