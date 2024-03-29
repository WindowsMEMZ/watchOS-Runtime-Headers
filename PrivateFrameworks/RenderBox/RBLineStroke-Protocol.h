//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBLineStroke_Protocol_h
#define RBLineStroke_Protocol_h
@import Foundation;

@protocol RBLineStroke <RBStroke>

@property (readonly, nonatomic) int lineCap;
@property (readonly, nonatomic) int lineJoin;
@property (readonly, nonatomic) float miterLimit;
@property (readonly, nonatomic) float maxLineWidth;

@end

#endif /* RBLineStroke_Protocol_h */
