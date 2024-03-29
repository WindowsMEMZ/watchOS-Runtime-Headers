//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFDownloadsIconView_h
#define _SFDownloadsIconView_h
@import Foundation;

#include "UIView.h"

@class UIImage, UIImageView, UIView;

@interface _SFDownloadsIconView : UIView {
  /* instance variables */
  UIView *_circleContainerView;
  UIImageView *_circleImageView;
  UIView *_arrowContainerView;
  UIImageView *_arrowImageView;
  BOOL _pulsing;
}

@property (nonatomic) double iconScale;
@property (retain, nonatomic) UIImage *circleImage;
@property (retain, nonatomic) UIImage *arrowImage;
@property (nonatomic) BOOL suppressesPixelAlignment;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_setUp;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)pulse;
- (void)_finishedPulsing;
- (id)_makeSpringAnimationWithDelay:(double)delay offset:(double)offset;
- (void)_updateSuppressesPixelAlignment;
- (void)_setPulsing:(BOOL)pulsing;
@end

#endif /* _SFDownloadsIconView_h */
