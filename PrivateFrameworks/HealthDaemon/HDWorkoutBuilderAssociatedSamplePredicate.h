//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutBuilderAssociatedSamplePredicate_h
#define HDWorkoutBuilderAssociatedSamplePredicate_h
@import Foundation;

#include "HDSQLitePredicate.h"

@interface HDWorkoutBuilderAssociatedSamplePredicate : HDSQLitePredicate
/* instance methods */
- (id)SQLForEntityClass:(Class)class;
- (id)SQLJoinClausesForEntityClass:(Class)class;
@end

#endif /* HDWorkoutBuilderAssociatedSamplePredicate_h */
