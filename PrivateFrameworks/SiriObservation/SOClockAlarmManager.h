//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef SOClockAlarmManager_h
#define SOClockAlarmManager_h
@import Foundation;

@class AFInstanceContext, NSMutableDictionary;

@interface SOClockAlarmManager : NSObject {
  /* instance variables */
  AFInstanceContext *_instanceContext;
  NSMutableDictionary *_registeredObservations;
}

/* class methods */
+ (void)warmUp;

/* instance methods */
- (id)_registeredObservations;
- (id)init;
- (id)initWithInstanceContext:(id)context;
- (void)checkIn;
- (void)addHandler:(id /* block */)handler forEvent:(long long)event;
- (void)removeHandlerForEvent:(long long)event;
- (id)alarms;
- (id)alarmsIncludingSleepAlarm:(BOOL)alarm;
- (id)addAlarm:(id)alarm;
- (id)updateAlarm:(id)alarm;
- (id)removeAlarm:(id)alarm;
- (id)dismissAlarmWithIdentifier:(id)identifier;
@end

#endif /* SOClockAlarmManager_h */
