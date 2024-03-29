//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIShapeEffectStack_h
#define CUIShapeEffectStack_h
@import Foundation;

@interface CUIShapeEffectStack : NSObject {
  /* instance variables */
  BOOL _bypassColorFills;
}

@property (readonly, nonatomic) float shapeOpacity;
@property (readonly, nonatomic) float outputOpacity;
@property (readonly, nonatomic) unsigned long long hueSaturationCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; BOOL x5; BOOL x6; } * hueSaturation;
@property (nonatomic) unsigned long long colorOverlayCount;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; float x2; float x3; float x4; BOOL x5; } * colorOverlay;
@property (nonatomic) unsigned long long innerGradientCount;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } * innerGradient;
@property (nonatomic) unsigned long long innerGlowCount;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; } * innerGlow;
@property (nonatomic) unsigned long long innerShadowCount;
@property (readonly, nonatomic) struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; } * innerShadow;
@property (readonly, nonatomic) unsigned long long outerGlowCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; } * outerGlow;
@property (nonatomic) unsigned long long engraveShadowCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; } * engraveShadow;
@property (readonly, nonatomic) unsigned long long extraShadowCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; } * extraShadow;
@property (readonly, nonatomic) unsigned long long bevelEmbossCount;
@property (readonly, nonatomic) struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; unsigned int x12; } * emboss;
@property (readonly, nonatomic) float scalefactor;
@property (readonly, nonatomic) int renderStrategy;
@property (readonly) unsigned int outputBlendMode;

/* class methods */
+ (id)preferredCIContextOptions;
+ (id)sharedCIContext;
+ (id)offset:(id)offset by:(struct CGPoint { double x0; double x1; })by;
+ (id)adjustOpacity:(id)opacity by:(float)by;
+ (id)pixelZoomed:(id)zoomed scale:(int)scale about:(struct CGPoint { double x0; double x1; })about;
+ (id)unsharpMask:(id)mask radius:(float)radius intensity:(float)intensity;
+ (id)composite:(id)composite over:(id)over;
+ (id)composite:(id)composite into:(id)into;
+ (id)composite:(id)composite outOf:(id)of;
+ (id)composite:(id)composite atop:(id)atop;
+ (id)blend:(id)blend over:(id)over blendKind:(unsigned int)kind;
+ (id)image:(id)image withOpacity:(float)opacity;
+ (id)invert:(id)invert;
+ (id)blur:(id)blur radius:(float)radius;
+ (id)colorWithGray:(float)gray alpha:(float)alpha;
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
+ (id)rectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectangle withRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;
+ (id)gradientWithParameters:(struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } *)parameters inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)shadowFrom:(id)from red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;
+ (id)imageFromBlendWithMask:(id)mask foreground:(id)foreground background:(id)background;
+ (id)innerGlowFrom:(id)from withRadius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;
+ (id)innerShadowFrom:(id)from withOffset:(struct CGPoint { double x0; double x1; })offset radius:(float)radius red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;
+ (id)outerGlowFrom:(id)from withSize:(unsigned int)size spread:(unsigned int)spread red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;
+ (id)outerShadowFrom:(id)from withOffset:(struct CGPoint { double x0; double x1; })offset size:(unsigned int)size spread:(unsigned int)spread red:(float)red green:(float)green blue:(float)blue opacity:(float)opacity;
+ (id)bevelEmbossFrom:(id)from withSize:(unsigned int)size soften:(unsigned int)soften angle:(float)angle altitude:(float)altitude highlightRed:(float)red highlightGreen:(float)green highlightBlue:(float)blue highlightOpacity:(float)opacity shadowRed:(float)red shadowGreen:(float)green shadowBlue:(float)blue shadowOpacity:(float)opacity bevelStyle:(unsigned int)style;
+ (id)hueSaturationFrom:(id)from withCenterAngle:(double)angle width:(double)width tintRed:(float)red tintGreen:(float)green tintBlue:(float)blue;
+ (id)shapeEffectSingleBlurFrom:(id)from withInteriorFill:(id)fill offset:(struct CGPoint { double x0; double x1; })offset blurSize:(float)size innerGlowRed:(float)red innerGlowGreen:(float)green innerGlowBlue:(float)blue innerGlowOpacity:(float)opacity innerShadowRed:(float)red innerShadowGreen:(float)green innerShadowBlue:(float)blue innerShadowOpacity:(float)opacity outerGlowRed:(float)red outerGlowGreen:(float)green outerGlowBlue:(float)blue outerGlowOpacity:(float)opacity outerShadowRed:(float)red outerShadowGreen:(float)green outerShadowBlue:(float)blue outerShadowOpacity:(float)opacity hasInsideShadowBlur:(BOOL)blur hasOutsideShadowBlur:(BOOL)blur;
+ (struct CGColor *)newColorByAdjustingLightnessOfColor:(struct CGColor *)color darker:(BOOL)darker;

