//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCircleProgressView_h
#define SFCircleProgressView_h
@import Foundation;

#include "UIView.h"

@class UIColor;

@interface SFCircleProgressView : UIView

@property (nonatomic) long long progressStartPoint;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL usesRoundedLineCap;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) double progress;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)setProgress:(double)progress animated:(BOOL)animated completion:(id /* block */)completion;
- (void)setProgress:(double)progress animated:(BOOL)animated forced:(BOOL)forced completion:(id /* block */)completion;
- (void)animateProgressCompletedWithCompletion:(id /* block */)completion;
- (double)progressPresentationValue;
@end

#endif /* SFCircleProgressView_h */
