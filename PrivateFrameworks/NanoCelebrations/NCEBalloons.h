//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 72.0.0.0.0
//
#ifndef NCEBalloons_h
#define NCEBalloons_h
@import Foundation;

#include "UIView.h"

@class NSDictionary;

@interface NCEBalloons : UIView {
  /* instance variables */
  NSDictionary *_balloonDesc;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (double)animateBalloonLayer:(id)layer withIndex:(unsigned long long)index;
- (id)assetWithName:(id)name;
- (BOOL)_useFeatherMask;
- (void)startAnimation:(id /* block */)animation;
- (void)stopAnimation;
@end

#endif /* NCEBalloons_h */
