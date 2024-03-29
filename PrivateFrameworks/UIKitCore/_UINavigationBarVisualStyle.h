//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINavigationBarVisualStyle_h
#define _UINavigationBarVisualStyle_h
@import Foundation;

@class UIFont;

@interface _UINavigationBarVisualStyle : NSObject

@property (nonatomic) long long metrics;
@property (readonly, nonatomic) BOOL metricsIsMini;
@property (readonly, nonatomic) BOOL metricsHasPrompt;
@property (nonatomic) BOOL inPopover;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) double backButtonIndicatorSpacing;
@property (readonly, nonatomic) double buttonHeight;
@property (readonly, nonatomic) double barHeight;
@property (readonly, nonatomic) double barPromptHeight;
@property (readonly, nonatomic) double topMargin;
@property (readonly, nonatomic) double horizontalMarginAdjustment;
@property (readonly, nonatomic) double topTitleMargin;
@property (readonly, nonatomic) double topBackMargin;
@property (readonly, nonatomic) double headingFontSize;
@property (readonly, nonatomic) double buttonFontSize;
@property (readonly, nonatomic) double leftTitleMargin;
@property (readonly, nonatomic) double leftBackTitleMargin;
@property (readonly, nonatomic) double leftBackImageMargin;
@property (readonly, nonatomic) double rightTitleMargin;
@property (readonly, nonatomic) double rightImageMargin;
@property (readonly, nonatomic) double leftTextMargin;
@property (readonly, nonatomic) double topImageMargin;
@property (readonly, nonatomic) double bottomImageMargin;
@property (readonly, nonatomic) double bottomButtonMargin;
@property (readonly, nonatomic) double promptInset;
@property (readonly, nonatomic) double interItemSpace;
@property (readonly, nonatomic) double interBlockSpace;
@property (readonly, nonatomic) double maxBackButtonProportion;
@property (readonly, nonatomic) double minBackTextWidth;
@property (readonly, nonatomic) double minBackImageWidth;
@property (readonly, nonatomic) double minButtonWidth;
@property (readonly, nonatomic) double minTitleWidth;
@property (readonly, nonatomic) double buttonImagePadding;
@property (readonly, nonatomic) double promptFontSize;
@property (readonly, copy, nonatomic) UIFont *promptFont;
@property (readonly, nonatomic) double promptTextOffset;
@property (readonly, nonatomic) double navigationItemBaselineOffset;
@property (readonly, nonatomic) double backIndicatorBottomMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } buttonContentEdgeInsets;
@property (readonly, nonatomic) double _legacyLeftTitleMargin;
@property (readonly, nonatomic) double _legacyRightTitleMargin;
@property (readonly, nonatomic) double _legacyButtonFontSize;
@property (readonly, nonatomic) double _legacyButtonImagePadding;

/* class methods */
+ (id)visualStyleForIdiom:(long long)idiom;

/* instance methods */
- (id)initWithIdiom:(long long)idiom;
- (id)timingFunctionForAnimationInView:(id)view withKeyPath:(id)path isInteractive:(BOOL)interactive;
- (double)backButtonAnimationClippingPadding;
- (double)barHeightForMetrics:(long long)metrics;
- (id)buttonFontForStyle:(long long)style;
- (BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)background;
- (double)leftBackTitleMarginForCustomBackButtonBackground:(id)background;
- (long long)navigationBar:(id)bar metricsForOrientation:(long long)orientation hasPrompt:(BOOL)prompt;
- (double)textButtonMarginInNavigationBar:(id)bar;
- (double)imageButtonMarginInNavigationBar:(id)bar;
- (id)defaultTitleColorForUserInterfaceStyle:(long long)style barStyle:(long long)style;
- (id)_legacyButtonFontForStyle:(long long)style;
@end

#endif /* _UINavigationBarVisualStyle_h */
