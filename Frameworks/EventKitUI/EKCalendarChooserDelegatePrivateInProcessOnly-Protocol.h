//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKCalendarChooserDelegatePrivateInProcessOnly_Protocol_h
#define EKCalendarChooserDelegatePrivateInProcessOnly_Protocol_h
@import Foundation;

@protocol EKCalendarChooserDelegatePrivateInProcessOnly <EKCalendarChooserDelegate>

@property (nonatomic) unsigned long long focusFilterMode;
@property (readonly, nonatomic) NSSet *unselectedCalendarsForFocusMode;

/* instance methods */
- (id)refreshCalendarsButtonPressed;
- (void)calendarChooserUpdatedToolbarItems;
- (void)calendarChooserSelectedIdentityDidChange:(id)change;
@end

#endif /* EKCalendarChooserDelegatePrivateInProcessOnly_Protocol_h */
