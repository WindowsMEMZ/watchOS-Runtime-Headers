//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBiomeEventManager_h
#define HMDBiomeEventManager_h
@import Foundation;

#include "HMFObject.h"

@class BMHomeKitClientAccessoryControlStream, BMHomeKitClientActionSetStream, BMHomeKitClientMediaAccessoryControlStream, NSNotificationCenter;
@protocol OS_dispatch_queue;

@interface HMDBiomeEventManager : HMFObject

@property (readonly) BMHomeKitClientActionSetStream *actionSetStream;
@property (readonly) BMHomeKitClientMediaAccessoryControlStream *mediaAccessoryStream;
@property (readonly) BMHomeKitClientAccessoryControlStream *hapAccessoryStream;
@property (readonly) id /* block */ prunableStreamFactory;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

/* instance methods */
- (id)initWithNotificationCenter:(id)center actionSetStream:(id)stream mediaAccessoryStream:(id)stream accessoryStream:(id)stream prunableStreamFactory:(id /* block */)factory workQueue:(id)queue;
- (id)init;
- (void)_handleHomeRemovedNotification:(id)notification;
- (void)_handleAccessoryRemovedNotification:(id)notification;
- (void)_handleServiceRemovedNotification:(id)notification;
- (void)_handleActionSetEmptiedNotification:(id)notification;
- (void)fetchMostRecentEventWithCharacteristicType:(id)type serviceType:(id)type homeSPIClientIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)deleteAllEvents;
- (void)submitActionSetEvent:(id)event;
- (void)_submitActionSetEvent:(id)event;
- (void)submitAccessoryEvent:(id)event;
- (void)_submitAccessoryEvent:(id)event;
- (void)submitMediaAccessoryEvent:(id)event;
- (void)_submitMediaAccessoryEvent:(id)event;
@end

#endif /* HMDBiomeEventManager_h */
