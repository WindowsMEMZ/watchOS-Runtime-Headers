//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITextMagnifierCaret_h
#define UITextMagnifierCaret_h
@import Foundation;

#include "UITextMagnifier.h"

@interface UITextMagnifierCaret : UITextMagnifier {
  /* instance variables */
  double _yOffset;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } offset;

/* class methods */
+ (id)sharedCaretMagnifier;
+ (id)activeCaretMagnifier;
+ (Class)renderClass;

/* instance methods */
- (id)initWithFrame;
- (struct CGPoint { double x0; double x1; })animationPoint;
- (void)setAnimationPoint:(struct CGPoint { double x0; double x1; })point;
- (BOOL)terminalPointPlacedCarefully;
- (void)zoomUpAnimation;
- (void)zoomDownAnimation;
- (void)remove;
- (void)updateFrameAndOffset;
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(struct CGPoint { double x0; double x1; })point offset:(struct CGPoint { double x0; double x1; })offset animated:(BOOL)animated;
- (BOOL)isHorizontal;
- (double)offsetFromMagnificationPoint;
@end

#endif /* UITextMagnifierCaret_h */
