//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSQLiteDatabaseRegistry_h
#define CKSQLiteDatabaseRegistry_h
@import Foundation;

#include "CKSQLiteTable.h"

@interface CKSQLiteDatabaseRegistry : CKSQLiteTable
/* class methods */
+ (id)dbProperties;
+ (Class)entryClass;

/* instance methods */
- (id)registerDatabase:(id)database;
- (id)databaseWithID:(id)id;
- (id)entryForDatabase:(id)database refresh:(BOOL)refresh error:(id *)error;
- (id)databaseIDForDatabase:(id)database error:(id *)error;
@end

#endif /* CKSQLiteDatabaseRegistry_h */
