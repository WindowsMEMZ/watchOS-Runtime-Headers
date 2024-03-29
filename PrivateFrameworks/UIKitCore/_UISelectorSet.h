//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UISelectorSet_h
#define _UISelectorSet_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSHashTable;

@interface _UISelectorSet : NSObject<NSCopying> {
  /* instance variables */
  NSHashTable *_hash;
}

@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)initWithHash:(id)hash;
- (id)init;
- (id)initWithSelectors:(SEL)selectors;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)containsSelector:(SEL)selector;
- (void)addSelector:(SEL)selector;
- (void)removeSelector:(SEL)selector;
- (void)enumerateSelectorsUsingBlock:(id /* block */)block;
- (BOOL)intersectsSet:(id)set;
- (BOOL)containsSet:(id)set;
- (void)intersectSet:(id)set;
- (void)minusSet:(id)set;
- (void)unionSet:(id)set;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
@end

#endif /* _UISelectorSet_h */
