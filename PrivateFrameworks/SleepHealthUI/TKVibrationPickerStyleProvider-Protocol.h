//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef TKVibrationPickerStyleProvider_Protocol_h
#define TKVibrationPickerStyleProvider_Protocol_h
@import Foundation;

@protocol TKVibrationPickerStyleProvider <NSObject>

@property (readonly, nonatomic) BOOL vibrationPickerUsesOpaqueBackground;
@property (readonly, nonatomic) long long vibrationPickerTableViewSeparatorStyle;
@property (readonly, nonatomic) UIFont *vibrationPickerCellTextFont;
@property (readonly, nonatomic) UIColor *vibrationPickerCellTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellHighlightedTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCellBackgroundColor;
@property (readonly, nonatomic) BOOL wantsCustomVibrationPickerHeaderView;
@property (readonly, nonatomic) UIFont *vibrationPickerHeaderTextFont;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextColor;
@property (readonly, nonatomic) UIColor *vibrationPickerHeaderTextShadowColor;
@property (readonly, nonatomic) struct UIOffset { double x0; double x1; } vibrationPickerHeaderTextShadowOffset;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } vibrationPickerHeaderTextPaddingInsets;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomBackgroundColor;
@property (readonly, nonatomic) UIColor *vibrationPickerCustomTableSeparatorColor;
@property (readonly, nonatomic) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode;
@property (readonly, nonatomic) BOOL vibrationPickerHeaderTextShouldBeUppercase;

/* instance methods */
- (id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)cell;
- (id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
@end

#endif /* TKVibrationPickerStyleProvider_Protocol_h */
