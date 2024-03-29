//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDeepPressAnalyzer_h
#define _UIDeepPressAnalyzer_h
@import Foundation;

#include "_UIVelocityIntegrator.h"

@interface _UIDeepPressAnalyzer : NSObject

@property (retain, nonatomic) _UIVelocityIntegrator *touchForceIntegrator;
@property (retain, nonatomic) _UIVelocityIntegrator *locationIntegrator;
@property (readonly, nonatomic) BOOL deepPressLikely;

/* instance methods */
- (id)init;
- (void)analyzeTouches:(id)touches;
- (void)analyzeTouchForce:(double)force centroidAtLocation:(struct CGPoint { double x0; double x1; })location;
- (BOOL)isDeepPressLikely;
- (double)_touchForceFromTouches:(id)touches;
@end

#endif /* _UIDeepPressAnalyzer_h */
