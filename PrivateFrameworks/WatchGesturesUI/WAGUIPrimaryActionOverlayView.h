//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIPrimaryActionOverlayView_h
#define WAGUIPrimaryActionOverlayView_h
@import Foundation;

#include "UIView.h"
#include "WAGUIGestureIndicatorView.h"

@interface WAGUIPrimaryActionOverlayView : UIView {
  /* instance variables */
  WAGUIGestureIndicatorView *_contentView;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _prevLayoutBounds;
}

@property (nonatomic) double alphaProgress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } indicatorFrame;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setTransformProgress:(double)progress isForward:(BOOL)forward;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* WAGUIPrimaryActionOverlayView_h */
