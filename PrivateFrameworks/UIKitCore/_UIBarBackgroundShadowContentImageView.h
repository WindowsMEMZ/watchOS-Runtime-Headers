//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIBarBackgroundShadowContentImageView_h
#define _UIBarBackgroundShadowContentImageView_h
@import Foundation;

#include "_UIVisualEffectImageView.h"

@interface _UIBarBackgroundShadowContentImageView : _UIVisualEffectImageView

@property (nonatomic) BOOL applyTintColorToBackgroundColor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_applyTintColorToBackgroundIfNecessary;
- (void)tintColorDidChange;
@end

#endif /* _UIBarBackgroundShadowContentImageView_h */
