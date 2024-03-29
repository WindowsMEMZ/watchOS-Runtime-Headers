//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKSQLiteCompiledStatement_h
#define CKSQLiteCompiledStatement_h
@import Foundation;

#include "CKSQLiteCompiledStatementDecoder.h"
#include "CKSQLiteDatabase.h"
#include "CKSQLiteTable.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSNumber, NSPointerArray, NSPredicate, NSString;

@interface CKSQLiteCompiledStatement : NSObject {
  /* instance variables */
  CKSQLiteDatabase *_db;
  struct sqlite3_stmt * _handle;
  NSString *_sql;
  NSArray *_resultColumns;
  NSArray *_resultColumnTypes;
  NSPointerArray *_fetchedValues;
  NSPredicate *_wherePredicate;
  Class _tableClass;
  NSMutableDictionary *_bindingTypesByVariable;
  NSDictionary *_searchValues;
  BOOL _needsSearchBinding;
  BOOL _sqlLoggingEnabled;
  NSMutableString *_orderBySQL;
  NSMutableArray *_boundObjects;
  CKSQLiteCompiledStatementDecoder *_decoder;
}

@property (readonly, weak, nonatomic) CKSQLiteTable *table;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL shouldCache;
@property (retain, nonatomic) NSArray *searchProperties;
@property (retain, nonatomic) NSNumber *limit;
@property (retain, nonatomic) NSNumber *offset;

/* class methods */
+ (id)statementForFetchingAllTableNamesInDatabase:(id)database;
+ (id)statementForCountingRowsInTable:(id)table;
+ (id)statementForSummingColumn:(id)column inTable:(id)table;
+ (id)statementForSizingColumn:(id)column inTable:(id)table;
+ (id)statementForUpdatingColumns:(id)columns inTable:(id)table;
+ (id)statementForInserting:(id)inserting inTable:(id)table;
+ (id)statementForInserting:(id)inserting orUpdating:(id)updating inTable:(id)table;
+ (id)statementForFetchingColumns:(id)columns inTable:(id)table;
+ (id)_statementForFetchingMinMax:(id)max forColumn:(id)column inTable:(id)table;
+ (id)statementForFetchingMinimumValueForColumn:(id)column inTable:(id)table;
+ (id)statementForFetchingMaximumValueForColumn:(id)column inTable:(id)table;
+ (id)statementForDeletingInTable:(id)table;

/* instance methods */
- (id)initWithDatabase:(id)database sql:(id)sql resultColumns:(id)columns resultColumnTypes:(id)types;
- (id)initWithTable:(id)table sql:(id)sql resultColumns:(id)columns resultColumnTypes:(id)types;
- (void)dealloc;
- (void)invalidate;
- (id)description;
- (id)fetchedColumns;
- (id)propertyDecoder:(id *)decoder;
- (void)resetAndClearBindings;
- (id)setSearchPredicate:(id)predicate forProperties:(id)properties tableClass:(Class)class;
- (id)addBindingVariable:(id)variable withAssociatedProperty:(id)property;
- (id)bindSearchValues:(id)values;
- (id)sqlValueForVariable:(id)variable;
- (id)doSearchValueBinding;
- (id)searchBindingsDescription;
- (void)orderByProperty:(id)property ascending:(BOOL)ascending;
- (id)compile;
- (id)_fillFetchedValues;
- (BOOL)step:(id *)step;
- (id)boundObjects;
- (id)bindValue:(id)value ofType:(unsigned int)type atIndex:(int)index;
- (id)bindValueColumn:(id)column type:(unsigned int)type value:(id)value;
- (void)enumerateResultColumnsWithBlock:(id /* block */)block;
- (id)cksqlcs_appendSQLConstantValueToString:(id)string;
@end

#endif /* CKSQLiteCompiledStatement_h */
