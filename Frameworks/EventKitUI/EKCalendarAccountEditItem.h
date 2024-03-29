//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKCalendarAccountEditItem_h
#define EKCalendarAccountEditItem_h
@import Foundation;

#include "EKCalendarEditItem.h"

@class EKSource;

@interface EKCalendarAccountEditItem : EKCalendarEditItem {
  /* instance variables */
  EKSource *_limitedToSource;
}

@property (nonatomic) BOOL editable;

/* instance methods */
- (id)initLimitedToSource:(id)source;
- (id)cellForSubitemAtIndex:(unsigned long long)index;
- (BOOL)canAddCalendarToMoreThanOneAccount;
- (id)currentSource;
- (BOOL)calendarEditor:(id)editor shouldSelectSubitem:(unsigned long long)subitem;
- (void)calendarEditor:(id)editor didSelectSubitem:(unsigned long long)subitem;
@end

#endif /* EKCalendarAccountEditItem_h */
