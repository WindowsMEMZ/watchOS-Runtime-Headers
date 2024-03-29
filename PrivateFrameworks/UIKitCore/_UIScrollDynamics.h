//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIScrollDynamics_h
#define _UIScrollDynamics_h
@import Foundation;

@interface _UIScrollDynamics : NSObject

@property (nonatomic) BOOL shouldRoundCalculations;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tolerance;
@property (nonatomic) struct CGPoint { double x0; double x1; } decelerationTarget;
@property (nonatomic) struct CGPoint { double x0; double x1; } initialContentOffset;
@property (nonatomic) struct CGVector { double x0; double x1; } initialVelocity;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOrigin;
@property (nonatomic) struct CGSize { double x0; double x1; } viewSize;
@property (readonly, nonatomic) double durationUntilStop;

/* instance methods */
- (id)init;
- (id)initWithInitialContentOffset:(struct CGPoint { double x0; double x1; })offset velocity:(struct CGVector { double x0; double x1; })velocity contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame viewSize:(struct CGSize { double x0; double x1; })size screenScale:(double)scale;
- (double)speedAfterDuration:(double)duration;
- (struct CGVector { double x0; double x1; })velocityAfterDuration:(double)duration;
- (struct CGPoint { double x0; double x1; })positionAfterDuration:(double)duration;
- (BOOL)isRubberBandingAfterDuration:(double)duration;
- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (void)recalculateForDecelerationTarget:(struct CGPoint { double x0; double x1; })target;
@end

#endif /* _UIScrollDynamics_h */
