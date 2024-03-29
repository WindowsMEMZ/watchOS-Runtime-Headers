//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIIdleModeLayoutAttributes_h
#define _UIIdleModeLayoutAttributes_h
@import Foundation;

@interface _UIIdleModeLayoutAttributes : NSObject

@property (nonatomic) struct CGPoint { double x0; double x1; } centerOffset;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic) double alphaOffset;
@property (nonatomic) BOOL wantsDimmingOverlay;

/* instance methods */
- (id)init;
@end

#endif /* _UIIdleModeLayoutAttributes_h */
