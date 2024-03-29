//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef GAXTimeRestrictionManager_h
#define GAXTimeRestrictionManager_h
@import Foundation;

@class AXAccessQueue, AXAccessQueueTimer, NSDate, NSMutableArray, NSMutableSet;
@protocol GAXTimeRestrictionManagerDelegate;

@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic) BOOL active;
@property (nonatomic) BOOL paused;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long expirationDurationInSeconds;
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer;
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds;
@property (retain, nonatomic) NSMutableArray *alarmTimers;
@property (weak, nonatomic) NSObject<GAXTimeRestrictionManagerDelegate> *delegate;
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue;
@property (readonly, nonatomic) long long remainingTimeInSeconds;

/* instance methods */
- (id)initWithAssertedAccessQueue:(id)queue;
- (id)description;
- (void)beginWithDuration:(long long)duration;
- (void)cancel;
- (void)pause;
- (void)resume;
- (void)_addAlarmForDuration:(long long)duration;
- (void)_scheduleTimers;
- (void)_removeAllTimers;
- (void)_removeExpirationTimer;
- (void)_removeAllAlarmTimers;
- (BOOL)isActive;
- (BOOL)isPaused;
@end

#endif /* GAXTimeRestrictionManager_h */
