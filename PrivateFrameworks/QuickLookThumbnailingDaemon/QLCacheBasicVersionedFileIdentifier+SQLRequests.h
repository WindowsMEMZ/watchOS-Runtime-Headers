//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLCacheBasicVersionedFileIdentifier_SQLRequests_h
#define QLCacheBasicVersionedFileIdentifier_SQLRequests_h
@import Foundation;

@interface QLCacheBasicVersionedFileIdentifier (SQLRequests)
/* instance methods */
- (struct sqlite3_stmt *)statementToInsertIntoDatabase:(id)database;
- (struct sqlite3_stmt *)statementToUpdateRecordWithCacheIdentifier:(unsigned long long)identifier inDatabase:(id)database;
- (id)initWithSteppedStatement:(struct sqlite3_stmt *)statement database:(id)database;
@end

#endif /* QLCacheBasicVersionedFileIdentifier_SQLRequests_h */
