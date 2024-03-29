//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIPickerTableViewWrapperCell_h
#define UIPickerTableViewWrapperCell_h
@import Foundation;

#include "UIPickerTableViewCell.h"
#include "UIView.h"

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
  /* instance variables */
  UIView *_wrappedViewContainer;
  struct CGSize { double width; double height; } _wrappedViewSize;
}

@property (retain, nonatomic) UIView *wrappedView;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } wrappedViewInsets;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_setIsCenterCell:(BOOL)cell shouldModifyAlphaOfView:(BOOL)view;
- (void)_updateWrappedViewFrame;
- (void)_updateWrappedView;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x0; double x1; })size;
- (void)prepareForReuse;
- (id)_anyDateLabel;
@end

#endif /* UIPickerTableViewWrapperCell_h */
