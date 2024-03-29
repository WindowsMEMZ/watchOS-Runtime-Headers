//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRenderFactoryEmoji_iPad_h
#define UIKBRenderFactoryEmoji_iPad_h
@import Foundation;

#include "UIKBRenderFactoryEmoji_iPhone.h"

@interface UIKBRenderFactoryEmoji_iPad : UIKBRenderFactoryEmoji_iPhone
/* instance methods */
- (long long)assetIdiom;
- (id)lightKeycapsFontName;
- (id)thinKeycapsFontName;
- (double)keyCornerRadius;
- (struct CGPoint { double x0; double x1; })emojiPopupTextOffset;
- (double)symbolImageControlKeyFontSize;
- (double)emojiInternationalKeySize;
- (struct CGPoint { double x0; double x1; })emojiInternationalKeyOffset;
- (id)messagesWriteboardKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)variants;
- (void)_customizeTraits:(id)traits forPopupForKey:(id)key withRenderingContext:(id)context keycapsFontName:(id)name;
- (id)_traitsForKey:(id)key onKeyplane:(id)keyplane;
@end

#endif /* UIKBRenderFactoryEmoji_iPad_h */
