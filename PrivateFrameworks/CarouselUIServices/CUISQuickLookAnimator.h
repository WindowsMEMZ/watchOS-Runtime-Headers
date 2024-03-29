//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISQuickLookAnimator_h
#define CUISQuickLookAnimator_h
@import Foundation;

@interface CUISQuickLookAnimator : NSObject
/* class methods */
+ (void)animateInQuickLookWithDuration:(double)duration rootView:(id)view containerView:(id)view quickLookIconView:(id)view quickLookTitleLabel:(id)label quickLookSubtitleLabel:(id)label completion:(id /* block */)completion;
+ (id /* block */)animationBlockForQuickLookToLongLookWithRootView:(id)view containerView:(id)view quickLookIconView:(id)view quickLookTitleLabel:(id)label quickLookSubtitleLabel:(id)label longLookIconViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
@end

#endif /* CUISQuickLookAnimator_h */
