//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 221.0.4.0.0
//
#ifndef SCRCPhotoEvaluatorResultColor_h
#define SCRCPhotoEvaluatorResultColor_h
@import Foundation;

#include "SCRCPhotoEvaluatorResult.h"

@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) double redLevel;
@property (readonly, nonatomic) double blueLevel;
@property (readonly, nonatomic) double greenLevel;

/* instance methods */
- (id)initWithRedLevel:(double)level blueLevel:(double)level greenLevel:(double)level;
- (id)humanReadableResult;
@end

#endif /* SCRCPhotoEvaluatorResultColor_h */
