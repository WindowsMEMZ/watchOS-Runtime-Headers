//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 135.6.0.0.0
//
#ifndef CAMediaTimingFunction_RCPEasingFunction_h
#define CAMediaTimingFunction_RCPEasingFunction_h
@import Foundation;

@interface CAMediaTimingFunction (RCPEasingFunction)
/* instance methods */
- (struct CGPoint { double x0; double x1; })rcp_solveForStart:(struct CGPoint { double x0; double x1; })start end:(struct CGPoint { double x0; double x1; })end at:(float)at;
- (struct CGVector { double x0; double x1; })rcp_solveForDelta:(struct CGVector { double x0; double x1; })delta withSteps:(unsigned long long)steps step:(unsigned long long)step;
- (id)rcp_functionWithLinearEnd;
@end

#endif /* CAMediaTimingFunction_RCPEasingFunction_h */
