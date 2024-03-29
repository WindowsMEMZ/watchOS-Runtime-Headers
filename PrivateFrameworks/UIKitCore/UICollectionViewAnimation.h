//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewAnimation_h
#define UICollectionViewAnimation_h
@import Foundation;

#include "UICollectionReusableView.h"
#include "UICollectionViewLayoutAttributes.h"

@class NSMutableArray;

@interface UICollectionViewAnimation : NSObject {
  /* instance variables */
  NSMutableArray *_completionHandlers;
  NSMutableArray *_startupHandlers;
  id /* block */ _animationBlock;
  struct { unsigned int x :1 animateFromCurrentPosition; unsigned int x :1 deleteAfterAnimation; unsigned int x :1 rasterizeAfterAnimation; unsigned int x :1 resetRasterizationAfterAnimation; unsigned int x :1 updateZIndexAfterAnimation; } _collectionViewAnimationFlags;
}

@property (readonly, nonatomic) UICollectionReusableView *view;
@property (readonly, nonatomic) long long viewType;
@property (readonly, nonatomic) UICollectionViewLayoutAttributes *finalLayoutAttributes;
@property (readonly, nonatomic) double startFraction;
@property (readonly, nonatomic) double endFraction;
@property (readonly, nonatomic) BOOL animateFromCurrentPosition;
@property (readonly, nonatomic) BOOL deleteAfterAnimation;
@property (readonly, nonatomic) BOOL updateZIndexAfterAnimation;
@property (nonatomic) BOOL rasterizeAfterAnimation;
@property (nonatomic) BOOL resetRasterizationAfterAnimation;
@property (nonatomic) BOOL parentInCollectionViewDuringAnimation;

/* instance methods */
- (id)initWithView:(id)view viewType:(long long)type finalLayoutAttributes:(id)attributes startFraction:(double)fraction endFraction:(double)fraction animateFromCurrentPostion:(BOOL)postion deleteAfterAnimation:(BOOL)animation customAnimations:(id /* block */)animations;
- (id)description;
- (void)start;
- (void)startWithAnimator:(id)animator;
- (void)addCompletionHandler:(id /* block */)handler;
- (void)addStartupHandler:(id /* block */)handler;
@end

#endif /* UICollectionViewAnimation_h */
