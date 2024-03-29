//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSArray_FCAdditions_h
#define NSArray_FCAdditions_h
@import Foundation;

@interface NSArray (FCAdditions) <FCOrderedCollectionAdditions, FCContentArchivable>
/* class methods */
+ (id)fc_arrayByAddingObjectsFromArray:(id)array toArray:(id)array;
+ (id)fc_arrayByAddingObjectsFromArray:(id)array toArray:(id)array inRelativeOrder:(unsigned long long)order;
+ (id)fc_arrayByAddingUniqueObjectsFromArray:(id)array toArray:(id)array;
+ (id)fc_array:(id /* block */)fc_array;
+ (id)fc_generatedArrayWithCount:(unsigned long long)count generator:(id /* block */)generator;
+ (void)fc_walkArray:(id)array andArray:(id)array withBlock:(id /* block */)block;

/* instance methods */
- (id)contentArchive;
- (void)fc_enumerateObjectsPairwiseUsingBlock:(id /* block */)block;
- (void)fc_enumerateObjectsInReverse:(BOOL)reverse usingSkipAheadBlock:(id /* block */)block;
- (void)fc_enumerateObjectsFromIndex:(unsigned long long)index usingBlock:(id /* block */)block;
- (BOOL)fc_isSortedUsingComparator:(id /* block */)comparator;
- (id)fc_diffAgainstSortedOrderedCollection:(id)collection usingComparator:(id /* block */)comparator;
- (id)fc_objectInSortedOrderedCollectionWithFeature:(id)feature usingFeatureProvider:(id /* block */)provider comparator:(id /* block */)comparator;
- (void)fc_enumerateSideBySideWithArray:(id)array reverse:(BOOL)reverse block:(id /* block */)block;
- (id)fc_randomlyMergeWithArray:(id)array;
- (id)fc_dictionaryWithKeySelector:(SEL)selector;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)block valueBlock:(id /* block */)block;
- (id)fc_dictionaryWithKeySelector:(SEL)selector valueSelector:(SEL)selector;
- (id)fc_dictionaryWithKeyBlock:(id /* block */)block;
- (id)fc_dictionaryWithValueBlock:(id /* block */)block;
- (id)fc_dictionaryOfSortedObjectsWithKeyBlock:(id /* block */)block;
- (id)fc_dictionaryOfTransformedSortedObjectsWithKeyBlock:(id /* block */)block valueBlock:(id /* block */)block;
- (id)fc_onlyObject;
- (id)fc_firstObjectPassingTest:(id /* block */)test;
- (id)fc_firstObjectFromIndex:(unsigned long long)index passingTest:(id /* block */)test;
- (id)fc_firstObjectWithValue:(id)value forKey:(id)key;
- (id)fc_firstObjectOfClass:(Class)class;
- (id)fc_lastObjectPassingTest:(id /* block */)test;
- (id)fc_randomObject;
- (BOOL)fc_containsObjectPassingTest:(id /* block */)test;
- (BOOL)fc_containsObjectsAtFront:(id)front;
- (BOOL)fc_containsObjectsAtBack:(id)back;
- (BOOL)fc_containsObjectsWithValue:(id)value forKey:(id)key;
- (BOOL)fc_allObjectsPassTest:(id /* block */)test;
- (id)fc_arrayByTransformingWithBlockWithIndex:(id /* block */)index;
- (id)fc_objectsOfMaxValueWithValueBlock:(id /* block */)block comparator:(id /* block */)comparator;
- (id)fc_objectsOfMinValueWithValueBlock:(id /* block */)block comparator:(id /* block */)comparator;
- (id)fc_arrayByTransformingWithBlock:(id /* block */)block;
- (id)fc_setByTransformingWithBlock:(id /* block */)block;
- (id)fc_setOfObjectsPassingTest:(id /* block */)test;
- (id)fc_orderedSetByTransformingWithBlock:(id /* block */)block;
- (id)fc_arrayOfObjectsPassingTest:(id /* block */)test;
- (id)fc_arrayOfObjectsFailingTest:(id /* block */)test;
- (unsigned long long)fc_countOfObjectsPassingTest:(id /* block */)test;
- (id)fc_arrayByFlattening;
- (id)fc_arrayByRemovingObject:(id)object;
- (id)fc_arrayByRemovingObjectIdenticalTo:(id)to;
- (id)fc_arrayByRemovingObjectsInArray:(id)array;
- (id)fc_arrayByRemovingKeysInDictionary:(id)dictionary;
- (id)fc_arrayByReplacingObjectIdenticalTo:(id)to withObject:(id)object;
- (id)fc_arrayByReplacingObjectAtIndex:(unsigned long long)index withObject:(id)object;
- (id)fc_arrayByRemovingFirstObject;
- (id)fc_arrayByRemovingObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)fc_arrayByRemovingObjectsAtIndexes:(id)indexes;
- (id)fc_arrayByRemovingObjectsPassingTest:(id /* block */)test;
- (id)fc_arrayByReplacingObjectsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withObject:(id)object;
- (id)fc_arraysByExcisingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)fc_arraysByPartitioningOnObjectsPassingTest:(id /* block */)test;
- (id)fc_arraysByPartitioningWithBudget:(id)budget indicesOfOverBudgetObjects:(id *)objects appraiser:(id /* block */)appraiser accumulator:(id /* block */)accumulator comparator:(id /* block */)comparator;
- (unsigned long long)fc_indexOfFirstObjectWithValue:(id)value forKey:(id)key;
- (id)fc_indexesOfObjectsIdenticalTo:(id)to;
- (id)fc_indexesOfObjectsPassingTest:(id /* block */)test;
- (id)fc_arrayByCollectingObjectsWithBlock:(id /* block */)block;
- (id)fc_setByCollectingObjectsWithBlock:(id /* block */)block;
- (id)fc_arrayByAddingNonContainedObjectsFromArray:(id)array;
- (id)fc_subarrayUpToCountInclusive:(unsigned long long)inclusive;
- (id)fc_subarrayUpToIndex:(unsigned long long)index inclusive:(BOOL)inclusive;
- (id)fc_subarrayFromIndex:(unsigned long long)index inclusive:(BOOL)inclusive;
- (id)fc_subarrayWithMaxCount:(unsigned long long)count;
- (id)fc_subarrayFromCount:(unsigned long long)count;
- (id)fc_subarrayInOrder:(unsigned long long)order relativeToIndex:(unsigned long long)index inclusive:(BOOL)inclusive;
- (id)fc_subarrayInOrder:(unsigned long long)order relativeToIndex:(unsigned long long)index withMaxCount:(unsigned long long)count range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (id)fc_subarrayFromIndex:(unsigned long long)index withMaxCount:(unsigned long long)count range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (id)fc_subarrayToIndex:(unsigned long long)index withMaxCount:(unsigned long long)count range:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (id)fc_arrayByMergingAdjacentObjectsWithMergePolicy:(id /* block */)policy mergeBlock:(id /* block */)block;
- (id)fc_safeObjectAtIndex:(unsigned long long)index;
- (id)fc_safeSubarrayWithCountFromFront:(unsigned long long)front;
- (id)fc_safeSubarrayWithCountFromBack:(unsigned long long)back;
- (void)fc_subarrayWithCount:(unsigned long long)count result:(id /* block */)result;
- (id)fc_subarrayWithPercentFromBeginning:(double)beginning;
- (id)fc_subarrayWithPercentToEnd:(double)end;
- (void)fc_visitSubarraysWithMaxCount:(unsigned long long)count block:(id /* block */)block;
- (id)fc_reduceArrayWithInitial:(id)initial block:(id /* block */)block;
- (double)fc_reduceArrayWithDouble:(double)double block:(id /* block */)block;
- (id)fc_arrayByReversingObjects;
- (unsigned long long)fc_uniqueCount;
- (unsigned long long)fc_distanceFromArray:(id)array;
- (id)fc_uniqueByValueBlock:(id /* block */)block;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })fc_expandIndex:(unsigned long long)index toIncludeAdjacentObjectsPassingTest:(id /* block */)test;
- (void)fc_splitArrayWithTest:(id /* block */)test result:(id /* block */)result;
- (void)fc_enumerateIslandsOfCommonValuesForKeyBlock:(id /* block */)block withBlock:(id /* block */)block;
- (id)fc_sortedArrayStartingWithElementsSatisfying:(id /* block */)satisfying sortedBy:(id /* block */)by;
- (id)fc_rotateElementsFromTheIndexOfSelectedItem:(unsigned long long)item;
- (BOOL)fc_isEqualToArray:(id)array inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (BOOL)fc_isEqualToArray:(id)array;
- (double)fc_euclideanDistanceToArray:(id)array;
- (double)fc_cosineDistanceToArray:(id)array;
@end

#endif /* NSArray_FCAdditions_h */
