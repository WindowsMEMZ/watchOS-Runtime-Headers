//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKVariableBlurView_h
#define MKVariableBlurView_h
@import Foundation;

#include "UIView.h"

@interface MKVariableBlurView : UIView
/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithRadius:(double)radius frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGImage *)maskImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })image;
- (id)backdropLayer;
@end

#endif /* MKVariableBlurView_h */
