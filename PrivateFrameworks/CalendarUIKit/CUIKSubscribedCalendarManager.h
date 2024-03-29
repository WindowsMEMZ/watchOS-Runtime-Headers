//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1205.1.1.2.0
//
#ifndef CUIKSubscribedCalendarManager_h
#define CUIKSubscribedCalendarManager_h
@import Foundation;

@interface CUIKSubscribedCalendarManager : NSObject {
  /* instance variables */
  unsigned long long _calendarSaveMonitoringToken;
  unsigned long long _accountsSaveMonitoringToken;
}

/* instance methods */
- (void)shutdownDAForCalendarUpdates;
- (void)restartDAAfterCalendarUpdates;
- (void)shutdownDAForAccountUpdates;
- (void)restartDAAfterAccountUpdates;
- (void)updateOrCreateAccountWithCalendar:(id)calendar previousAccountID:(id)id newUsername:(id)username newPassword:(id)password newAllowsInsecureConnections:(BOOL)connections;
- (void)_updateAccount:(id)account inAccountStore:(id)store withCalendar:(id)calendar oldAccount:(id)account newAccountDirty:(BOOL)dirty newUsername:(id)username newPassword:(id)password newAllowsInsecureConnections:(BOOL)connections;
- (void)_saveAccount:(id)account inStore:(id)store updated:(BOOL)updated;
- (id)_createSubcalAccountForCalendar:(id)calendar inAccountStore:(id)store newAccountNeedsSaving:(BOOL *)saving;
- (id)_createCalDAVChildSubCalAccountForCalendar:(id)calendar inAccountStore:(id)store;
- (id)_createLocalSubCalAccountForCalendar:(id)calendar inAccountStore:(id)store;
- (id)_accountDescriptionForCalendar:(id)calendar;
@end

#endif /* CUIKSubscribedCalendarManager_h */
