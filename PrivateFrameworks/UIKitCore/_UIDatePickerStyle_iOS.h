//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerStyle_iOS_h
#define _UIDatePickerStyle_iOS_h
@import Foundation;

#include "_UIDatePickerStyle.h"

@interface _UIDatePickerStyle_iOS : _UIDatePickerStyle
/* instance methods */
- (id)createOverlayBackgroundView;
- (void)addSubview:(id)subview toOverlayBackgroundView:(id)view;
- (struct CGSize { double x0; double x1; })idealLayoutFittingSizeForDatePickerMode:(long long)mode;
- (double)inlineDateViewMinimumWidth;
- (double)inlineTimeViewMinimumWidth;
- (double)inlineTimeAndDateSpacing;
- (double)inlineDatePickerMaximumWidth;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })maximumWidthOverhangForProposedLayoutMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })margins;
- (double)inlineDatePickerMinimumMargin;
- (double)compactLabelButtonSpacing;
- (double)compactLabelCornerRadius;
- (struct CGSize { double x0; double x1; })compactLabelBackgroundPadding;
- (long long)datePickerModalPresentationStyle;
- (double)overlayPlatterCornerRadius;
- (double)overlayPlatterInitialScale;
- (double)overlayPlatterInitialHeight;
- (double)overlayPlatterDefaultSpacing;
- (double)overlayPlatterDefaultMargin;
- (BOOL)overlayPlatterWantsShadowView;
- (id)compactLabelTextColorForEditingState:(BOOL)state;
- (id)compactLabelBackgroundColorForEnabledState:(BOOL)state;
- (id)compactLabelBackgroundButtonConfiguration;
@end

#endif /* _UIDatePickerStyle_iOS_h */
