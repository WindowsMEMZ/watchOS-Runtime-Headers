//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewUpdateItem_h
#define UICollectionViewUpdateItem_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSIndexPath, NSUUID;

@interface UICollectionViewUpdateItem : NSObject<NSCopying> {
  /* instance variables */
  struct _UICollectionUpdateIndexPair { long long section; long long item; } _initialIndexPair;
  struct _UICollectionUpdateIndexPair { long long section; long long item; } _finalIndexPair;
  struct _UICollectionUpdateIndexPair { long long section; long long item; } _indexPairForAction;
  struct { unsigned int x :1 isAppendingSectionInsert; unsigned int x :1 shouldReconfigure; } _updateItemFlags;
  NSIndexPath *_initialIndexPath;
  NSIndexPath *_finalIndexPath;
  NSUUID *_identifier;
}

@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

/* instance methods */
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)compareIndexPaths:(id)paths;
- (long long)inverseCompareIndexPaths:(id)paths;
- (long long)compareIndexPathsForMoves:(id)moves;
- (BOOL)isEqual:(id)equal;
@end

#endif /* UICollectionViewUpdateItem_h */
