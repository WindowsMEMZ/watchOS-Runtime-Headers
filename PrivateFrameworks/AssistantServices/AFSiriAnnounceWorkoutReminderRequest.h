//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSiriAnnounceWorkoutReminderRequest_h
#define AFSiriAnnounceWorkoutReminderRequest_h
@import Foundation;

#include "AFSiriExternalRequest-Protocol.h"
#include "AFSiriWorkoutReminder.h"

@interface AFSiriAnnounceWorkoutReminderRequest : NSObject<AFSiriExternalRequest> {
  /* instance variables */
  AFSiriWorkoutReminder *_workoutReminder;
}

/* class methods */
+ (void)deactivateRequestForPredictionIdentifier:(id)identifier completion:(id /* block */)completion;

/* instance methods */
- (id)initWithWorkoutReminder:(id)reminder;
- (void)performRequestWithCompletion:(id /* block */)completion;
@end

#endif /* AFSiriAnnounceWorkoutReminderRequest_h */
