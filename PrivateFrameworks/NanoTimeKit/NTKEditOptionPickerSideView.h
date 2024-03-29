//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKEditOptionPickerSideView_h
#define NTKEditOptionPickerSideView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface NTKEditOptionPickerSideView : UIView {
  /* instance variables */
  double _contentAlpha;
  struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _contentTransform;
}

@property (retain, nonatomic) UIView *optionView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)applyContentTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (void)setRotationFromFront:(double)front;
- (void)_applyContentAlpha;
@end

#endif /* NTKEditOptionPickerSideView_h */
