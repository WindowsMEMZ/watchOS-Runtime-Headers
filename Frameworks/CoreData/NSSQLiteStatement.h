//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLiteStatement_h
#define NSSQLiteStatement_h
@import Foundation;

#include "NSCachedFetchRequestInfo.h"
#include "NSSQLEntity.h"

@class NSMutableArray, NSString;

@interface NSSQLiteStatement : NSObject {
  /* instance variables */
  NSSQLEntity *_entity;
  NSMutableArray *_bindVariables;
  NSMutableArray *_bindIntarrays;
  NSString *_sqlString;
  BOOL _isImpossibleCondition;
  BOOL _trackChangedRowCount;
  NSSQLEntity *_fakeEntityForFetch;
  NSCachedFetchRequestInfo *_cachedStatementInfo;
  struct sqlite3_stmt * _cachedSQLiteStatement;
  void * _owner;
}

/* instance methods */
- (id)initWithEntity:(id)entity sqlString:(id)string;
- (id)description;
- (id)initWithEntity:(id)entity;
- (void)dealloc;
- (id)entity;
- (id)sqlString;
- (id)bindVariables;
- (id)bindIntarrays;
@end

#endif /* NSSQLiteStatement_h */
