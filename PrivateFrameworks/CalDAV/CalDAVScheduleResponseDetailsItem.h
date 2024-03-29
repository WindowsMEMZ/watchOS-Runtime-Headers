//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVScheduleResponseDetailsItem_h
#define CalDAVScheduleResponseDetailsItem_h
@import Foundation;

#include "CoreDAVItem.h"

@class CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVLeafItem, ICSDocument, NSString;

@interface CalDAVScheduleResponseDetailsItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *recipientHREF;
@property (readonly, nonatomic) NSString *recipientString;
@property (retain, nonatomic) CoreDAVLeafItem *requestStatus;
@property (retain, nonatomic) ICSDocument *calendarData;
@property (retain, nonatomic) CoreDAVErrorItem *topLevelErrorItem;
@property (retain, nonatomic) NSString *responseDescription;

/* instance methods */
- (void)_setCalendarDataWithLeafItem:(id)item;
- (id)copyParseRules;
- (id)description;
@end

#endif /* CalDAVScheduleResponseDetailsItem_h */
