//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXElementVision__generated__Input_h
#define AXElementVision__generated__Input_h
@import Foundation;

#include "MLFeatureProvider-Protocol.h"

@class NSSet;

@interface AXElementVision__generated__Input : NSObject<MLFeatureProvider>

@property (nonatomic) struct __CVBuffer * image;
@property (nonatomic) double iouThreshold;
@property (nonatomic) double confidenceThreshold;
@property (readonly, nonatomic) NSSet *featureNames;

/* instance methods */
- (id)initWithImage:(struct __CVBuffer *)image iouThreshold:(double)threshold confidenceThreshold:(double)threshold;
- (id)featureValueForName:(id)name;
@end

#endif /* AXElementVision__generated__Input_h */
