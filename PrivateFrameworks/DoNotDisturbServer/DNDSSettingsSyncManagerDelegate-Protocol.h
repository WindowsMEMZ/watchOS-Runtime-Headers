//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 371.14.0.0.0
//
#ifndef DNDSSettingsSyncManagerDelegate_Protocol_h
#define DNDSSettingsSyncManagerDelegate_Protocol_h
@import Foundation;

@protocol DNDSSettingsSyncManagerDelegate <NSObject>
/* instance methods */
- (void)syncManager:(id)manager didReceiveUpdatedPhoneCallBypassSettings:(id)settings;
- (void)syncManager:(id)manager didReceiveUpdatedScheduleSettings:(id)settings;
@end

#endif /* DNDSSettingsSyncManagerDelegate_Protocol_h */
