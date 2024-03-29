//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSEngagement_h
#define AMSEngagement_h
@import Foundation;

#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSEngagementConnection.h"

@class NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface AMSEngagement : NSObject<AMSBagConsumer> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) NSMapTable *observerInfo;
@property (retain, nonatomic) NSMutableSet *runningPromises;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) AMSEngagementConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)notificationCenter;
+ (void)_recordLoggingEventWithBag:(id)bag enqueueData:(id)data eventType:(id)type userInfo:(id)info destinations:(id)destinations error:(id)error;
+ (id)_connection;
+ (id)_engagementQueue;
+ (id)_notifyQueue;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

/* instance methods */
- (id)enqueueMessageEvent:(id)event;
- (void)handleDialogResult:(id)result;
- (id)init;
- (id)initWithBag:(id)bag;
- (void)dealloc;
- (id)contentInfoForApp:(id)app cacheKey:(id)key version:(id)version;
- (id)enqueueEvent:(id)event;
- (id)enqueueData:(id)data;
- (id)sync;
- (id)syncDestinations:(id)destinations;
- (id)syncWithRequest:(id)request;
- (id)treatmentStoreService;
- (id)syncMetricsIdentifiers;
- (id)_createCombinedLogKey;
- (void)addObserver:(id)observer placement:(id)placement serviceType:(id)type;
- (void)addObserver:(id)observer placements:(id)placements serviceType:(id)type;
- (void)addObserver:(id)observer placement:(id)placement serviceType:(id)type queue:(id)queue;
- (void)addObserver:(id)observer placements:(id)placements serviceType:(id)type queue:(id)queue;
- (void)removeObserver:(id)observer placement:(id)placement serviceType:(id)type;
- (void)_observeNotifications;
- (void)_manageRunningPromise:(id)promise;
- (void)_removeRunningPromise:(id)promise;
- (void)_failAllRunningPromisesWithError:(id)error;
- (id)_parseActions:(id)actions;
- (void)_pushEventReceived:(id)received;
- (void)handlePushEvent:(id)event;
- (void)_handleServiceResponse:(id)response;
- (void)_connectionErrorNotification;
- (void)_scheduleSyncIfNeeded:(id)needed;
@end

#endif /* AMSEngagement_h */
