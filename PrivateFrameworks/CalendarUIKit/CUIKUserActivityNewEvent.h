//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKUserActivityNewEvent_h
#define CUIKUserActivityNewEvent_h
@import Foundation;

#include "CUIKUserActivity.h"

@class NSDate, NSString, NSTimeZone, NSURL;

@interface CUIKUserActivityNewEvent : CUIKUserActivity

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSTimeZone *timeZone;
@property BOOL allDay;
@property (retain) NSString *title;
@property (retain) NSURL *url;
@property (retain) NSString *notes;
@property (retain) NSString *location;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)eventWithEventStore:(id)store;
- (id)dictionary;
@end

#endif /* CUIKUserActivityNewEvent_h */
