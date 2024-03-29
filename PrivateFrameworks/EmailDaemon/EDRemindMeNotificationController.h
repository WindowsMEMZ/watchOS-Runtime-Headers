//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDRemindMeNotificationController_h
#define EDRemindMeNotificationController_h
@import Foundation;

#include "EDMessageChangeHookResponder-Protocol.h"
#include "EDMessagePersistence.h"
#include "EDPersistenceHookRegistry.h"
#include "EDQueryCreator.h"
#include "EDRemindMeNotificationControllerAlarmDateProvider-Protocol.h"
#include "EDRemindMeNotificationControllerEventDelegate-Protocol.h"
#include "EFLoggable-Protocol.h"

@class EFLocked, EFXPCAlarm, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface EDRemindMeNotificationController : NSObject<EFLoggable, EDRemindMeNotificationControllerEventDelegate, EDMessageChangeHookResponder> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_alarmQueue;
  NSObject<EDRemindMeNotificationControllerAlarmDateProvider> *_alarmDateProvider;
  EDPersistenceHookRegistry *_hookRegistry;
  EDMessagePersistence *_messagePersistence;
  EDQueryCreator *_readLaterQueryCreator;
}

@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, weak, nonatomic) NSObject<EDRemindMeNotificationControllerEventDelegate> *eventDelegate;
@property (readonly, nonatomic) EFXPCAlarm *xpcAlarm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;
+ (id)localizedRemindMeNotificationTitle;

/* instance methods */
- (id)initWithHookRegistry:(id)registry messagePersistence:(id)persistence alarmScheduler:(id)scheduler;
- (id)initWithHookRegistry:(id)registry messagePersistence:(id)persistence alarmDateProvider:(id)provider eventDelegate:(id)delegate alarmScheduler:(id)scheduler;
- (void)test_waitForUpdates;
- (void)test_tearDown;
- (id)addRemindMeObserver:(id)observer;
- (void)removeRemindMeObserver:(id)observer;
- (void)performDelayedTasks;
- (void)_updateAlarmStartDate:(id)date;
- (void)_updateAlarmUpdatedMessages:(id)messages readLaterDate:(id)date startDate:(id)date changeIsRemote:(BOOL)remote;
- (id)_fetchMessagesToNotifyWithStartDate:(id)date endDate:(id)date;
- (void)_alarmFired;
- (void)_notify:(id)_notify;
- (void)resetRemindMeAlarmIfNeeded;
- (void)controller:(id)controller scheduleAlarmForMessage:(id)message date:(id)date;
- (void)persistenceDidChangeReadLaterDate:(id)date messages:(id)messages changeIsRemote:(BOOL)remote generationWindow:(id)window;
- (void)persistenceDidDeleteMessages:(id)messages generationWindow:(id)window;
@end

#endif /* EDRemindMeNotificationController_h */
