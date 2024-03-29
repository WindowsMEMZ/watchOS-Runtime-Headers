//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIRingView_h
#define WAGUIRingView_h
@import Foundation;

#include "UIView.h"
#include "WAGUIClientSideAnimation.h"

@class UIColor;

@interface WAGUIRingView : UIView {
  /* instance variables */
  double _curveWidth;
  double _padding;
  WAGUIClientSideAnimation *_animation;
}

@property (nonatomic) BOOL clockwise;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *tintColor;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithCurveWidth:(double)width padding:(double)padding;
- (void)dealloc;
- (void)animateToProgress:(float)progress duration:(double)duration curve:(long long)curve;
- (void)layoutSubviews;
- (void)_updatePath;
- (id)_shapeLayer;
@end

#endif /* WAGUIRingView_h */
