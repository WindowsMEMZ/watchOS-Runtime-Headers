//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICCheckGlyphSpringAnimationFactory_h
#define _SUICCheckGlyphSpringAnimationFactory_h
@import Foundation;

@class CAMediaTimingFunction;

@interface _SUICCheckGlyphSpringAnimationFactory : NSObject {
  /* instance variables */
  BOOL _needsDurationUpdate;
}

@property (readonly, nonatomic) double duration;
@property (nonatomic) double mass;
@property (nonatomic) double stiffness;
@property (nonatomic) double damping;
@property (nonatomic) double velocity;
@property (retain, nonatomic) CAMediaTimingFunction *timing;

/* class methods */
+ (id)defaultTimingFunction;
+ (double)defaultDuration;
+ (id)springAnimationWithKeyPath:(id)path;
+ (id)springAnimationWithKeyPath:(id)path velocity:(double)velocity;

/* instance methods */
- (id)init;
- (id)initWithVelocity:(double)velocity;
- (id)initWithVelocity:(double)velocity timing:(id)timing;
- (id)initWithMass:(double)mass stiffness:(double)stiffness damping:(double)damping velocity:(double)velocity;
- (id)initWithMass:(double)mass stiffness:(double)stiffness damping:(double)damping velocity:(double)velocity timing:(id)timing;
- (void)dealloc;
- (id)springAnimationWithKeyPath:(id)path;
- (id)_springAnimationWithKeyPath:(id)path;
- (id)_timingFunctionForAnimation;
- (void)_updateDurationIfNecessary;
@end

#endif /* _SUICCheckGlyphSpringAnimationFactory_h */
