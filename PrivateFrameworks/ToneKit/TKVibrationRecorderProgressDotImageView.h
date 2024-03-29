//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKVibrationRecorderProgressDotImageView_h
#define TKVibrationRecorderProgressDotImageView_h
@import Foundation;

#include "UIImageView.h"

@interface TKVibrationRecorderProgressDotImageView : UIImageView

@property (nonatomic) double timeInterval;
@property (nonatomic) double duration;
@property (nonatomic) double previousPauseTimeInterval;
@property (nonatomic) double previousPauseDuration;
@property (nonatomic) double accessibilityFrameAdditionalHeight;

/* instance methods */
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
@end

#endif /* TKVibrationRecorderProgressDotImageView_h */
