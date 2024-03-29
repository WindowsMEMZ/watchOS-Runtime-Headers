//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISLongLookLayout_h
#define CUISLongLookLayout_h
@import Foundation;

@interface CUISLongLookLayout : NSObject
/* class methods */
+ (void)layoutLongLook:(id)look toSpecifications:(id)specifications longLookLayoutGuideHost:(id)host supportsCoordinatedPlatters:(BOOL)platters;
+ (double)_calculateTopRightViewTopOffset:(BOOL)offset;
+ (void)layoutLongLookIconLayoutGuides:(id)guides toSpecifications:(id)specifications longLook:(id)look;
@end

#endif /* CUISLongLookLayout_h */
