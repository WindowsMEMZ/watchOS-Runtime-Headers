//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKWatchDeviceAppCarouselView_h
#define PKWatchDeviceAppCarouselView_h
@import Foundation;

#include "UIView.h"
#include "PKWatchHeroImageView.h"

@class UIImage, UIImageView;

@interface PKWatchDeviceAppCarouselView : UIView {
  /* instance variables */
  PKWatchHeroImageView *_watchDeviceImageView;
  UIImageView *_carouselImageView;
  UIImageView *_appIconImageView;
}

@property (retain, nonatomic) UIImage *appIconImage;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_carouselViewImage;
- (struct CGSize { double x0; double x1; })_appIconSize;
@end

#endif /* PKWatchDeviceAppCarouselView_h */
