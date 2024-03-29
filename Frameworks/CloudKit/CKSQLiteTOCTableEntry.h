//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSQLiteTOCTableEntry_h
#define CKSQLiteTOCTableEntry_h
@import Foundation;

#include "CKSQLiteTableEntry.h"

@class NSDictionary, NSNumber, NSString;

@interface CKSQLiteTOCTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *tableID;
@property (copy, nonatomic) NSString *logicalTableName;
@property (copy, nonatomic) NSString *dbTableName;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *dbVersion;
@property (copy, nonatomic) NSString *creatingClass;
@property (retain, nonatomic) NSDictionary *propertyData;
@property (retain, nonatomic) NSString *creator;

/* instance methods */
@end

#endif /* CKSQLiteTOCTableEntry_h */
