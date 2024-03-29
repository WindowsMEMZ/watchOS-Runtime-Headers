//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDRemoteContentManager_h
#define EDRemoteContentManager_h
@import Foundation;

#include "EDRemoteContentPersistence.h"

@class BOOL *, EFCancelationToken, EFLocked, EMRemoteContentURLSession, NSBackgroundActivityScheduler, NSDate, NSLock;
@protocol EDRemoteContentManagerTestDelegate, EFScheduler;

@interface EDRemoteContentManager : NSObject {
  /* instance variables */
  NSBackgroundActivityScheduler *_requestScheduler;
  unsigned long long _remainingCountToSchedule;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _requestSchedulerLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timeoutLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _schedulingLock;
  EFCancelationToken *_token;
  EFLocked *_remoteLinkVerificationTimes;
}

@property (readonly, nonatomic) EDRemoteContentPersistence *remoteContentPersistence;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) NSObject<EFScheduler> *backgroundWorkScheduler;
@property (readonly, nonatomic) NSObject<EFScheduler> *unconditionalRequestScheduler;
@property (readonly, nonatomic) NSLock *requestLock;
@property (nonatomic) unsigned long long requestedSinceLastPrune;
@property (nonatomic) double minimumTimeout;
@property (nonatomic) double maximumTimeout;
@property (retain, nonatomic) NSDate *timeoutLastUpdate;
@property (nonatomic) double requestInterval;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSDate *schedulingLastUpdate;
@property (weak, nonatomic) NSObject<EDRemoteContentManagerTestDelegate> *testDelegate;
@property (copy, nonatomic) id /* block */ requestSchedulerBlock;
@property (nonatomic) unsigned long long pruneFrequency;

/* instance methods */
- (id)initWithRemoteContentPersistence:(id)persistence contentRuleListManager:(id)manager urlSession:(id)session;
- (void)scheduleRecurringActivity;
- (void)_scheduleBackgroundRequests;
- (void)_updateScheduling;
- (void)_scheduleRequestForLinks:(unsigned long long)links unconditionally:(BOOL)unconditionally withDelay:(double)delay completionHandler:(id /* block */)handler;
- (unsigned long long)_requestRemoteLinksInBackground:(unsigned long long)background unconditionally:(BOOL)unconditionally hasMoreLinks:(BOOL *)links deferBlock:(id /* block */)block;
- (unsigned long long)_performRequests:(unsigned long long)requests unconditionally:(BOOL)unconditionally withDeferBlock:(id /* block */)block completedCount:(unsigned long long *)count;
- (id)_issueAndWaitForBatch:(id)batch deferBlock:(id /* block */)block successful:(unsigned long long *)successful failed:(unsigned long long *)failed canceled:(unsigned long long *)canceled deferred:(unsigned long long *)deferred;
- (id)_requestSchedulerWithInterval:(double)interval;
- (BOOL)shouldAddRemoteContentLinksForMessage:(id)message logMessage:(id *)message;
- (BOOL)shouldAddRemoteContentLinksForMessageWithDateReceived:(id)received;
- (BOOL)shouldVerifyRemoteLinks;
- (void)addRemoteContentLinks:(id)links;
- (void)addRemoteContentLinks:(id)links andVerifyWithParsedLinks:(id)links defaultCharsetName:(id)name;
- (void)_addRemoteContentLinks:(id)links andVerify:(BOOL)verify WithParsedLinks:(id)links defaultCharsetName:(id)name;
- (void)addRemoteContentLinks:(id)links requiredParsing:(BOOL)parsing;
- (double)_getTimeout;
- (void)_updateTimeoutSettingDefaultIfNeeded:(BOOL)needed;
- (id)_viewDurationsFromBiome;
- (void)noteViewOfRemoteContentLinks:(id)links;
- (void)test_tearDown;
@end

#endif /* EDRemoteContentManager_h */
