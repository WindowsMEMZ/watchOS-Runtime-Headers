//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVCalendarServerAllowedSharingModesItem_h
#define CalDAVCalendarServerAllowedSharingModesItem_h
@import Foundation;

#include "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBePublished;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *canBeShared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedUndeletable;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isMarkedImmutableSharees;

/* instance methods */
- (id)init;
- (id)copyParseRules;
@end

#endif /* CalDAVCalendarServerAllowedSharingModesItem_h */
