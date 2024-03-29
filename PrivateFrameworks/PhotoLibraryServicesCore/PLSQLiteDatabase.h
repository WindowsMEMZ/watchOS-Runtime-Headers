//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSQLiteDatabase_h
#define PLSQLiteDatabase_h
@import Foundation;

@interface PLSQLiteDatabase : NSObject {
  /* instance variables */
  struct sqlite3 * _database;
}

/* class methods */
+ (int)dataProtectionOpenFlagForPath:(id)path;
+ (int)dataProtectionOpenFlagForCapabilities:(id)capabilities;
+ (int)setLockProxyFileForDatabase:(struct sqlite3 *)database lockFilePath:(id)path;
+ (id)openDatabaseAtPath:(id)path capabilities:(id)capabilities;
+ (struct sqlite3 *)_openSQLiteDatabaseAtPath:(const char *)path capabilities:(id)capabilities;

/* instance methods */
- (id)initWithOpenedSQLite3Database:(struct sqlite3 *)database;
- (BOOL)close;
- (BOOL)beginDeferredTransaction;
- (BOOL)beginExclusiveTransaction;
- (BOOL)commitTransaction;
- (BOOL)rollbackTransaction;
- (BOOL)prepareAndEvaluateStatement:(id)statement;
- (BOOL)prepareStatement:(id)statement andStepThroughResultsWithBlock:(id /* block */)block;
- (struct sqlite3_stmt *)_prepareStatement:(id)statement;
- (BOOL)_execute:(id)_execute;
@end

#endif /* PLSQLiteDatabase_h */
