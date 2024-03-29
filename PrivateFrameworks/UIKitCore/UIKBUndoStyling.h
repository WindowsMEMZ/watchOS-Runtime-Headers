//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBUndoStyling_h
#define UIKBUndoStyling_h
@import Foundation;

#include "UIBlurEffect.h"
#include "UIColor.h"
#include "UIVibrancyEffect.h"

@class UIFont;

@interface UIKBUndoStyling : NSObject

@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect;
@property (retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect;
@property (retain, nonatomic) UIColor *HUDbackgroundColor;
@property (retain, nonatomic) UIColor *HUDShadowColor;
@property (retain, nonatomic) UIColor *buttonGlyphColorEnabled;
@property (retain, nonatomic) UIColor *buttonGlyphColorPressed;
@property (retain, nonatomic) UIColor *buttonGlyphColorDisabled;
@property (retain, nonatomic) UIColor *elementBackgroundColor;
@property (retain, nonatomic) UIColor *elementCoverColor;
@property (nonatomic) BOOL undoRedoIconOnly;
@property (nonatomic) BOOL cutCopyPasteIconOnly;
@property (nonatomic) BOOL tooSmallForInstructionalText;
@property (nonatomic) BOOL isRTL;
@property (nonatomic) double undoControlMinWidth;
@property (nonatomic) double cutControlMinWidth;
@property (nonatomic) long long appearance;
@property (readonly, nonatomic) UIFont *undoInteractiveControlLabelFont;
@property (readonly, nonatomic) UIFont *undoStateControlLabelFont;
@property (readonly, nonatomic) UIFont *undoStateControlUnavailableLabelFont;

/* instance methods */
- (id)initWithKeyboardAppearance:(long long)appearance isRTL:(BOOL)rtl;
- (id)vibrancyEffectForBlur:(id)blur;
- (void)createDynamicColors;
@end

#endif /* UIKBUndoStyling_h */
