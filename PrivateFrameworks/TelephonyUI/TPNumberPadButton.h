//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1430.300.81.0.0
//
#ifndef TPNumberPadButton_h
#define TPNumberPadButton_h
@import Foundation;

#include "UIControl.h"
#include "TPNumberPadButtonProtocol-Protocol.h"
#include "TPRevealingRingView.h"

@class CALayer, NSString, UIColor, UIView, UIVisualEffectView;

@interface TPNumberPadButton : UIControl<TPNumberPadButtonProtocol>

@property (retain) CALayer *glyphLayer;
@property (retain) CALayer *highlightedGlyphLayer;
@property (retain) UIView *circleView;
@property (readonly, nonatomic) UIColor *buttonColor;
@property (readonly, nonatomic) UIColor *highlightedButtonColor;
@property (readonly, nonatomic) TPRevealingRingView *revealingRingView;
@property (retain, nonatomic) UIVisualEffectView *backDropVisualEffectView;
@property (retain, nonatomic) UIColor *color;
@property long long character;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })circleBounds;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })paddingOutsideRing;
+ (id)imageForCharacter:(long long)character;
+ (id)imageForCharacter:(long long)character highlighted:(BOOL)highlighted;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (BOOL)usesButtonSaturationFilters;
+ (BOOL)usesButtonColorMatrixFilters;
+ (BOOL)usesBoldAssets;
+ (BOOL)isCarPlay;
+ (id)localizedLettersForCharacter:(long long)character;
+ (id)imageForCharacter:(long long)character highlighted:(BOOL)highlighted whiteVersion:(BOOL)version;
+ (void)loadNumberPadKeyPrototypeView;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (void)resetLocale;
+ (double)verticalPadding;
+ (double)horizontalPadding;
+ (double)unhighlightedCircleViewAlpha;
+ (double)highlightedCircleViewAlpha;
+ (id)disabledImageForCharacter:(long long)character;

/* instance methods */
- (id)initForCharacter:(long long)character;
- (id)initForCharacter:(long long)character style:(long long)style;
- (void)reloadImagesForCurrentCharacter;
- (void)setGreyedOut:(BOOL)out;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)highlightCircleView:(BOOL)view animated:(BOOL)animated;
- (void)setHighlighted:(BOOL)highlighted;
- (id)defaultColor;
- (void)touchDown;
- (void)touchUp;
- (void)touchCancelled;
@end

#endif /* TPNumberPadButton_h */
