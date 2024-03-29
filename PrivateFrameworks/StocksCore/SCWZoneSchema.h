//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1304.0.0.0.0
//
#ifndef SCWZoneSchema_h
#define SCWZoneSchema_h
@import Foundation;

@class CKRecordZoneID, NSArray, NSString;

@interface SCWZoneSchema : NSObject

@property (copy, nonatomic) NSArray *recordSchemas;
@property (readonly, copy, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, copy, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) BOOL atomic;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, copy, nonatomic) NSArray *allRecordFieldNames;

/* instance methods */
- (id)initWithName:(id)name atomic:(BOOL)atomic version:(unsigned long long)version recordSchemas:(id)schemas;
- (id)initWithName:(id)name atomic:(BOOL)atomic recordSchemas:(id)schemas;
- (id)schemaForRecordType:(id)type;
- (BOOL)isValidRecord:(id)record;
- (id)validateRecords:(id)records;
- (BOOL)isAtomic;
@end

#endif /* SCWZoneSchema_h */
