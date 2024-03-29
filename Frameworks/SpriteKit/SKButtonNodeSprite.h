//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 50.0.6.0.0
//
#ifndef SKButtonNodeSprite_h
#define SKButtonNodeSprite_h
@import Foundation;

#include "SKSpriteNode.h"
#include "SKAction.h"

@protocol SKButtonNodeSpriteDelegate;

@interface SKButtonNodeSprite : SKSpriteNode {
  /* instance variables */
  id /* block */ _downBlock;
  id /* block */ _upBlock;
  id /* block */ _upInsideBlock;
  int _touches;
}

@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> *delegate;
@property (retain, nonatomic) SKAction *downAction;
@property (retain, nonatomic) SKAction *upAction;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)buttonWithFontNamed:(id)named;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchBegan:(unsigned long long)began location:(struct CGPoint { double x0; double x1; })location;
- (void)touchMoved:(unsigned long long)moved location:(struct CGPoint { double x0; double x1; })location;
- (void)touchEnded:(unsigned long long)ended location:(struct CGPoint { double x0; double x1; })location;
- (void)onTouchUpInside:(id /* block */)inside;
- (void)onTouchUp:(id /* block */)up;
- (void)onTouchDownInside:(id /* block */)inside;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* SKButtonNodeSprite_h */
