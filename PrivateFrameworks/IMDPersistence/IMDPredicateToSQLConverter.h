//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDPredicateToSQLConverter_h
#define IMDPredicateToSQLConverter_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface IMDPredicateToSQLConverter : NSObject {
  /* instance variables */
  NSMutableArray *_foundParameters;
}

@property (readonly, copy, nonatomic) NSDictionary *keyPathsToColumns;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSString *expression;

/* instance methods */
- (id)init;
- (id)initWithPredicate:(id)predicate keyPathsToColumns:(id)columns;
- (void)bindParametersToSqliteWithStatement:(struct CSDBSqliteStatement { struct CSDBSqliteConnection * x0; struct sqlite3_stmt * x1; int x2; } *)statement;
@end

#endif /* IMDPredicateToSQLConverter_h */
