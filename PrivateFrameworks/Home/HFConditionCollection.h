//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFConditionCollection_h
#define HFConditionCollection_h
@import Foundation;

@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject

@property (retain, nonatomic) NSArray *conditions;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

/* class methods */
+ (id)conditionCollectionForPredicate:(id)predicate;
+ (id)_flattenedSubpredicatesForAndPredicate:(id)predicate;
+ (id)_findBestMatchingConditionsForPredicates:(id)predicates;
+ (id)_findBestConditionMatchForPredicates:(id)predicates;
+ (id)_singleConditionForPredicate:(id)predicate knownConditionsOnly:(BOOL)only;

/* instance methods */
- (id)init;
- (id)initWithConditions:(id)conditions;
- (void)addCondition:(id)condition;
- (void)removeCondition:(id)condition;
@end

#endif /* HFConditionCollection_h */
