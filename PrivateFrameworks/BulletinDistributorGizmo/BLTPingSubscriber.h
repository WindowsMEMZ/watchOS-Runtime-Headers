//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPingSubscriber_h
#define BLTPingSubscriber_h
@import Foundation;

#include "BLTPingService-Protocol.h"
#include "BLTPingSubscribing-Protocol.h"

@class NSMutableDictionary, NSString;

@interface BLTPingSubscriber : NSObject<BLTPingSubscribing> {
  /* instance variables */
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *pingHandlers;
@property (retain, nonatomic) NSObject<BLTPingService> *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithService:(id)service;
- (id)init;
- (void)dealloc;
- (void)pingSubscriberDidLoad;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)subscriptionInfos;
- (void)unsubscribeFromSectionID:(id)id;
- (void)_subscribeToSectionID:(id)id pingHandler:(id)handler ackType:(unsigned long long)type forFullBulletins:(BOOL)bulletins;
- (void)_subscribeToSectionID:(id)id pingHandler:(id)handler ackType:(unsigned long long)type forFullBulletins:(BOOL)bulletins forNotifications:(BOOL)notifications;
- (void)subscribeToSectionID:(id)id withPingHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withPingAckHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withPingAckForwardHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withBulletinHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withBulletinAckHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withBulletinAckForwardHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withBulletinAckForwardForAnyConnectionHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withNotificationHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withNotificationAckHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withNotificationAckForwardHandler:(id /* block */)handler;
- (void)subscribeToSectionID:(id)id withNotificationAckForwardForAnyConnectionHandler:(id /* block */)handler;
- (void)pingWithBulletin:(id)bulletin;
- (void)pingWithBulletin:(id)bulletin ack:(id /* block */)ack;
- (void)pingWithRecordID:(id)id forSectionID:(id)id;
- (void)pingWithRecordID:(id)id forSectionID:(id)id ack:(id /* block */)ack;
- (void)sendBulletinSummary:(id)summary forBulletin:(id)bulletin destinations:(unsigned long long)destinations;
- (void)getWillNanoPresentNotificationForSectionID:(id)id completion:(id /* block */)completion;
- (void)getWillNanoPresentNotificationForSectionID:(id)id subsectionIDs:(id)ids completion:(id /* block */)completion;
- (void)subscribeWithMachServiceName:(id)name;
@end

#endif /* BLTPingSubscriber_h */
