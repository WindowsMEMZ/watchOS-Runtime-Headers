//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 158.42.9.28.10
//
#ifndef UIView_MUXCrossPlatformOperations_h
#define UIView_MUXCrossPlatformOperations_h
@import Foundation;

@interface UIView (MUXCrossPlatformOperations) <MULayoutItem>
/* class methods */
+ (void)_mapsui_animateWithDuration:(double)duration animations:(id /* block */)animations completion:(id /* block */)completion;

/* instance methods */
- (void)_mapsui_resetLayoutMargins;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(BOOL)superview;
- (void)_mapsui_resetLayoutMarginsWithPreservesSuperview:(BOOL)superview insetsFromSafeArea:(BOOL)area;
- (id)_mapsui_layoutMarginsDescription;
- (id)_mapsui_preservedLayoutMarginsDescription;
- (id)_mapsui_recursiveLayoutMarginsDescription;
- (void)_mapsui_disableTranslatesAutoresizingMaskIntoConstraints;
- (struct CGSize { double x0; double x1; })_mapsui_fittingSize;
- (void)_mapsui_layoutIfNeeded;
- (void)_mapsui_setCardCorner;
- (void)_mapsui_setBackgroundColor:(id)color;
- (void)_mapsui_performImageLoadingTransitionWithAnimations:(id /* block */)animations completion:(id /* block */)completion;
- (void)_mapsui_addSelectGestureRecognizerWithTarget:(id)target action:(SEL)action;
- (BOOL)_mapsui_isRTL;
@end

#endif /* UIView_MUXCrossPlatformOperations_h */
