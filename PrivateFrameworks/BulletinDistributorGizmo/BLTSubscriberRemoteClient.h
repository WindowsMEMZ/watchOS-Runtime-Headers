//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTSubscriberRemoteClient_h
#define BLTSubscriberRemoteClient_h
@import Foundation;

#include "BLTPingSubscribing-Protocol.h"

@class NSString, NSXPCConnection;

@interface BLTSubscriberRemoteClient : NSObject<BLTPingSubscribing>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConnection:(id)connection;
- (void)pingSubscriberDidLoad;
- (void)dealloc;
- (id)sectionIDs;
- (id)sectionIDsForBulletins;
- (id)subscriptionInfos;
- (void)pingWithRecordID:(id)id forSectionID:(id)id;
- (void)pingWithRecordID:(id)id forSectionID:(id)id ack:(id /* block */)ack;
- (void)pingWithBulletin:(id)bulletin;
- (void)pingWithBulletin:(id)bulletin ack:(id /* block */)ack;
@end

#endif /* BLTSubscriberRemoteClient_h */
