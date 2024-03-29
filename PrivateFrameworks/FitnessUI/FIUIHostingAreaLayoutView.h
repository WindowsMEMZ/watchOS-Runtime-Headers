//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIHostingAreaLayoutView_h
#define FIUIHostingAreaLayoutView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface FIUIHostingAreaLayoutView : UIView

@property (retain, nonatomic) UIView *hostedView;

/* class methods */
+ (id)viewHostingView:(id)view;
+ (id)blackBackgroundViewHostingView:(id)view;

/* instance methods */
- (BOOL)translatesAutoresizingMaskIntoConstraints;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* FIUIHostingAreaLayoutView_h */
