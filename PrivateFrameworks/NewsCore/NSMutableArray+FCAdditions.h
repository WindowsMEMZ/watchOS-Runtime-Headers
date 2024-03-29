//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSMutableArray_FCAdditions_h
#define NSMutableArray_FCAdditions_h
@import Foundation;

@interface NSMutableArray (FCAdditions) <FCOrderedMutableCollectionAdditions, FCOrderedMutableCollectionAdditions>
/* instance methods */
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)length;
- (id)fc_mergeSortedOrderedCollection:(id)collection usingComparator:(id /* block */)comparator;
- (void)fc_insertObject:(id)object sortedUsingSelector:(SEL)selector;
- (void)fc_removeObject:(id)object sortedUsingSelector:(SEL)selector;
- (void)fc_removeFirstObject;
- (id)fc_popFirstObject;
- (id)fc_safelyPopFirstObject;
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)count;
- (id)fc_popLastObject;
- (void)fc_removeObjectsPassingTest:(id /* block */)test;
- (void)fc_insertObject:(id)object inOrderRelativeToContents:(unsigned long long)contents;
- (void)fc_insertObjects:(id)objects inOrderRelativeToContents:(unsigned long long)contents;
- (void)fc_insertObjects:(id)objects atIndex:(unsigned long long)index;
- (void)fc_trimToMaxCount:(unsigned long long)count;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)count;
- (void)fc_safelyAddObject:(id)object;
- (void)fc_safelyAddObjectsFromArray:(id)array;
- (void)fc_replaceObjectIdenticalTo:(id)to withObject:(id)object;
- (void)fc_replaceObjectIdenticalTo:(id)to withObjects:(id)objects;
- (void)fc_reverseObjects;
- (void)fc_rotateRightWithCount:(unsigned long long)count;
- (void)fc_safelyAddStringIfNonNilAndNotZeroLength:(id)length;
- (id)fc_mergeSortedOrderedCollection:(id)collection usingComparator:(id /* block */)comparator;
- (void)fc_insertObject:(id)object sortedUsingSelector:(SEL)selector;
- (void)fc_removeObject:(id)object sortedUsingSelector:(SEL)selector;
- (void)fc_removeFirstObject;
- (id)fc_popFirstObject;
- (id)fc_safelyPopFirstObject;
- (id)fc_popLeadingObjectsOfCount:(unsigned long long)count;
- (id)fc_popLastObject;
- (void)fc_removeObjectsPassingTest:(id /* block */)test;
- (void)fc_insertObject:(id)object inOrderRelativeToContents:(unsigned long long)contents;
- (void)fc_insertObjects:(id)objects inOrderRelativeToContents:(unsigned long long)contents;
- (void)fc_insertObjects:(id)objects atIndex:(unsigned long long)index;
- (void)fc_trimToMaxCount:(unsigned long long)count;
- (void)fc_trimFromFrontToMaxCount:(unsigned long long)count;
- (void)fc_safelyAddObject:(id)object;
- (void)fc_safelyAddObjectsFromArray:(id)array;
- (void)fc_replaceObjectIdenticalTo:(id)to withObject:(id)object;
- (void)fc_replaceObjectIdenticalTo:(id)to withObjects:(id)objects;
- (void)fc_reverseObjects;
- (void)fc_rotateRightWithCount:(unsigned long long)count;
@end

#endif /* NSMutableArray_FCAdditions_h */
