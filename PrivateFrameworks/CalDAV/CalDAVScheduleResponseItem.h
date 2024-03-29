//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1141.2.1.0.0
//
#ifndef CalDAVScheduleResponseItem_h
#define CalDAVScheduleResponseItem_h
@import Foundation;

#include "CoreDAVItem.h"

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *responses;
@property (retain, nonatomic) NSMutableSet *successfulICS;
@property (retain, nonatomic) NSMutableSet *failedResponseItems;

/* instance methods */
- (id)copyParseRules;
- (void)addNewTopLevelItem:(id)item;
- (id)description;
@end

#endif /* CalDAVScheduleResponseItem_h */
