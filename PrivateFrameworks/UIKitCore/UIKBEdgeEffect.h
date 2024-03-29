//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBEdgeEffect_h
#define UIKBEdgeEffect_h
@import Foundation;

#include "UIKBGradient.h"
#include "UIKBRenderEffect-Protocol.h"

@class NSString;

@interface UIKBEdgeEffect : NSObject<UIKBRenderEffect> {
  /* instance variables */
  NSString *_colorName;
}

@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } insets;
@property (retain, nonatomic) UIKBGradient *gradient;
@property (nonatomic) double opacity;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (nonatomic) double weight;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)effectWithColor:(id)color edges:(unsigned long long)edges inset:(double)inset weight:(double)weight;
+ (id)effectWithColor:(id)color edges:(unsigned long long)edges insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets weight:(double)weight;

/* instance methods */
- (void)renderEffectWithRenderer:(id)renderer traits:(id)traits;
- (id)initWithColor:(id)color edges:(unsigned long long)edges insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets weight:(double)weight;
- (BOOL)isEqual:(id)equal;
- (struct CGColor *)CGColor;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* UIKBEdgeEffect_h */
