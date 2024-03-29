//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVResourceTypeItem_h
#define CalDAVResourceTypeItem_h
@import Foundation;

#include "CoreDAVResourceTypeItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendar;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *notification;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *subscribed;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar;

/* instance methods */
- (id)copyParseRules;
- (void)write:(id)write;
@end

#endif /* CalDAVResourceTypeItem_h */
