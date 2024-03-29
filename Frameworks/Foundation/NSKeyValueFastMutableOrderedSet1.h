//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef NSKeyValueFastMutableOrderedSet1_h
#define NSKeyValueFastMutableOrderedSet1_h
@import Foundation;

#include "NSKeyValueFastMutableOrderedSet.h"
#include "NSKeyValueNonmutatingOrderedSetMethodSet.h"

@interface NSKeyValueFastMutableOrderedSet1 : NSKeyValueFastMutableOrderedSet {
  /* instance variables */
  NSKeyValueNonmutatingOrderedSetMethodSet *_nonmutatingMethods;
}

/* instance methods */
- (id)_proxyInitWithContainer:(id)container getter:(id)getter;
- (void)_proxyNonGCFinalize;
- (unsigned long long)count;
- (void)getObjects:(id *)objects range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)indexOfObject:(id)object;
- (id)objectAtIndex:(unsigned long long)index;
- (id)objectsAtIndexes:(id)indexes;
@end

#endif /* NSKeyValueFastMutableOrderedSet1_h */
