//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKSuggestionCoalescedInfo_h
#define CUIKSuggestionCoalescedInfo_h
@import Foundation;

@class EKCalendarSuggestionNotification, NSString;

@interface CUIKSuggestionCoalescedInfo : NSObject

@property (readonly) NSString *title;
@property (readonly) NSString *descriptionText;
@property (readonly) EKCalendarSuggestionNotification *earliestSuggestionNotification;

/* instance methods */
- (id)initWithTitle:(id)title descriptionText:(id)text earliestSuggestionNotification:(id)notification;
@end

#endif /* CUIKSuggestionCoalescedInfo_h */
