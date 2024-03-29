//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebDatabaseManager_h
#define WebDatabaseManager_h
@import Foundation;

@interface WebDatabaseManager : NSObject
/* class methods */
+ (id)sharedWebDatabaseManager;
+ (void)removeEmptyDatabaseFiles;
+ (void)scheduleEmptyDatabaseRemoval;

/* instance methods */
- (id)init;
- (id)origins;
- (id)databasesWithOrigin:(id)origin;
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;
- (void)deleteAllDatabases;
- (BOOL)deleteOrigin:(id)origin;
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;
- (void)deleteAllIndexedDatabases;
@end

#endif /* WebDatabaseManager_h */
