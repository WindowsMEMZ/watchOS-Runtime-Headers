//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIContentUnavailableConstants_Watch_h
#define UIContentUnavailableConstants_Watch_h
@import Foundation;

#include "UIContentUnavailableConstants_Phone.h"

@interface UIContentUnavailableConstants_Watch : UIContentUnavailableConstants_Phone
/* class methods */
+ (id)sharedConstants;

/* instance methods */
- (id)defaultEmptyImageSymbolConfigurationForTraitCollection:(id)collection;
- (id)defaultLoadingImageSymbolConfigurationForTraitCollection:(id)collection;
- (id)defaultEmptyImageTintColor;
- (id)defaultLoadingImageTintColor;
- (id)defaultEmptyTextFontForTraitCollection:(id)collection;
- (id)defaultLoadingTextFontForTraitCollection:(id)collection;
- (id)defaultEmptyTextColorForTraitCollection:(id)collection;
- (id)defaultLoadingTextColor;
- (id)defaultEmptySecondaryTextFontForTraitCollection:(id)collection;
- (id)defaultSecondaryTextColor;
- (id)defaultButtonConfigurationForTraitCollection:(id)collection;
- (BOOL)prefersSideBySideButtonAndSecondaryButton;
- (double)defaultEmptyImageToTextPaddingForTraitCollection:(id)collection;
- (double)defaultLoadingImageToTextPaddingForTraitCollection:(id)collection;
- (double)defaultEmptyTextToSecondaryTextPaddingForTraitCollection:(id)collection;
- (double)defaultEmptyTextToButtonPaddingForTraitCollection:(id)collection;
- (double)defaultEmptyButtonToSecondaryButtonPaddingForTraitCollection:(id)collection;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })defaultDirectionalLayoutMarginsForTraitCollection:(id)collection;
- (long long)defaultUserInterfaceRenderingMode;
@end

#endif /* UIContentUnavailableConstants_Watch_h */
