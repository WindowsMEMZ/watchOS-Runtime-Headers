//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKCalendarRemoveExtraInfoEditItem_h
#define EKCalendarRemoveExtraInfoEditItem_h
@import Foundation;

#include "EKCalendarEditItem.h"

@interface EKCalendarRemoveExtraInfoEditItem : EKCalendarEditItem
/* instance methods */
- (unsigned long long)numberOfSubitems;
- (id)cellForSubitemAtIndex:(unsigned long long)index;
- (id)headerTitle;
- (id)footerTitle;
- (void)_stripAlertsChanged:(id)changed;
- (void)_stripAttachmentsChanged:(id)changed;
@end

#endif /* EKCalendarRemoveExtraInfoEditItem_h */
