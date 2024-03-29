//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef _TtC13SleepHealthUI23TonePickerStyleProvider_SleepHealthUI_h
#define _TtC13SleepHealthUI23TonePickerStyleProvider_SleepHealthUI_h
@import Foundation;

@interface SleepHealthUI.TonePickerStyleProvider (SleepHealthUI) <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>
/* instance methods */
- (BOOL)vibrationPickerUsesOpaqueBackground;
- (long long)vibrationPickerTableViewSeparatorStyle;
- (id)vibrationPickerCellTextFont;
- (id)vibrationPickerCellTextColor;
- (id)vibrationPickerCellHighlightedTextColor;
- (id)vibrationPickerCellBackgroundColor;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
- (BOOL)wantsCustomVibrationPickerHeaderView;
- (id)vibrationPickerHeaderTextFont;
- (id)vibrationPickerHeaderTextColor;
- (id)vibrationPickerHeaderTextShadowColor;
- (struct UIOffset { double x0; double x1; })vibrationPickerHeaderTextShadowOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })vibrationPickerHeaderTextPaddingInsets;
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)cell;
- (BOOL)tonePickerUsesOpaqueBackground;
- (long long)tonePickerTableViewSeparatorStyle;
- (id)tonePickerCellTextFont;
- (id)tonePickerCellTextColor;
- (id)tonePickerCellHighlightedTextColor;
- (id)tonePickerCellBackgroundColor;
- (id)newBackgroundViewForSelectedTonePickerCell:(BOOL)cell;
- (id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
- (BOOL)wantsCustomTonePickerHeaderView;
- (id)tonePickerHeaderTextFont;
- (id)tonePickerHeaderTextColor;
- (id)tonePickerHeaderTextShadowColor;
- (struct UIOffset { double x0; double x1; })tonePickerHeaderTextShadowOffset;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })tonePickerHeaderTextPaddingInsets;
@end

#endif /* _TtC13SleepHealthUI23TonePickerStyleProvider_SleepHealthUI_h */
