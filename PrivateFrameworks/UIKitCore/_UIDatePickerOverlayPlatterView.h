//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerOverlayPlatterView_h
#define _UIDatePickerOverlayPlatterView_h
@import Foundation;

#include "UIView.h"
#include "UIDatePicker.h"
#include "UIView.h"
#include "_UIDatePickerStyle.h"
#include "_UIRoundedRectShadowView.h"

@class NSLayoutConstraint;

@interface _UIDatePickerOverlayPlatterView : UIView

@property (readonly, nonatomic) _UIRoundedRectShadowView *shadowView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *accessoryView;
@property (readonly, nonatomic) UIView *previousContentView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint;
@property (readonly, nonatomic) _UIDatePickerStyle *datePickerStyle;
@property (readonly, nonatomic) UIDatePicker *datePicker;
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;

/* instance methods */
- (id)initWithDatePicker:(id)picker accessoryView:(id)view;
- (void)replaceDatePicker:(id)picker;
- (void)updateConstraints;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct CGSize { double x0; double x1; })preferredPlatterSize;
- (void)prepareDatePickerTransitionWithDatePicker:(id)picker;
- (void)datePickerTransitionAnimation;
- (void)datePickerTransitionCompletion;
@end

#endif /* _UIDatePickerOverlayPlatterView_h */
