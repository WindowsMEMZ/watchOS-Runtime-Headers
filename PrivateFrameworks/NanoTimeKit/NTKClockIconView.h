//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKClockIconView_h
#define NTKClockIconView_h
@import Foundation;

#include "UIView.h"
#include "NTKClockAnalogIconView.h"
#include "_NTKCircleView.h"

@interface NTKClockIconView : UIView {
  /* instance variables */
  _NTKCircleView *_circleView;
  BOOL _circleViewIsBorrowed;
  NTKClockAnalogIconView *_timeView;
  BOOL _timeViewIsBorrowed;
  BOOL _useBlankIcon;
}

@property (nonatomic) double fullDiameter;
@property (nonatomic) BOOL paused;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setHidden:(BOOL)hidden;
- (id)borrowCircleView;
- (id)borrowTimeView;
- (void)restoreBorrowedViews;
- (void)layoutSubviews;
- (void)_configureCircleView;
- (void)_configureTimeView;
@end

#endif /* NTKClockIconView_h */
