//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseMigrator_Protocol_h
#define FCCKDatabaseMigrator_Protocol_h
@import Foundation;

@protocol FCCKDatabaseMigrator <NSObject>
/* instance methods */
- (id)databaseMigrationZoneNamesForDatabase:(id)database;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)zone database:(id)database;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)zone database:(id)database;
- (BOOL)databaseMigrationShouldDropRecord:(id)record database:(id)database;
- (id)databaseMigrationMigrateRecord:(id)record database:(id)database error:(id *)error;
- (void)databaseMigrationDidFinishForDatabase:(id)database result:(long long)result;
@end

#endif /* FCCKDatabaseMigrator_Protocol_h */
