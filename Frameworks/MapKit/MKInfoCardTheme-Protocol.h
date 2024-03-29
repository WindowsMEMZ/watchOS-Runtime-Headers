//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKInfoCardTheme_Protocol_h
#define MKInfoCardTheme_Protocol_h
@import Foundation;

@protocol MKInfoCardTheme <NSObject>

@property (readonly, nonatomic) unsigned long long themeType;
@property (readonly, nonatomic) NSString *javaScriptName;
@property (readonly, nonatomic) BOOL isDarkTheme;
@property (readonly, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIColor *lightTextColor;
@property (readonly, nonatomic) UIColor *tertiaryTextColor;
@property (readonly, nonatomic) UIColor *tintColor;
@property (readonly, nonatomic) UIColor *highlightedTintColor;
@property (readonly, nonatomic) UIColor *separatorLineColor;
@property (readonly, nonatomic) UIColor *rowColor;
@property (readonly, nonatomic) UIColor *selectedRowColor;
@property (readonly, nonatomic) UIColor *disabledActionRowTextColor;
@property (readonly, nonatomic) UIColor *disabledActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundColor;
@property (readonly, nonatomic) UIColor *normalActionRowBackgroundPressedColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonNormalColor;
@property (readonly, nonatomic) UIColor *headerPrimaryButtonHighlightedColor;
@property (readonly, nonatomic) UIColor *transitOntimeTextColor;
@property (readonly, nonatomic) UIColor *transitDelayedTextColor;
@property (readonly, nonatomic) UIColor *transitChevronBackgroundColor;
@property (readonly, nonatomic) UIColor *normalBackgroundColor;
@property (readonly, nonatomic) UIColor *buttonNormalColor;
@property (readonly, nonatomic) UIColor *buttonHighlightedColor;
@property (readonly, nonatomic) UIColor *ratingBarStartColor;
@property (readonly, nonatomic) UIColor *ratingBarEndColor;
@property (readonly, nonatomic) UIColor *ratingBarBackgroundColor;
@property (readonly, nonatomic) UIColor *transitIncidentBackgroundColor;
@property (readonly, nonatomic) UIColor *cardBackgroundColor;

@end

#endif /* MKInfoCardTheme_Protocol_h */
