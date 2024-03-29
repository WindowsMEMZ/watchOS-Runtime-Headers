//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef IPAPhotoAdjustmentStack_h
#define IPAPhotoAdjustmentStack_h
@import Foundation;

#include "IPAAdjustmentStack.h"
#include "IPAPhotoAdjustmentPipeline.h"

@interface IPAPhotoAdjustmentStack : IPAAdjustmentStack

@property (nonatomic) struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } inputSize;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) IPAPhotoAdjustmentPipeline *pipeline;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)minimumVersionForFormat:(id)format;
- (id)maskUUIDs;
- (id)_debugDescriptionSuffix;
@end

#endif /* IPAPhotoAdjustmentStack_h */
