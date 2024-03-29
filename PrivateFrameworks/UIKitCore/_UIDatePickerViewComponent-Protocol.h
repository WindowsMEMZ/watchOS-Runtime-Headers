//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerViewComponent_Protocol_h
#define _UIDatePickerViewComponent_Protocol_h
@import Foundation;

@protocol _UIDatePickerViewComponent 

@property (weak, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) _UIDatePickerDataModel *data;
@property (readonly, nonatomic) long long datePickerStyle;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } appliedInsetsToEdgeOfContent;
@property (nonatomic) double timeInterval;
@property (readonly, nonatomic) double contentWidth;

/* instance methods */
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
- (void)didChangeToday;
- (void)didReset;
- (BOOL)hasDefaultSize;
- (struct CGSize { double x0; double x1; })defaultSize;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_setEnabled:(BOOL)enabled;
@optional
/* instance methods */
- (void)didChangeCustomFontDesign;
- (BOOL)usesAutoLayout;
- (id)primaryFirstResponder;
- (void)_workaround66574039_datePickerDidUpdateLayoutMargins;
@end

#endif /* _UIDatePickerViewComponent_Protocol_h */
