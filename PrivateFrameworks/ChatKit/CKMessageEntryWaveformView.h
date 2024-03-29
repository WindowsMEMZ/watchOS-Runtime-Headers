//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKMessageEntryWaveformView_h
#define CKMessageEntryWaveformView_h
@import Foundation;

#include "UIView.h"

@class NSMutableArray, UIImageView, UILabel, UIVisualEffectView;

@interface CKMessageEntryWaveformView : UIView

@property (nonatomic) unsigned long long maxPowerLevelsCount;
@property (retain, nonatomic) NSMutableArray *powerLevels;
@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *balloonImageView;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *waveformImageView;
@property (nonatomic) double minTimeLabelWidth;
@property (nonatomic) double duration;

/* class methods */
+ (id)waveformCurveTransform;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)appendPowerLevel:(double)level;
- (void)clearPowerLevels;
- (void)updateWaveform;
@end

#endif /* CKMessageEntryWaveformView_h */
