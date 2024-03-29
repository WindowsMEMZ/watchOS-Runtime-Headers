//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerCalendarTimeViewDelegate_Protocol_h
#define _UIDatePickerCalendarTimeViewDelegate_Protocol_h
@import Foundation;

@protocol _UIDatePickerCalendarTimeViewDelegate <NSObject>
/* instance methods */
- (void)timeView:(id)view didSelectTime:(id)time;
- (void)timeViewWillBecomeFirstResponder:(id)responder;
- (void)timeViewDidBeginEditing:(id)editing;
- (void)timeViewDidEndEditing:(id)editing;
- (id)createDatePickerForTimeView:(id)view;
@end

#endif /* _UIDatePickerCalendarTimeViewDelegate_Protocol_h */
