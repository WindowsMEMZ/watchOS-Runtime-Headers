//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIHIDPath_h
#define _UIHIDPath_h
@import Foundation;

@class NSNumber;

@interface _UIHIDPath : NSObject

@property (readonly, nonatomic) NSNumber *pathId;
@property (readonly, nonatomic) unsigned int identity;
@property (readonly, nonatomic) double force;
@property (readonly, nonatomic) double minorRadius;
@property (readonly, nonatomic) double majorRadius;
@property (readonly, nonatomic) double quality;
@property (readonly, nonatomic) double density;
@property (readonly, nonatomic) double irregularity;
@property (readonly, nonatomic) double twist;
@property (readonly, nonatomic) long long generationCount;
@property (readonly, nonatomic) BOOL touching;
@property (nonatomic) struct CGPoint { double x0; double x1; } position;
@property (retain, nonatomic) NSNumber *overridePathId;
@property (nonatomic) long long deliveryPhase;

/* instance methods */
- (id)init;
- (void)updateWithHIDEvent:(struct __IOHIDEvent *)hidevent;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (BOOL)isTouching;
@end

#endif /* _UIHIDPath_h */
