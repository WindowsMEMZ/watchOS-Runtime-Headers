//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScrollViewScrollObserver_Internal_Protocol_h
#define _UIScrollViewScrollObserver_Internal_Protocol_h
@import Foundation;

@protocol _UIScrollViewScrollObserver_Internal <_UIScrollViewScrollObserver_ForPUICOnly>
@optional
/* instance methods */
- (void)_observeScrollView:(id)view willEndDraggingWithVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(struct CGPoint { double x0; double x1; } *)offset unclampedOriginalTarget:(struct CGPoint { double x0; double x1; })target;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_revealableContentPaddingForObservedScrollView:(id)view includeContentWithCollapsedAffinity:(BOOL)affinity;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_collapsableContentPaddingForObservedScrollView:(id)view;
- (void)_observeScrollViewWillBeginDragging:(id)dragging;
- (void)_observeScrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)_observeScrollViewDidEndDecelerating:(id)decelerating;
- (void)_didScroll;
- (void)_observeScrollView:(id)view didBeginTransitionToDeferredContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)_observeScrollViewAlignedContentMarginDidChange:(id)change;
- (void)_observeScrollViewGeometryAffectingContentBottomDidChange:(id)change;
- (void)_observeScrollView:(id)view temporaryCoordinatingReplacementDidChange:(id)change;
- (void)_observeScrollViewHasClearedContentOffsetAnimation:(id)animation;
@end

#endif /* _UIScrollViewScrollObserver_Internal_Protocol_h */
