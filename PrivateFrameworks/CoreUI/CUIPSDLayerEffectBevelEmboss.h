//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef CUIPSDLayerEffectBevelEmboss_h
#define CUIPSDLayerEffectBevelEmboss_h
@import Foundation;

#include "CUIPSDLayerEffectComponent.h"
#include "CUIColor.h"

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent

@property unsigned long long blurSize;
@property unsigned long long softenSize;
@property short angle;
@property unsigned long long altitude;
@property unsigned int direction;
@property int highlightBlendMode;
@property (retain) CUIColor *highlightColor;
@property double highlightOpacity;
@property int shadowBlendMode;
@property (retain) CUIColor *shadowColor;
@property double shadowOpacity;

/* instance methods */
- (BOOL)updateLayerEffectPreset:(id)preset error:(id *)error;
- (id)initWithEffectFromPreset:(id)preset atIndex:(unsigned int)index;
- (id)init;
- (unsigned int)effectType;
- (id)description;
- (void)dealloc;
@end

#endif /* CUIPSDLayerEffectBevelEmboss_h */
