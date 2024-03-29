//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKCalendarItemCalendarEditItem_h
#define EKCalendarItemCalendarEditItem_h
@import Foundation;

#include "EKCalendarItemEditItem.h"

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
  /* instance variables */
  unsigned long long _entityType;
}

/* instance methods */
- (id)initWithEntityType:(unsigned long long)type;
- (id)init;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)constraints;
- (BOOL)shouldAppearWithVisibility:(int)visibility;
- (BOOL)requiresReconfigurationOnSave;
- (id)cellForSubitemAtIndex:(unsigned long long)index;
- (id)eligibleCalendars;
- (id)popupMenu:(id)menu;
@end

#endif /* EKCalendarItemCalendarEditItem_h */
