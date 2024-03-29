//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTAlarmClient_Protocol_h
#define MTAlarmClient_Protocol_h
@import Foundation;

@protocol MTAlarmClient <NSObject>
/* instance methods */
- (void)alarmsAdded:(id)added;
- (void)alarmsUpdated:(id)updated;
- (void)alarmsRemoved:(id)removed;
- (void)alarmSnoozed:(id)snoozed;
- (void)alarmDismissed:(id)dismissed;
- (void)alarmFired:(id)fired;
- (void)nextAlarmChanged:(id)changed;
@end

#endif /* MTAlarmClient_Protocol_h */
