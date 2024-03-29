//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 342.208.0.0.0
//
#ifndef SCNNode_AVTExtension_h
#define SCNNode_AVTExtension_h
@import Foundation;

@interface SCNNode (AVTExtension)
/* instance methods */
- (void)avt_enableSubdivisionOnHierarchyWithQuality:(unsigned long long)quality animoji:(BOOL)animoji;
- (void)avt_setGeometryPrimitiveRangesFromFaceIndexRanges:(id)ranges;
@end

#endif /* SCNNode_AVTExtension_h */
