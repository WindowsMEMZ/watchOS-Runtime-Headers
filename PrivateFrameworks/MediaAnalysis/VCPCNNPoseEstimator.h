//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPCNNPoseEstimator_h
#define VCPCNNPoseEstimator_h
@import Foundation;

@interface VCPCNNPoseEstimator : NSObject
/* class methods */
+ (id)estimator;

/* instance methods */
- (float *)getInputBuffer;
- (int)computePoseScore:(float *)score;
- (int)detectPoseForFace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })face inBuffer:(struct __CVBuffer *)buffer yaw:(long long *)yaw;
@end

#endif /* VCPCNNPoseEstimator_h */
