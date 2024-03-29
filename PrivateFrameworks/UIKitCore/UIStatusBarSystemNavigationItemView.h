//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIStatusBarSystemNavigationItemView_h
#define UIStatusBarSystemNavigationItemView_h
@import Foundation;

#include "UIStatusBarItemView.h"
#include "UIButton.h"

@class NSString;

@interface UIStatusBarSystemNavigationItemView : UIStatusBarItemView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int currentLabelCompressionLevel;

/* instance methods */
- (BOOL)_shouldLayoutImageOnRight;
- (struct CGSize { double x0; double x1; })_buttonSize;
- (double)updateContentsAndWidth;
- (double)resetContentOverlap;
- (double)addContentOverlap:(double)overlap;
- (id)accessibilityHUDRepresentation;
- (BOOL)layoutImageOnTrailingEdge;
- (long long)labelLineBreakMode;
- (void)userDidActivateButton:(id)button;
- (id)shortenedTitleWithCompressionLevel:(int)level;
- (double)extraLeftPadding;
- (double)extraRightPadding;
@end

#endif /* UIStatusBarSystemNavigationItemView_h */
