//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 470.14.3.0.0
//
#ifndef FigCaptureStillImageProcessingSettings_h
#define FigCaptureStillImageProcessingSettings_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary;

@interface FigCaptureStillImageProcessingSettings : NSObject<NSSecureCoding>

@property (nonatomic) float uiZoomFactor;
@property (nonatomic) unsigned int sensorRawPixelFormat;
@property (nonatomic) struct { int x0; int x1; } sensorRawDimensions;
@property (nonatomic) struct { int x0; int x1; } ultraHighResSensorRawDimensions;
@property (copy, nonatomic) NSDictionary *cameraInfoByPortType;
@property (copy, nonatomic) NSDictionary *moduleCalibrationByPortType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* FigCaptureStillImageProcessingSettings_h */
