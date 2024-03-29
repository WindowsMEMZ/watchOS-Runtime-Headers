//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef CKVDatabaseUpdateBuilder_h
#define CKVDatabaseUpdateBuilder_h
@import Foundation;

#include "CKVDatabaseCommandBuilder.h"

@class NSArray, NSMutableArray;

@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
  /* instance variables */
  NSMutableArray *_columnNames;
  NSMutableArray *_columnValues;
  NSArray *_returningColumns;
}

/* instance methods */
- (id)initWithTableName:(id)name;
- (id)build;
- (void)setCommandCriterion:(id)criterion;
- (void)setValue:(id)value forColumn:(id)column;
- (void)setReturningColumns:(id)columns;
@end

#endif /* CKVDatabaseUpdateBuilder_h */
