//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCKDatabaseMigrationOperation_h
#define FCCKDatabaseMigrationOperation_h
@import Foundation;

#include "FCOperation.h"
#include "FCCKDatabaseMigrator-Protocol.h"
#include "FCCKPrivateDatabase.h"

@class NSMutableArray;

@interface FCCKDatabaseMigrationOperation : FCOperation {
  /* instance variables */
  FCCKPrivateDatabase *_database;
  NSObject<FCCKDatabaseMigrator> *_migrator;
  id /* block */ _migrationCompletionHandler;
  NSMutableArray *_resultZoneIDsEligibleForDeletion;
  NSMutableArray *_resultRecordIDsEligibleForDeletion;
}

/* instance methods */
- (BOOL)validateOperation;
- (void)prepareOperation;
- (void)performOperation;
- (BOOL)canRetryWithError:(id)error retryAfter:(id *)after;
- (void)operationWillFinishWithError:(id)error;
@end

#endif /* FCCKDatabaseMigrationOperation_h */
