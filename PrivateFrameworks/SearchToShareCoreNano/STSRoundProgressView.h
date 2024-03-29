//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.2.1.0.0
//
#ifndef STSRoundProgressView_h
#define STSRoundProgressView_h
@import Foundation;

#include "UIView.h"
#include "STSProgressArcLayer.h"

@class CAShapeLayer, NSDate, NSTimer;

@interface STSRoundProgressView : UIView {
  /* instance variables */
  CAShapeLayer *_sliceLayer;
  CAShapeLayer *_circleLayer;
  struct CGPoint { double x; double y; } _pieCenter;
  double _pieRadius;
  NSTimer *_progressTimer;
  double _uiProgress;
  double _realProgress;
  double _increaseRate;
  NSDate *_prevUpdateTime;
}

@property (retain, nonatomic) STSProgressArcLayer *_progressArcLayer;
@property (nonatomic) double _contentsScale;
@property (readonly, nonatomic) long long style;
@property (nonatomic) double progress;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_setContentsScale:(double)scale;
- (void)_setProgressArcLayer:(id)layer;
- (void)_updateSublayersContentsScale;
- (void)_setupSubviews;
- (void)setPieRadius:(double)radius;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (double)toRadian:(double)radian;
- (void)increaseUIProgress:(id)uiprogress;
- (void)_updateUIProgress;
- (void)setInitialIncreaseRatePerFrame:(double)frame;
- (void)recalculateIncreaseProgress:(double)progress withTimeDiff:(double)diff;
- (void)resetProgress;
@end

#endif /* STSRoundProgressView_h */
