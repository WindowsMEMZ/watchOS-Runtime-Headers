//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef _AFClockAlarmMutation_h
#define _AFClockAlarmMutation_h
@import Foundation;

#include "AFClockAlarm.h"
#include "AFClockAlarmMutating-Protocol.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface _AFClockAlarmMutation : NSObject<AFClockAlarmMutating> {
  /* instance variables */
  AFClockAlarm *_base;
  NSUUID *_alarmID;
  NSURL *_alarmURL;
  BOOL _isFiring;
  NSString *_title;
  unsigned long long _type;
  unsigned long long _hour;
  unsigned long long _minute;
  unsigned long long _repeatOptions;
  BOOL _isEnabled;
  BOOL _isSnoozed;
  NSDate *_firedDate;
  NSDate *_dismissedDate;
  NSDate *_lastModifiedDate;
  struct _mutationFlags { unsigned int x :1 isDirty; unsigned int x :1 hasAlarmID; unsigned int x :1 hasAlarmURL; unsigned int x :1 hasIsFiring; unsigned int x :1 hasTitle; unsigned int x :1 hasType; unsigned int x :1 hasHour; unsigned int x :1 hasMinute; unsigned int x :1 hasRepeatOptions; unsigned int x :1 hasIsEnabled; unsigned int x :1 hasIsSnoozed; unsigned int x :1 hasFiredDate; unsigned int x :1 hasDismissedDate; unsigned int x :1 hasLastModifiedDate; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBase:(id)base;
- (BOOL)isDirty;
- (id)getAlarmID;
- (void)setAlarmID:(id)id;
- (id)getAlarmURL;
- (void)setAlarmURL:(id)url;
- (BOOL)getIsFiring;
- (void)setIsFiring:(BOOL)firing;
- (id)getTitle;
- (void)setTitle:(id)title;
- (unsigned long long)getType;
- (void)setType:(unsigned long long)type;
- (unsigned long long)getHour;
- (void)setHour:(unsigned long long)hour;
- (unsigned long long)getMinute;
- (void)setMinute:(unsigned long long)minute;
- (unsigned long long)getRepeatOptions;
- (void)setRepeatOptions:(unsigned long long)options;
- (BOOL)getIsEnabled;
- (void)setIsEnabled:(BOOL)enabled;
- (BOOL)getIsSnoozed;
- (void)setIsSnoozed:(BOOL)snoozed;
- (id)getFiredDate;
- (void)setFiredDate:(id)date;
- (id)getDismissedDate;
- (void)setDismissedDate:(id)date;
- (id)getLastModifiedDate;
- (void)setLastModifiedDate:(id)date;
@end

#endif /* _AFClockAlarmMutation_h */
