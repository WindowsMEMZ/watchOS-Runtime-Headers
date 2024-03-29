//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIColorWellVisualStyle_h
#define _UIColorWellVisualStyle_h
@import Foundation;

#include "UIView.h"
#include "UIColor.h"
#include "_UIColorWellControl-Protocol.h"

@class NSString;

@interface _UIColorWellVisualStyle : UIView

@property (weak, nonatomic) NSObject<_UIColorWellControl> *colorWell;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) NSString *pickerTitle;
@property (nonatomic) BOOL supportsAlpha;
@property (nonatomic) BOOL wantsSystemDragAndDrop;
@property (nonatomic) BOOL wantsExtraTouchInsets;

/* instance methods */
- (id)initWithColorWell:(id)well;
- (void)setSelectedColor:(id)color notifyingPicker:(BOOL)picker;
- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
@end

#endif /* _UIColorWellVisualStyle_h */
