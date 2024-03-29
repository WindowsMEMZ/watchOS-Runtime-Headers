//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICSwipeCollectionViewLayout_h
#define PUICSwipeCollectionViewLayout_h
@import Foundation;

#include "UICollectionViewCompositionalLayout.h"
#include "PUICSwipeActionController.h"
#include "PUICSwipeActionHost-Protocol.h"

@class NSArray, NSIndexPath, NSIndexSet, NSString, UIColor;

@interface PUICSwipeCollectionViewLayout : UICollectionViewCompositionalLayout<PUICSwipeActionHost> {
  /* instance variables */
  PUICSwipeActionController *_swipeController;
  double _swipePercentage;
  BOOL _animatingSwipe;
  BOOL _explicitCornerRadius;
  NSIndexPath *_swipedIndexPathForUpdate;
  BOOL _swipedIndexPathIsInvalid;
  NSArray *_deletedIndexPaths;
  NSArray *_insertedIndexPaths;
  NSArray *_reorderingIndexPaths;
  NSIndexSet *_deletedSections;
  NSIndexSet *_insertedSection;
  struct { unsigned int x :1 delegateSwipeActionInsets; unsigned int x :1 delegateLeadingActions; unsigned int x :1 delegateTrailingActions; unsigned int x :1 delegateWillBeginEditing; unsigned int x :1 delegateDidEndEditing; } _delegateFlags;
}

@property (nonatomic) double actionButtonSpacing;
@property (nonatomic) double horizontalMargin;
@property (nonatomic) long long actionStyle;
@property (nonatomic) double actionCornerRadius;
@property (nonatomic) UIColor *actionTintColor;
@property (readonly, nonatomic) NSIndexPath *swipedIndexPath;
@property (readonly, nonatomic) BOOL reordering;
@property (readonly, nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (Class)layoutAttributesClass;
+ (Class)invalidationContextClass;

/* instance methods */
- (id)initWithSection:(id)section;
- (id)initWithSection:(id)section configuration:(id)configuration;
- (id)initWithSectionProvider:(id /* block */)provider;
- (id)initWithSectionProvider:(id /* block */)provider configuration:(id)configuration;
- (id)_puicLayoutDelegate;
- (BOOL)isReordering;
- (void)invalidateLayoutWithContext:(id)context;
- (void)updateAttributesForCell:(id)cell;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForDecorationViewOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)isCollectionViewOffscreen;
- (void)setSwipePercentage:(double)percentage;
- (void)resetSwipedRowAnimated:(BOOL)animated;
- (id)swipeActionController;
- (void)prepareLayout;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)kind;
- (void)prepareForCollectionViewUpdates:(id)updates;
- (void)finalizeCollectionViewUpdates;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)kind atIndexPath:(id)path;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)kind atIndexPath:(id)path;
- (id)gestureRecognizerViewForSwipeActionController:(id)controller;
- (void)swipeActionControllerReset:(id)reset;
- (id)swipeActionController:(id)controller indexPathForTouchLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)shouldClosePullViewForSwipeActionController:(id)controller;
- (void)swipeActionController:(id)controller beginSwipeAtIndexPath:(id)path;
- (void)swipeActionController:(id)controller updateSwipeToPercentage:(double)percentage forIndexPath:(id)path animated:(BOOL)animated completion:(id /* block */)completion;
- (void)swipeActionController:(id)controller endSwipeAtIndexPath:(id)path;
- (BOOL)swipeActionController:(id)controller maySwipeForIndexPath:(id)path direction:(unsigned long long)direction;
- (id)swipeActionController:(id)controller leadingSwipeActionsConfigurationForIndexPath:(id)path;
- (id)swipeActionController:(id)controller trailingSwipeActionsConfigurationForIndexPath:(id)path;
- (id)itemContainerViewForSwipeActionController:(id)controller;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })swipeActionController:(id)controller frameForItemAtIndexPath:(id)path;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)path withTargetPosition:(struct CGPoint { double x0; double x1; })position;
- (id)invalidationContextForInteractivelyMovingItems:(id)items withTargetPosition:(struct CGPoint { double x0; double x1; })position previousIndexPaths:(id)paths previousPosition:(struct CGPoint { double x0; double x1; })position;
- (id)invalidationContextForEndingInteractiveMovementOfItemsToFinalIndexPaths:(id)paths previousIndexPaths:(id)paths movementCancelled:(BOOL)cancelled;
- (BOOL)isEditing;
@end

#endif /* PUICSwipeCollectionViewLayout_h */
