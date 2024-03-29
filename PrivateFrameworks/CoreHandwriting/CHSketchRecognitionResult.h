//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHSketchRecognitionResult_h
#define CHSketchRecognitionResult_h
@import Foundation;

#include "CHRecognitionResult.h"

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult

@property (readonly) NSString *string;
@property (readonly) double rotation;

/* instance methods */
- (id)initWithString:(id)string score:(double)score rotation:(double)rotation;
@end

#endif /* CHSketchRecognitionResult_h */
