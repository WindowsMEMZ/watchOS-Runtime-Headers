//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 651.5.0.0.0
//
#ifndef BSIntegerSet_h
#define BSIntegerSet_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSHashTable;

@interface BSIntegerSet : NSObject<NSCopying, NSMutableCopying> {
  /* instance variables */
  NSHashTable *_hashTable;
  BOOL _hasZeroValue;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (void)enumerateIndexesUsingBlock:(id /* block */)block;
- (void)enumerateRangesUsingBlock:(id /* block */)block;
- (id)init;
- (id)initWithCapacity:(unsigned long long)capacity;
- (BOOL)containsValue:(long long)value;
- (void)enumerateWithBlock:(id /* block */)block;
- (void)enumerateSortedWithBlock:(id /* block */)block;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
@end

#endif /* BSIntegerSet_h */