/* instance methods */
- (void)dealloc;
- (void)_cleanupEffectSettings;
- (void)_setShapeOpacityFromPreset:(id)preset atIndex:(unsigned int)index;
- (void)_setOutputOpacityFromPreset:(id)preset atIndex:(unsigned int)index;
- (void)_setColorFillAtIndex:(unsigned long long)index FromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasColorOverlay;
- (float)colorOverlayOpacity;
- (void)_setInteriorGradientAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasInnerGradient;
- (float)innerGradientOpacity;
- (void)_setInnerGlowAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasInnerGlow;
- (void)_setInnerShadowAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasInnerShadow;
- (void)_setOuterGlowAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasOuterGlow;
- (void)_setEngraveShadowAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasEngraveShadow;
- (void)_setExtraShadowAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasExtraShadow;
- (void)_setBevelEmbossAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasBevelEmboss;
- (BOOL)hasEffects;
- (void)_setHueSaturationAtIndex:(unsigned long long)index fromPreset:(id)preset index:(unsigned int)index;
- (BOOL)hasHueSaturation;
- (BOOL)_precompositeColorOverlayInnerGradient;
- (void)_updateRenderStrategyFromEffect:(unsigned int)effect;
- (id)initWithEffectPreset:(id)preset;
- (id)effectPreset;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)image withInteriorFill:(id)fill;
- (id)imageWithInnerGlowOfImage:(id)image effect:(struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; })effect;
- (id)imageWithInnerShadowOfImage:(id)image effect:(struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })effect;
- (id)image:(id)image withAdjustedOpacity:(float)opacity;
- (id)imageWithColorOverlayOfImage:(id)image effect:(struct { unsigned int x0; float x1; float x2; float x3; float x4; BOOL x5; })effect;
- (id)imageWithHueSaturationOfImage:(id)image effect:(struct { float x0; float x1; float x2; float x3; float x4; BOOL x5; BOOL x6; })effect;
- (id)imageWithInteriorGradientFillOfImage:(id)image effect:(struct { unsigned int x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; })effect;
- (id)imageWithOuterGlowOfImage:(id)image effect:(struct { float x0; float x1; float x2; float x3; float x4; float x5; })effect;
- (id)imageWithEngraveShadowOfImage:(id)image effect:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })effect;
- (id)imageWithExtraShadowOfImage:(id)image effect:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CGPoint { double x0; double x1; } x8; })effect;
- (id)imageWithBevelEmbossOfImage:(id)image effect:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; unsigned int x12; })effect;
- (int)cgBlendModeForOutputBlending;
- (void)updateOutputBlendingWithInteriorFillHeuristic;
- (void)scaleEffectParametersBy:(double)by;
- (void)_normalizeEffectParameters;
- (BOOL)anyEffectAllowsTintSubstitution;
- (void)applyCustomForegroundColor:(struct CGColor *)color;
- (void)applyCustomForegroundColor:(struct CGColor *)color tintEffectColors:(BOOL)colors;
- (void)scaleBrightnessOfEffectColorsByAmount:(double)amount onlyTintableColors:(BOOL)colors;
- (void)adjustEffectColorsToTemperature:(int)temperature onlyTintableColors:(BOOL)colors;
- (id)standardEffectCompositeWithShapeImage:(id)image blendOntoImage:(BOOL)image;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)image;
- (id)compositeEffectStackWithShapeImage:(id)image withScale:(double)scale blendOntoImage:(BOOL)image;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectPaddingWithScale:(double)scale;
- (struct { double x0; double x1; double x2; double x3; })effectInsetsWithScale:(double)scale;
- (id)processedImageFromImage:(id)image;
- (id)processedImageFromImage:(id)image withScale:(double)scale;
- (id)processedImageFromShapeImage:(id)image;
- (id)processedImageFromShapeImage:(id)image withScale:(double)scale;
- (id)processedImageFromShapeImage:(id)image withScale:(double)scale invertShadows:(BOOL)shadows;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)cgimage withScale:(double)scale;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)cgimage withScale:(double)scale cache:(BOOL)cache;
- (struct CGImage *)_newFlattenedImageFromShapeCGImage:(struct CGImage *)cgimage withScale:(double)scale ciContext:(id)context blendOverImage:(BOOL)image;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)cgimage withScale:(double)scale ciContext:(id)context;
- (struct CGImage *)newFlattenedImageFromCGImage:(struct CGImage *)cgimage withScale:(double)scale ciContext:(id)context;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)cgimage;
- (id)processedImageFromShapePath:(struct CGPath *)path inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGColor *)newColorByProcessingColor:(struct CGColor *)color;
- (BOOL)expressableByColorFillCheckingOutputBlending:(BOOL)blending;
- (void)setBypassColorFills:(BOOL)fills;
- (id)cacheKey;
@end

#endif /* CUIShapeEffectStack_h */
