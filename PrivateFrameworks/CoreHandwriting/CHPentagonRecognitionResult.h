//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHPentagonRecognitionResult_h
#define CHPentagonRecognitionResult_h
@import Foundation;

#include "CHSketchRecognitionResult.h"

@interface CHPentagonRecognitionResult : CHSketchRecognitionResult

@property (readonly) struct CGPoint { double x0; double x1; } center;
@property (readonly) struct CGSize { double x0; double x1; } size;

/* instance methods */
- (id)initWithString:(id)string score:(double)score rotation:(double)rotation center:(struct CGPoint { double x0; double x1; })center size:(struct CGSize { double x0; double x1; })size;
@end

#endif /* CHPentagonRecognitionResult_h */
