//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSRunStorage_h
#define NSRunStorage_h
@import Foundation;

#include "NSCopying-Protocol.h"

@interface NSRunStorage : NSObject<NSCopying> {
  /* instance variables */
  unsigned long long _count;
  unsigned long long _elementSize;
  unsigned long long _numBlocks;
  unsigned long long _maxBlocks;
  unsigned long long _indexDeltaStartBlock;
  long long _indexDelta;
  struct _NSRunBlock { unsigned long long x0; unsigned char x1[0] } * _runs;
  unsigned long long _cachedBlock;
  struct _NSRange { unsigned long long location; unsigned long long length; } _cachedBlockRange;
  unsigned long long _gapBlockIndex;
}

/* class methods */
+ (void)_setConsistencyCheckingEnabled:(BOOL)enabled superCheckEnabled:(BOOL)enabled;
+ (void)initialize;

/* instance methods */
- (void)_ensureCapacity:(unsigned long long)capacity;
- (void)_moveGapToBlockIndex:(unsigned long long)index;
- (void)_moveGapAndMergeWithBlockRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_consistencyCheck:(long long)check;
- (void)_consistencyError:(long long)error startAtZeroError:(BOOL)error cacheError:(BOOL)error inconsistentBlockError:(BOOL)error;
- (void)_allocData:(unsigned long long)data;
- (void)_reallocData:(unsigned long long)data;
- (void)_deallocData;
- (id)initWithElementSize:(unsigned long long)size capacity:(unsigned long long)capacity;
- (id)init;
- (id)initWithRunStorage:(id)storage;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)count;
- (unsigned long long)elementSize;
- (void *)elementAtIndex:(unsigned long long)index effectiveRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)range;
- (void)replaceElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withElement:(void *)element coalesceRuns:(BOOL)runs;
- (void)insertElement:(void *)element range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range coalesceRuns:(BOOL)runs;
- (void)removeElementsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range coalesceRuns:(BOOL)runs;
- (id)description;
@end

#endif /* NSRunStorage_h */
