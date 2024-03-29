//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBPanGestureVelocitySample_h
#define UIKBPanGestureVelocitySample_h
@import Foundation;

@interface UIKBPanGestureVelocitySample : NSObject

@property struct CGPoint { double x0; double x1; } start;
@property struct CGPoint { double x0; double x1; } end;
@property double dt;
@property double force;
@property double majorRadius;

/* instance methods */
- (void)pullValuesFrom:(id)from;
- (void)resetValues;
@end

#endif /* UIKBPanGestureVelocitySample_h */
