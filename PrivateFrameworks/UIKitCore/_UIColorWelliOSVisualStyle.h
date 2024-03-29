//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIColorWelliOSVisualStyle_h
#define _UIColorWelliOSVisualStyle_h
@import Foundation;

#include "_UIColorWellVisualStyle.h"
#include "UIButton.h"
#include "UIView.h"

@interface _UIColorWelliOSVisualStyle : _UIColorWellVisualStyle {
  /* instance variables */
  UIButton *_button;
  UIView *_gradientView;
  UIView *_borderView;
  BOOL _isSelected;
}

/* instance methods */
- (id)initWithColorWell:(id)well;
- (void)setSelectedColor:(id)color;
- (void)layoutSubviews;
- (void)touchDown:(id)down;
- (void)touchUp:(id)up;
- (double)_widthForTraitCollection:(id)collection;
- (struct CGSize { double x0; double x1; })intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })size;
- (void)traitCollectionDidChange:(id)change;
- (void)_invokeColorPicker:(id)picker;
@end

#endif /* _UIColorWelliOSVisualStyle_h */
