//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef NSString_Emoji_h
#define NSString_Emoji_h
@import Foundation;

@interface NSString (Emoji)
/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_integralRectOfAttributedString:(id)string;
+ (void)applyKerning:(double)kerning whitespaceKerning:(double)kerning toAttributedString:(id)string;

/* instance methods */
- (id)_dynamicallySizeUsingParams:(id)params maximumWidth:(double)width;
- (BOOL)_isEntirelyCharactersAndPunctuationInUScript:(int)uscript;
- (BOOL)_isEntirelyArabicCharacters;
- (BOOL)_isEntirelyCharactersInScript:(long long)script;
- (id)_arabicAdjustedFont:(id)font;
- (id)_arabicAdjustedFont:(id)font withPointAdjustment:(double)adjustment;
- (id)_arabicAdjustedFont:(id)font ignoringContent:(BOOL)content;
- (id)_arabicAdjustedFont:(id)font withPointAdjustment:(double)adjustment ignoringContent:(BOOL)content;
- (id)_adjustedFontForScripts:(long long)scripts forFont:(id)font;
- (id)_adjustedFontForScripts:(long long)scripts forFont:(id)font withPointAdjustment:(double)adjustment;
- (id)_adjustedFontForScripts:(long long)scripts forFont:(id)font ignoringContent:(BOOL)content;
- (BOOL)_isInScript:(long long)script useLocaleOnly:(BOOL)only;
- (id)_adjustedFontForScripts:(long long)scripts forFont:(id)font withPointAdjustment:(double)adjustment ignoringContent:(BOOL)content;
- (unsigned long long)_composedCharacterLength;
- (BOOL)__puic_containsOnlyEmojiAndWhitespace;
@end

#endif /* NSString_Emoji_h */
