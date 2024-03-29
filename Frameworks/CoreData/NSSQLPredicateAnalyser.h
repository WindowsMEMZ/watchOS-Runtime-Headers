//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSSQLPredicateAnalyser_h
#define NSSQLPredicateAnalyser_h
@import Foundation;

#include "NSPredicateVisitor-Protocol.h"

@class NSMutableArray;

@interface NSSQLPredicateAnalyser : NSObject<NSPredicateVisitor> {
  /* instance variables */
  BOOL _compoundPredicate;
  NSMutableArray *_keys;
  NSMutableArray *_allModifierPredicates;
  NSMutableArray *_setExpressions;
  NSMutableArray *_subqueries;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)visitPredicate:(id)predicate;
- (void)visitPredicateExpression:(id)expression;
- (void)visitPredicateOperator:(id)operator;
@end

#endif /* NSSQLPredicateAnalyser_h */
