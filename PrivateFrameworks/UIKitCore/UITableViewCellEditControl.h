//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewCellEditControl_h
#define UITableViewCellEditControl_h
@import Foundation;

#include "UIControl.h"
#include "UIColor.h"
#include "UIImageView.h"
#include "UITableViewCell.h"

@interface UITableViewCellEditControl : UIControl {
  /* instance variables */
  UITableViewCell *_cell;
  UIImageView *_imageView;
  UIImageView *_shadowView;
  double _focalY;
  double _focalHeight;
  unsigned int x :2 _style;
  unsigned int x :1 _rotating;
  unsigned int x :27 _reserved;
}

@property (nonatomic) BOOL rotated;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;
@property (readonly, nonatomic) BOOL wantsImageShadow;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;

/* instance methods */
- (id)_imageView;
- (void)_toggleRotate;
- (id)_deleteImage;
- (id)_insertImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_updateImageView;
- (id)_currentImage;
- (id)_renderedImage;
- (struct CGSize { double x0; double x1; })defaultSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithTableViewCell:(id)cell editingStyle:(long long)style;
- (void)adjustLayoutForFocalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_shadowImage;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSelected:(BOOL)selected;
- (void)setRotated:(BOOL)rotated animated:(BOOL)animated;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)_toggleRotateAnimationDidStop;
- (void)_multiselectColorChanged;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)traitCollectionDidChange:(id)change;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_createImageViewIfNecessary;
@end

#endif /* UITableViewCellEditControl_h */
