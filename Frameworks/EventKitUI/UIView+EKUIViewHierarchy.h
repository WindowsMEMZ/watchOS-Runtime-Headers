//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef UIView_EKUIViewHierarchy_h
#define UIView_EKUIViewHierarchy_h
@import Foundation;

@interface UIView (EKUIViewHierarchy) <EKUIViewHierarchy>
/* instance methods */
- (struct CGSize { double x0; double x1; })ekui_size;
- (double)ekui_width;
- (double)ekui_height;
- (id)ekui_rootViewHierarchy;
- (long long)ekui_horizontalSizeClass;
- (long long)ekui_verticalSizeClass;
- (long long)ekui_interfaceOrientation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })ekui_affineTransform;
- (id)ekui_tintColor;
@end

#endif /* UIView_EKUIViewHierarchy_h */
