//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 491.7.0.0.0
//
#ifndef IDSServiceDelegate_Protocol_h
#define IDSServiceDelegate_Protocol_h
@import Foundation;

@protocol IDSServiceDelegate <NSObject>
@optional
/* instance methods */
- (void)service:(id)service account:(id)account incomingOpportunisticData:(id)data withIdentifier:(id)identifier fromID:(id)id context:(id)context;
- (void)service:(id)service didSendOpportunisticDataWithIdentifier:(id)identifier toIDs:(id)ids;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account incomingData:(id)data fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account incomingUnhandledProtobuf:(id)protobuf fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account incomingResourceAtURL:(id)url fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account incomingResourceAtURL:(id)url metadata:(id)metadata fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account pendingResourceWithMetadata:(id)metadata fromID:(id)id acknowledgementBlock:(id /* block */)block context:(id)context;
- (void)service:(id)service account:(id)account incomingPendingMessageOfType:(long long)type fromID:(id)id context:(id)context;
- (void)service:(id)service activeAccountsChanged:(id)changed;
- (void)service:(id)service devicesChanged:(id)changed;
- (void)service:(id)service nearbyDevicesChanged:(id)changed;
- (void)service:(id)service connectedDevicesChanged:(id)changed;
- (void)service:(id)service linkedDevicesChanged:(id)changed;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error context:(id)context;
- (void)service:(id)service account:(id)account identifier:(id)identifier sentBytes:(long long)bytes totalBytes:(long long)bytes;
- (void)service:(id)service account:(id)account identifier:(id)identifier hasBeenDeliveredWithContext:(id)context;
- (void)service:(id)service account:(id)account identifier:(id)identifier fromID:(id)id hasBeenDeliveredWithContext:(id)context;
- (void)service:(id)service account:(id)account inviteReceivedForSession:(id)session fromID:(id)id;
- (void)service:(id)service account:(id)account inviteReceivedForSession:(id)session fromID:(id)id withOptions:(id)options;
- (void)service:(id)service account:(id)account inviteReceivedForSession:(id)session fromID:(id)id withContext:(id)context;
- (void)service:(id)service account:(id)account receivedGroupSessionParticipantUpdate:(id)update;
- (void)service:(id)service account:(id)account receivedGroupSessionParticipantUpdate:(id)update context:(id)context;
- (void)service:(id)service account:(id)account receivedGroupSessionParticipantDataUpdate:(id)update;
- (void)serviceSpaceDidBecomeAvailable:(id)available;
- (void)serviceAllowedTrafficClassifiersDidReset:(id)reset;
- (void)service:(id)service didSwitchActivePairedDevice:(id)device acknowledgementBlock:(id /* block */)block;
- (void)service:(id)service didCancelMessageWithSuccess:(BOOL)success error:(id)error identifier:(id)identifier;
@end

#endif /* IDSServiceDelegate_Protocol_h */
