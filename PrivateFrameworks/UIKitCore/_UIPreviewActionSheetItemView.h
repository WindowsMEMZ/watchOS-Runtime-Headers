//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPreviewActionSheetItemView_h
#define _UIPreviewActionSheetItemView_h
@import Foundation;

#include "UIView.h"
#include "UIImageView.h"
#include "UILabel.h"
#include "UIPreviewAction.h"

@interface _UIPreviewActionSheetItemView : UIView

@property (weak, nonatomic) UILabel *label;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) UIPreviewAction *action;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame action:(id)action;
- (void)dealloc;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (void)_updateLabelFont;
- (void)_updateTitleFromAction;
- (void)_updateImageFromAction;
- (void)_updateConstraints;
- (void)_contentSizeChanged:(id)changed;
@end

#endif /* _UIPreviewActionSheetItemView_h */
