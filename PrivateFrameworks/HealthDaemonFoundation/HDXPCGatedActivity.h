//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDXPCGatedActivity_h
#define HDXPCGatedActivity_h
@import Foundation;

@class HDCoalescedTaskPoolQuota, NSMutableArray, NSString;
@protocol OS_os_log, OS_xpc_object;

@interface HDXPCGatedActivity : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  id /* block */ _handler;
  NSObject<OS_xpc_object> *_criteria;
  double _nextScheduledFireDeadline;
  BOOL _inProgress;
  NSMutableArray *_pendingCompletions;
  double _nextFireTime;
  NSMutableArray *_nextCompletions;
  id /* block */ unitTest_ActivityCompletion;
}

@property (retain) NSObject<OS_xpc_object> *currentActivity;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;
@property (readonly) BOOL shouldDefer;
@property BOOL rescheduleWhileInProgress;
@property BOOL waitingForTrigger;
@property (copy, nonatomic) HDCoalescedTaskPoolQuota *quota;

/* instance methods */
- (id)initWithName:(id)name criteria:(id)criteria loggingCategory:(id)category handler:(id /* block */)handler;
- (id)description;
- (void)requestRunWithMaximumDelay:(double)delay completion:(id /* block */)completion;
- (void)_runRequestWithMaximumDelay:(double)delay requiredDelay:(double)delay completion:(id /* block */)completion;
- (void)runUngatedWithCompletion:(id /* block */)completion;
- (void)_registerActivityWithCriteria:(id)criteria;
- (void)_registerActivityWithCriteria:(id)criteria delay:(double)delay gracePeriod:(double)period;
- (void)_handleXPCActivityCallback:(id)callback;
- (void)_performActivity:(id)activity completion:(id /* block */)completion;
- (void)_activityFinishedWithResult:(long long)result error:(id)error;
- (void)_lock_setNextScheduledFireDeadline:(double)deadline;
- (void)_lock_resetNextActivityFireDate;
- (void)unitTest_setActivityCompletion:(id /* block */)completion;
@end

#endif /* HDXPCGatedActivity_h */
