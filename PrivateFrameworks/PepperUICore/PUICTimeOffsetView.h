//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICTimeOffsetView_h
#define PUICTimeOffsetView_h
@import Foundation;

#include "UIView.h"

@class UILabel;

@interface PUICTimeOffsetView : UIView {
  /* instance variables */
  const struct { double x0; double x1; double x2; double x3; double x4; } * _layout;
  UILabel *_offsetUnitLabel;
}

@property (readonly) UILabel *offsetLabel;

/* class methods */
+ (id)_labelTextColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_addOffsetLabels;
- (void)_addOffsetLabelsConstraints;
- (id)_createLabel;
@end

#endif /* PUICTimeOffsetView_h */
