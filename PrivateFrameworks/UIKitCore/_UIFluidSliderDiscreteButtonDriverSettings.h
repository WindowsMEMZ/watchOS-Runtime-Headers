//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFluidSliderDiscreteButtonDriverSettings_h
#define _UIFluidSliderDiscreteButtonDriverSettings_h
@import Foundation;

#include "_UIFluidSliderDriverSettings.h"
#include "_UISpringAnimationPrototypeSettings.h"

@interface _UIFluidSliderDiscreteButtonDriverSettings : _UIFluidSliderDriverSettings

@property (nonatomic) double repeatDelay;
@property (nonatomic) double repeatCadence;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double verticalVolumeDownScale;
@property (nonatomic) double verticalVolumeUpScale;
@property (nonatomic) double horizontalVolumeDownScale;
@property (nonatomic) double horizontalVolumeUpScale;
@property (retain, nonatomic) _UISpringAnimationPrototypeSettings *settle;

/* class methods */
+ (id)settingsControllerModule;

/* instance methods */
- (void)setDefaultValues;
@end

#endif /* _UIFluidSliderDiscreteButtonDriverSettings_h */
