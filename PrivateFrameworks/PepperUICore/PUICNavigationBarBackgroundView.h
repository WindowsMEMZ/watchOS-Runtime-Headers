//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICNavigationBarBackgroundView_h
#define PUICNavigationBarBackgroundView_h
@import Foundation;

#include "UIView.h"

@class CABackdropLayer, CAFilter, CALayer, NSString, UIImage;

@interface PUICNavigationBarBackgroundView : UIView {
  /* instance variables */
  UIImage *_gradientMaskImage;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedLegibilityBounds;
  CABackdropLayer *_backdropLayer;
  CAFilter *_reducedTransparencyFilter;
  CABackdropLayer *_portalLayer;
  CALayer *_portalMaskLayer;
}

@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } smallTitleFrame;

/* class methods */
+ (struct PUICSplitPillContainer { id x0; id x1; id x2; struct CGSize { double x0; double x1; } x3; double x4; })splitPill;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (id)blurImageMask;
- (id)passthroughBlurImageMask;
- (id)gradualBlurFilter;
- (void)layoutSublayersOfLayer:(id)layer;
- (id)portalEmulationLayer;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_handleReducedTransparencyDidChangeNotification:(id)notification;
@end

#endif /* PUICNavigationBarBackgroundView_h */
