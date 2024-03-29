//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewLayoutInvalidationContext_h
#define UICollectionViewLayoutInvalidationContext_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSOrderedSet;

@interface UICollectionViewLayoutInvalidationContext : NSObject {
  /* instance variables */
  NSArray *_previousIndexPathsForReorderedItems;
  NSArray *_targetIndexPathsForReorderedItems;
  struct CGPoint { double x; double y; } _reorderingTarget;
  NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
  struct { unsigned int x :1 invalidateDataSource; unsigned int x :1 invalidateEverything; unsigned int x :1 invalidateContentSize; unsigned int x :1 isLazy; } _invalidationContextFlags;
  NSOrderedSet *__indexPathsForItemsRequiringPreferredAttributes;
}

@property (nonatomic) BOOL invalidateDataSourceCounts;
@property (nonatomic) BOOL invalidateEverything;
@property (retain, nonatomic) NSArray *updateItems;
@property (copy, nonatomic) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (copy, nonatomic) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (nonatomic) struct CGPoint { double x0; double x1; } interactiveMovementTarget;
@property (nonatomic) BOOL _shouldInvalidateCollectionViewContentSize;
@property (nonatomic) BOOL retainExistingSizingInfoForEstimates;
@property (nonatomic) long long intent;
@property (readonly, nonatomic) NSArray *invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedDecorationIndexPaths;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffsetAdjustment;
@property (nonatomic) struct CGSize { double x0; double x1; } contentSizeAdjustment;

/* instance methods */
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidatedSupplementaryViews:(id)views;
- (void)_invalidateSupplementaryElementsOfKind:(id)kind atIndexPaths:(id)paths;
- (void)invalidateItemsAtIndexPaths:(id)paths;
- (void)_removeInvalidatedItemIndexPath:(id)path;
- (void)invalidateSupplementaryElementsOfKind:(id)kind atIndexPaths:(id)paths;
- (void)_removeInvalidatedSupplementaryOfKind:(id)kind indexPath:(id)path;
- (void)invalidateDecorationElementsOfKind:(id)kind atIndexPaths:(id)paths;
- (void)_removeInvalidatedDecorationOfKind:(id)kind indexPath:(id)path;
- (void)_setInvalidateDataSourceCounts:(BOOL)counts;
- (void)_setInvalidateEverything:(BOOL)everything;
- (void)_setUpdateItems:(id)items;
- (id)_updateItems;
- (void)_setPreviousIndexPathsForInteractivelyMovingItems:(id)items;
- (void)_setTargetIndexPathsForInteractivelyMovingItems:(id)items;
- (void)_setInteractiveMovementTarget:(struct CGPoint { double x0; double x1; })target;
- (void)_setShouldInvalidateCollectionViewContentSize:(BOOL)size;
- (BOOL)_retainExistingSizingInfoForEstimates;
- (void)_setRetainExistingSizingInfoForEstimates:(BOOL)estimates;
- (long long)_intent;
- (void)_setIntent:(long long)intent;
@end

#endif /* UICollectionViewLayoutInvalidationContext_h */
