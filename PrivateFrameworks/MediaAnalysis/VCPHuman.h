//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPHuman_h
#define VCPHuman_h
@import Foundation;

@interface VCPHuman : NSObject

@property unsigned long long flags;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property float confidence;
@property int humanID;

/* class methods */
+ (unsigned long long)flagsFromKeypoints:(id)keypoints withMinConfidence:(float)confidence;

/* instance methods */
- (id)init;
@end

#endif /* VCPHuman_h */
