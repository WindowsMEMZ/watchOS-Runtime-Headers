//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 573.2.0.0.0
//
#ifndef ACHTemplateSourceScheduler_h
#define ACHTemplateSourceScheduler_h
@import Foundation;

#include "ACHAchievementStoreObserving-Protocol.h"
#include "ACHAchievementStoring-Protocol.h"
#include "ACHTemplateStore.h"
#include "HDDatabaseProtectedDataObserver-Protocol.h"
#include "HDHealthDaemonReadyObserver-Protocol.h"

@class ACHAwardsClient, ACHDatabaseAssertionClient, HDProfile, NSCalendar, NSDate, NSDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ACHTemplateSourceScheduler : NSObject<HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHAchievementStoreObserving> {
  /* instance variables */
  int _significantTimeChangeToken;
}

@property (retain, nonatomic) ACHAwardsClient *client;
@property (retain, nonatomic) ACHDatabaseAssertionClient *assertionClient;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) NSObject<ACHAchievementStoring> *achievementStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) BOOL initialRunComplete;
@property (retain, nonatomic) NSMutableSet *templateSources;
@property (retain, nonatomic) NSDictionary *lastRunDateByTemplateSourceIdentifier;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;
@property (nonatomic) BOOL achievementStoreDidFinishInitialFetch;
@property (nonatomic) BOOL shouldScheduleAfterInitialFetch;
@property (nonatomic) int protectedDataToken;
@property (readonly, nonatomic) unsigned long long _sourceCount;
@property (retain, nonatomic) NSDate *currentDateOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithClient:(id)client assertionClient:(id)client templateStore:(id)store achievementStore:(id)store;
- (void)dealloc;
- (id)initWithProfile:(id)profile templateStore:(id)store achievementStore:(id)store;
- (void)registerTemplateSource:(id)source;
- (void)deregisterTemplateSource:(id)source;
- (void)runImmediatelyForTemplateSource:(id)source;
- (void)daemonReady:(id)ready;
- (BOOL)_isProtectedDataAvailable;
- (void)_startUp;
- (void)_listenForSignificantTimeChanges;
- (void)database:(id)database protectedDataDidBecomeAvailable:(BOOL)available;
- (id)_runnableSourcesInSources:(id)sources forDate:(id)date calendar:(id)calendar;
- (void)_runAllTemplateSources;
- (BOOL)_queue_runTemplateSources:(id)sources requiringRunnableForDate:(BOOL)date error:(id *)error;
- (BOOL)_queue_client_runTemplateSources:(id)sources requiringRunnableForDate:(BOOL)date error:(id *)error;
- (BOOL)_queue_daemon_runTemplateSources:(id)sources requiringRunnableForDate:(BOOL)date error:(id *)error;
- (void)achievementStoreDidFinishInitialFetch:(id)fetch;
- (void)achievementStore:(id)store didRemoveAchievements:(id)achievements;
- (void)achievementStore:(id)store didAddAchievements:(id)achievements;
- (void)achievementStore:(id)store didUpdateAchievements:(id)achievements;
- (id)_currentDate;
- (BOOL)_runSynchronouslyWithError:(id *)error;
@end

#endif /* ACHTemplateSourceScheduler_h */
