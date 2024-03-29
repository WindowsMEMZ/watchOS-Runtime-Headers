//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLShapeView_h
#define CSLShapeView_h
@import Foundation;

#include "UIView.h"

@interface CSLShapeView : UIView
/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)setPath:(id)path;
- (void)setFillColor:(id)color;
- (void)setFillRule:(long long)rule;
- (id)_shapeLayer;
@end

#endif /* CSLShapeView_h */
