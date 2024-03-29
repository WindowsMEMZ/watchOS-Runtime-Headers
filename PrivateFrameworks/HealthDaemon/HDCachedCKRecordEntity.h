//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCachedCKRecordEntity_h
#define HDCachedCKRecordEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDCachedCKRecordEntity : HDHealthEntity
/* class methods */
+ (id)databaseTable;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)foreignKeys;
+ (id)uniquedColumns;
+ (id)insertWithZoneID:(long long)id recordType:(id)type epoch:(long long)epoch recordName:(id)name recordData:(id)data transaction:(id)transaction error:(id *)error;
+ (BOOL)updateWithRecordData:(id)data epoch:(long long)epoch zoneID:(long long)id recordName:(id)name transaction:(id)transaction error:(id *)error;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name recordData:(id)data recordType:(id)type recordName:(id)name profile:(id)profile error:(id *)error;
+ (BOOL)enumerateRecordIDsWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name profile:(id)profile error:(id *)error enumerationHandler:(id /* block */)handler;
+ (BOOL)enumerateRecordIDAndDataWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name recordType:(id)type recordName:(id)name epoch:(long long)epoch profile:(id)profile error:(id *)error enumerationHandler:(id /* block */)handler;
+ (long long)containsRecordsWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name profile:(id)profile error:(id *)error;
+ (long long)containsRecordWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name recordName:(id)name profile:(id)profile error:(id *)error;
+ (id)recordDataWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name recordName:(id)name profile:(id)profile error:(id *)error;
+ (BOOL)deleteRecordWithContainerIdentifier:(id)identifier databaseScope:(long long)scope zoneName:(id)name ownerName:(id)name recordName:(id)name profile:(id)profile error:(id *)error;
@end

#endif /* HDCachedCKRecordEntity_h */
