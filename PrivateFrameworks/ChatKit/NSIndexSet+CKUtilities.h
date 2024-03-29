//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef NSIndexSet_CKUtilities_h
#define NSIndexSet_CKUtilities_h
@import Foundation;

@interface NSIndexSet (CKUtilities)
/* instance methods */
- (id)__ck_indexPathRowsInSection:(long long)section;
- (id)__ck_indexPathItemsInSection:(long long)section;
- (void)__ck_enumerateIndexesByProximityToIndex:(unsigned long long)index usingBlock:(id /* block */)block;
- (id)__ck_indexSetShiftedForInsertedIndexes:(id)indexes removedIndexes:(id)indexes;
@end

#endif /* NSIndexSet_CKUtilities_h */
