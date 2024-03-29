//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLSupportVectorRegressor_h
#define MLSupportVectorRegressor_h
@import Foundation;

#include "MLRegressor.h"
#include "MLSVREngine.h"

@interface MLSupportVectorRegressor : MLRegressor

@property (retain) MLSVREngine *engine;

/* instance methods */
- (id)initWithEngine:(id)engine description:(id)description configuration:(id)configuration error:(id *)error;
- (id)regress:(id)regress options:(id)options error:(id *)error;
@end

#endif /* MLSupportVectorRegressor_h */
