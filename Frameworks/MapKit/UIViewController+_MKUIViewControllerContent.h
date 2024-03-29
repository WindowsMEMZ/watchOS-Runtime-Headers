//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef UIViewController__MKUIViewControllerContent_h
#define UIViewController__MKUIViewControllerContent_h
@import Foundation;

@interface UIViewController (_MKUIViewControllerContent) <MKInfoCardThemeListener>
/* instance methods */
- (id)mk_theme;
- (void)infoCardThemeChanged;
- (id)accessibilityIdentifier;
- (void)setAccessibilityIdentifier:(id)identifier;
- (double)contentAlpha;
- (void)setContentAlpha:(double)alpha;
- (long long)contentVisibility;
- (void)setContentVisibility:(long long)visibility;
@end

#endif /* UIViewController__MKUIViewControllerContent_h */
