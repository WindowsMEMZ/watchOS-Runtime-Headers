//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKRightAngleRotatingView_h
#define PKRightAngleRotatingView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface PKRightAngleRotatingView : UIView

@property (readonly, nonatomic) UIView *rotatedView;
@property (nonatomic) long long orientation;

/* instance methods */
- (id)initWithRotatedView:(id)view;
- (void)updateTransform;
- (BOOL)_dimensionsAreRotated;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
@end

#endif /* PKRightAngleRotatingView_h */
