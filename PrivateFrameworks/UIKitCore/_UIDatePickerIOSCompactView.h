//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerIOSCompactView_h
#define _UIDatePickerIOSCompactView_h
@import Foundation;

#include "UIControl.h"
#include "UIDatePicker.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UILayoutGuide.h"
#include "UIPanGestureRecognizer.h"
#include "_UIDatePickerCompactDateLabel.h"
#include "_UIDatePickerCompactDateLabelDelegate-Protocol.h"
#include "_UIDatePickerCompactTimeLabel.h"
#include "_UIDatePickerCompactTimeLabelDelegate-Protocol.h"
#include "_UIDatePickerDataModel.h"
#include "_UIDatePickerOverlayPresentation.h"
#include "_UIDatePickerOverlayPresentationDelegate-Protocol.h"
#include "_UIDatePickerViewComponent-Protocol.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString;

@interface _UIDatePickerIOSCompactView : UIControl<_UIDatePickerCompactTimeLabelDelegate, _UIDatePickerCompactDateLabelDelegate, _UIDatePickerOverlayPresentationDelegate, UIGestureRecognizerDelegate, _UIDatePickerViewComponent> {
  /* instance variables */
  struct { unsigned int x :1 isEnabled; unsigned int x :1 implementsCustomDidSelectComponent; } _flags;
  NSDateFormatter *_dateFormatterMedium;
  NSDateFormatter *_dateFormatterShort;
  UILayoutGuide *_timeViewLayoutGuide;
  UILayoutGuide *_contentLayoutGuide;
  NSDateFormatter *_layoutFormatter;
  BOOL _dateOnLeadingSide;
  NSArray *_dateTimeConstraints;
  _UIDatePickerOverlayPresentation *_presentation;
  long long _activeComponent;
  UIPanGestureRecognizer *_panGestureRecognizer;
}

@property (readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView;
@property (readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView;
@property (readonly, nonatomic) BOOL alignConstraintsToLayoutGuide;
@property (retain, nonatomic) NSDictionary *overrideAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) _UIDatePickerDataModel *data;
@property (readonly, nonatomic) long long datePickerStyle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } appliedInsetsToEdgeOfContent;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) double contentWidth;

/* instance methods */
- (void)setContentHorizontalAlignment:(long long)alignment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)willMoveToWindow:(id)window;
- (void)willMoveToSuperview:(id)superview;
- (void)_contentSizeCategoryDidChange:(id)change previousTraits:(id)traits;
- (void)_updateDateBeforeTimeValue;
- (void)_updateUI;
- (void)_updateEnabledStyling;
- (void)_updateDateViewTextAlignment;
- (void)tintColorDidChange;
- (void)updateConstraints;
- (void)_didReceivePanGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (void)compactTimeLabel:(id)label didSelectTime:(id)time;
- (void)compactTimeLabelDidBeginEditing:(id)editing;
- (void)compactTimeLabelDidEndEditing:(id)editing;
- (void)compactTimeLabelWillBecomeFirstResponder:(id)responder;
- (BOOL)compactTimeLabel:(id)label shouldDismissForInteractionAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)compactDateLabelDidBeginEditing:(id)editing;
- (void)compactDateLabelDidEndEditing:(id)editing;
- (id)createDatePickerForCompactTimeLabel:(id)label;
- (id)createDatePickerForCompactDateLabel:(id)label;
- (void)didChangeCompactStyleDelegate;
- (void)_datePickerPresentation:(id)presentation didChangeActiveMode:(long long)mode;
- (void)setActiveComponent:(long long)component;
- (void)_resignActiveComponentAnimated:(BOOL)animated;
- (void)updateTimeZoneDisplay;
- (void)_reloadTimeViewTimeFormat;
- (void)didChangeMode;
- (void)didChangeLocale;
- (void)didChangeTimeZone;
- (void)didChangeCalendar;
- (void)didChangeDateFrom:(id)from animated:(BOOL)animated;
- (void)displaySelectedDateAnimated:(BOOL)animated;
- (void)didChangeMinimumDate;
- (void)didChangeMaximumDate;
- (void)didChangeMinuteInterval;
- (void)didChangeRoundsToMinuteInterval;
- (void)didReset;
- (void)didChangeToday;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)usesAutoLayout;
- (void)_setEnabled:(BOOL)enabled;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })defaultSize;
- (BOOL)hasDefaultSize;
@end

#endif /* _UIDatePickerIOSCompactView_h */
