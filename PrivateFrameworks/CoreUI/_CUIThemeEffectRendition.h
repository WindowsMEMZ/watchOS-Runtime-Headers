//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 866.4.0.0.0
//
#ifndef _CUIThemeEffectRendition_h
#define _CUIThemeEffectRendition_h
@import Foundation;

#include "CUIThemeRendition.h"
#include "CUIShapeEffectPreset.h"

@interface _CUIThemeEffectRendition : CUIThemeRendition {
  /* instance variables */
  const struct _cuieffectdata { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; struct _cuieffectlist { unsigned int x0; unsigned int x1[0] } x4; } * effectData;
  CUIShapeEffectPreset *_effectPreset;
  float _minimumShadowSpread;
}

/* instance methods */
- (id)_initWithCSIHeader:(const struct _csiheader { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7 :4; unsigned int x8 :28; struct _csimetadata { unsigned int x0; unsigned short x1; unsigned short x2; char x3[128] } x9; unsigned int x10; struct _csibitmaplist { unsigned int x0; unsigned int x1[0] } x11; } *)csiheader version:(unsigned int)version;
- (void)dealloc;
- (id)effectPreset;
- (void)_setStructuredThemeStore:(id)store;
@end

#endif /* _CUIThemeEffectRendition_h */
