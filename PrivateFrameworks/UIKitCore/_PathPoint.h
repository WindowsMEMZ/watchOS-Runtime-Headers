//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _PathPoint_h
#define _PathPoint_h
@import Foundation;

@interface _PathPoint : NSObject

@property (nonatomic) BOOL sentinelPoint;
@property (nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) double force;
@property (nonatomic) double relativeTime;
@property (nonatomic) double absoluteTime;
@property (nonatomic) double decay;
@property (nonatomic) double length;

/* instance methods */
- (id)description;
- (BOOL)isSentinelPoint;
@end

#endif /* _PathPoint_h */
