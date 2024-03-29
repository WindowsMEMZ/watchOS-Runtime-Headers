//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISAnimatableBlurLabel_h
#define CUISAnimatableBlurLabel_h
@import Foundation;

#include "UILabel.h"

@interface CUISAnimatableBlurLabel : UILabel

@property (nonatomic) double blurRadius;
@property (nonatomic) BOOL blurEnabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)_setupBlur;
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;
- (BOOL)isBlurEnabled;
@end

#endif /* CUISAnimatableBlurLabel_h */
