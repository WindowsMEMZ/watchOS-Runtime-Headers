//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardAccentVariantViewCell_h
#define UIKeyboardAccentVariantViewCell_h
@import Foundation;

#include "UIView.h"
#include "UIKBRenderConfig.h"
#include "UILabel.h"
#include "UIView.h"

@class NSString;

@interface UIKeyboardAccentVariantViewCell : UIView {
  /* instance variables */
  UILabel *_labelView;
  UIView *_backgroundView;
}

@property (retain, nonatomic) NSString *accentedChar;
@property (nonatomic) BOOL highlighted;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* UIKeyboardAccentVariantViewCell_h */
