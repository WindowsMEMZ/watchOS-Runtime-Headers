//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSQLiteDBPrimitives_Protocol_h
#define CKSQLiteDBPrimitives_Protocol_h
@import Foundation;

@protocol CKSQLiteDBPrimitives 
/* instance methods */
- (long long)lastInsertRowID;
- (int)changes;
- (void)executeSQL:(id)sql arguments:(char *)arguments;
- (void)executeSQL:(id)sql;
- (void)usingStatementForSQL:(id)sql performBlock:(id /* block */)block;
- (void)select:(id)select from:(id)from where:(id)where bindings:(id)bindings orderBy:(id)by limit:(id)limit block:(id /* block */)block;
- (void)selectFrom:(id)from where:(id)where bindings:(id)bindings orderBy:(id)by limit:(id)limit block:(id /* block */)block;
- (void)select:(id)select from:(id)from where:(id)where bindings:(id)bindings orderBy:(id)by limit:(id)limit offset:(id)offset block:(id /* block */)block;
- (void)update:(id)update set:(id)set where:(id)where bindings:(id)bindings limit:(id)limit;
- (long long)insertOrReplaceInto:(id)into values:(id)values;
- (long long)upsertInto:(id)into values:(id)values onConflict:(id)conflict doUpdate:(id)update where:(id)where;
- (void)deleteFrom:(id)from where:(id)where bindings:(id)bindings;
- (void)deleteFrom:(id)from matchingValues:(id)values;
- (long long)insertOrReplaceObject:(id)object;
- (BOOL)deleteExactObject:(id)object;
- (id)selectObjectOfClass:(Class)class where:(id)where bindings:(id)bindings;
- (void)updateAllObjectsOfClass:(Class)class set:(id)set where:(id)where bindings:(id)bindings;
- (void)selectAllObjectsOfClass:(Class)class where:(id)where bindings:(id)bindings orderBy:(id)by limit:(id)limit block:(id /* block */)block;
- (id)handleError:(id)error;
@end

#endif /* CKSQLiteDBPrimitives_Protocol_h */
