//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef UIFont_UIFontSilouettes_h
#define UIFont_UIFontSilouettes_h
@import Foundation;

@interface UIFont (UIFontSilouettes)
/* class methods */
+ (id)highLegibilityFontVariantForFont:(id)font;
+ (double)defaultPUICStatusBarFontPointSize;
+ (double)defaultPUICStatusBarFontPointSizeWithOptions:(id)options;
+ (double)defaultPUICStatusBarFontBaseLine;
+ (double)defaultPUICStatusBarFontBaseLineWithOptions:(id)options;
+ (double)defaultPUICStatusBarFontInset;
+ (double)defaultPUICStatusBarFontInsetWithOptions:(id)options;
+ (id)defaultPUICStatusBarFont;
+ (id)defaultPUICStatusBarFontWithOptions:(id)options;

/* instance methods */
- (id)fontWithWeight:(double)weight;
- (id)PUICFontWithCapitalForms;
- (id)PUICFontWithLocalizedSmallCaps;
- (id)PUICFontWithLocalizedLowerCaseSmallCaps;
- (id)PUICFontWithMonospacedNumbers;
- (id)PUICFontByApplyingFeatureSettings:(id)settings;
- (id)PUICFontScaledWithTextStyle:(id)style;
- (id)fontWithSilhouette:(unsigned long long)silhouette;
@end

#endif /* UIFont_UIFontSilouettes_h */
