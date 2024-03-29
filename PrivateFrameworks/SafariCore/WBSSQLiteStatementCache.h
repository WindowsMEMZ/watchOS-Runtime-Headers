//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSQLiteStatementCache_h
#define WBSSQLiteStatementCache_h
@import Foundation;

#include "WBSSQLiteDatabase.h"

@class NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
  /* instance variables */
  WBSSQLiteDatabase *_database;
  NSMutableDictionary *_statements;
}

/* instance methods */
- (id)init;
- (id)initWithDatabase:(id)database;
- (id)cachedStatementForQuery:(id)query;
- (void)setCachedStatement:(id)statement forQuery:(id)query;
- (id)_createStatementForQuery:(id)query error:(id *)error;
- (id)statementForQuery:(id)query error:(id *)error;
- (void)invalidate;
- (void)dealloc;
@end

#endif /* WBSSQLiteStatementCache_h */
