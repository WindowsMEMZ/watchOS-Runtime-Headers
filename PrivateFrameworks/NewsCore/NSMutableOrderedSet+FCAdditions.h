//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSMutableOrderedSet_FCAdditions_h
#define NSMutableOrderedSet_FCAdditions_h
@import Foundation;

@interface NSMutableOrderedSet (FCAdditions) <FCOrderedMutableCollectionAdditions>
/* instance methods */
- (id)fc_mergeSortedOrderedCollection:(id)collection usingComparator:(id /* block */)comparator;
- (id)fc_removeAndReturnObjectsPassingTest:(id /* block */)test;
- (void)fc_insertObjects:(id)objects atIndex:(unsigned long long)index;
- (void)fc_transformWithBlock:(id /* block */)block;
@end

#endif /* NSMutableOrderedSet_FCAdditions_h */
