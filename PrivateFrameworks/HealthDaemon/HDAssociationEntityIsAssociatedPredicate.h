//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDAssociationEntityIsAssociatedPredicate_h
#define HDAssociationEntityIsAssociatedPredicate_h
@import Foundation;

#include "HDSQLitePredicate.h"

@interface HDAssociationEntityIsAssociatedPredicate : HDSQLitePredicate {
  /* instance variables */
  BOOL _inverted;
}

/* class methods */
+ (id)predicateWithInvertedCondition:(BOOL)condition;

/* instance methods */
- (id)SQLJoinClausesForEntityClass:(Class)class;
- (id)SQLForEntityClass:(Class)class;
- (void)bindToStatement:(struct sqlite3_stmt *)statement bindingIndex:(int *)index;
@end

#endif /* HDAssociationEntityIsAssociatedPredicate_h */
