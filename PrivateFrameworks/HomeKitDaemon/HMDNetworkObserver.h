//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkObserver_h
#define HMDNetworkObserver_h
@import Foundation;

#include "HMDCurrentResidentDeviceDataSource-Protocol.h"
#include "HMDEventCountersManager.h"
#include "HMDLogEventDailyScheduler.h"
#include "HMDLogEventDailyTaskRunner-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"
#include "HMMLogEventObserver-Protocol.h"

@class HMFTimer, HMFWiFiManager, HMFWifiNetworkAssociation, HMMDateProvider, NSMutableDictionary, NSNotificationCenter, NSString;
@protocol HMMLogEventDispatching;

@interface HMDNetworkObserver : NSObject<HMFTimerDelegate, HMMLogEventObserver, HMDLogEventDailyTaskRunner>

@property (readonly, weak, nonatomic) NSObject<HMMLogEventDispatching> *logEventDispatcher;
@property (readonly, weak, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, weak, nonatomic) HMFWiFiManager *wifiManager;
@property (readonly, weak, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, weak, nonatomic) NSObject<HMDCurrentResidentDeviceDataSource> *currentHomeDataSource;
@property (readonly, weak, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, weak, nonatomic) HMDLogEventDailyScheduler *dailyScheduler;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } networkAssociationLock;
@property (readonly, nonatomic) HMFWifiNetworkAssociation *networkAssociation;
@property (nonatomic) BOOL wifiAssociated;
@property (readonly) unsigned long long collectionStartSeconds;
@property (readonly, nonatomic) unsigned long long numWifiAssociations;
@property (readonly, nonatomic) unsigned long long numWifiDisassociations;
@property (readonly, nonatomic) unsigned long long numAPChanges;
@property (readonly, nonatomic) unsigned long long numGatewayChanges;
@property (readonly, nonatomic) unsigned long long numReadWrites;
@property (readonly, nonatomic) unsigned long long numReadErrors;
@property (readonly, nonatomic) unsigned long long numWriteErrors;
@property (readonly, nonatomic) NSMutableDictionary *topWriteErrors;
@property (readonly, nonatomic) NSMutableDictionary *topSessionErrors;
@property (readonly, nonatomic) BOOL started;
@property (readonly, nonatomic) id /* block */ tickBlock;
@property (readonly) HMFTimer *changeDebounceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedEventClasses;

/* instance methods */
- (id)initWithLogEventDispatcher:(id)dispatcher countersManager:(id)manager dailyScheduler:(id)scheduler currentHomeDataSource:(id)source dateProvider:(id)provider;
- (id)initWithLogEventDispatcher:(id)dispatcher countersManager:(id)manager dailyScheduler:(id)scheduler currentHomeDataSource:(id)source dateProvider:(id)provider wifiManager:(id)manager notificationCenter:(id)center changeDebounceTimer:(id)timer tickBlock:(id /* block */)block;
- (void)start;
- (void)stop;
- (id)counterGroupForName:(id)name homeUUID:(id)uuid date:(id)date;
- (void)_handleCurrentNetworkChangedNotification:(id)notification;
- (void)_incrementError:(id)error forHistogram:(id)histogram byValue:(unsigned long long)value;
- (id)_keyOfLargestCountInHistogram:(id)histogram;
- (void)_clearNonPersistentCounters;
- (void)_handleReadWriteLogEvent:(id)event;
- (void)_handleAccessorySessionEvent:(id)event;
- (void)didReceiveEventFromDispatcher:(id)dispatcher;
- (void)runDailyTask;
- (id)logEventForHomeWithUUID:(id)uuid associatedWithDate:(id)date;
- (void)deleteCountersBeforeDate:(id)date;
- (void)deleteCountersAfterDate:(id)date;
- (void)checkNetworkChange;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDNetworkObserver_h */
