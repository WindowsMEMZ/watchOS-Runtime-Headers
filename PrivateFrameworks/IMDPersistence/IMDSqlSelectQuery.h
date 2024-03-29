//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDSqlSelectQuery_h
#define IMDSqlSelectQuery_h
@import Foundation;

#include "IMDSqlQuery.h"

@interface IMDSqlSelectQuery : IMDSqlQuery
/* class methods */
+ (id)selectQueryForTable:(id)table;
+ (id)selectQueryForTable:(id)table withColumns:(id)columns;
+ (id)selectQueryForTable:(id)table withColumns:(id)columns where:(id)where;

/* instance methods */
- (id)initWithTableName:(id)name;
- (id)createQueryString;
@end

#endif /* IMDSqlSelectQuery_h */
