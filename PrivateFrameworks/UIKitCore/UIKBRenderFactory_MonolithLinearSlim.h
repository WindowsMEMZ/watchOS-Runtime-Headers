//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactory_MonolithLinearSlim_h
#define UIKBRenderFactory_MonolithLinearSlim_h
@import Foundation;

#include "UIKBRenderFactory_MonolithLinear.h"

@interface UIKBRenderFactory_MonolithLinearSlim : UIKBRenderFactory_MonolithLinear
/* instance methods */
- (double)variantKeyPaddingH;
- (double)variantKeyPaddingV;
- (id)variantTextColor;
- (id)variantPillBackgroundColor;
- (id)highlightedVariantPillBackgroundColor;
- (id)highlightedVariantLayeredBackgroundColor;
- (struct CGPoint { double x0; double x1; })_textOffsetForKey:(id)key;
- (void)configureCornersOnGeometry:(id)geometry forKey:(id)key;
- (void)configureGeometry:(id)geometry forControlKey:(id)key;
- (void)configureSymbolStyle:(id)style forControlKey:(id)key;
- (id)_enabledTraitsForControlKey:(id)key;
- (id)_highlightedTraitsForControlKey:(id)key;
- (id)_variantTraitsForControlKey:(id)key onKeyplane:(id)keyplane;
@end

#endif /* UIKBRenderFactory_MonolithLinearSlim_h */
