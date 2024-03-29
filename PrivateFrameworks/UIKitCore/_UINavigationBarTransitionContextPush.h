//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarTransitionContextPush_h
#define _UINavigationBarTransitionContextPush_h
@import Foundation;

#include "_UINavigationBarTransitionContext.h"

@interface _UINavigationBarTransitionContextPush : _UINavigationBarTransitionContext {
  /* instance variables */
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewTitleViewFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingNewBackButtonFrame;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _endingBackIndicatorViewFrame;
  struct CGSize { double width; double height; } _titleTransitionDistance;
}

/* instance methods */
- (id)viewUsingEaseOutCurve;
- (int)transition;
- (void)_prepareScaleTransition;
- (void)_prepareContentView;
- (void)_prepareLargeTitleView;
- (void)_prepareBackgroundView;
- (void)_prepareSearchBar;
- (void)_prepareTransitionFromPalette:(id)palette toPalette:(id)palette toPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepare;
- (void)_animateScaleTransition;
- (void)_animateContentView;
- (void)_animateLargeTitleView;
- (void)_animateBackgroundView;
- (void)_animateSearchBar;
- (void)_animateFromPalette:(id)palette fromPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toPalette:(id)palette toPaletteFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)animate;
- (void)_finishWithFinalLayout:(id)layout invalidLayout:(id)layout;
- (void)cancel;
- (void)complete;
@end

#endif /* _UINavigationBarTransitionContextPush_h */
