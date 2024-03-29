//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKAMessagingProvider_h
#define SKAMessagingProvider_h
@import Foundation;

#include "IDSServiceDelegate-Protocol.h"
#include "SKAMessagingProviding-Protocol.h"
#include "SKAMessagingProvidingDelegate-Protocol.h"
#include "SKAPushManaging-Protocol.h"

@class IDSService, NSArray, NSMutableDictionary, NSString;

@interface SKAMessagingProvider : NSObject<IDSServiceDelegate, SKAMessagingProviding>

@property (retain, nonatomic) IDSService *service;
@property (retain, nonatomic) NSObject<SKAPushManaging> *pushManager;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (retain, nonatomic) NSMutableDictionary *registeredIDSDeviceChangedObservers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAMessagingProvidingDelegate> *delegate;
@property (readonly, nonatomic) NSArray *idsDevices;

/* class methods */
+ (id)_noValidIDSDetintationError;
+ (id)logger;

/* instance methods */
- (id)initWithDelegate:(id)delegate serviceIdentifier:(id)identifier pushManager:(id)manager queue:(id)queue;
- (BOOL)sendMessage:(id)message toHandle:(id)handle fromHandle:(id)handle limitToPresenceCapable:(BOOL)capable identifier:(id *)identifier error:(id *)error;
- (BOOL)sendMessage:(id)message toHandles:(id)handles fromHandle:(id)handle limitToPresenceCapable:(BOOL)capable identifier:(id *)identifier error:(id *)error;
- (BOOL)sendMessageToSelfDevices:(id)devices limitToPresenceCapable:(BOOL)capable identifier:(id *)identifier error:(id *)error;
- (void)isHandleMessageable:(id)messageable completion:(id /* block */)completion;
- (void)isHandleMessageableForPresence:(id)presence completion:(id /* block */)completion;
- (BOOL)isHandleAvailableToMessageFrom:(id)from;
- (BOOL)isFromIDFromSelfAccount:(id)account;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error context:(id)context;
- (void)service:(id)service didHintCheckingTransportLogWithReason:(long long)reason;
- (id)resolveSenderHandleWithPreferredSenderHandle:(id)handle;
- (id)tokenURI;
- (BOOL)isValidURI:(id)uri;
- (id)selfAddressedURIForURI:(id)uri;
- (id)deviceToken;
- (id)deviceTokenForTokenURI:(id)uri;
- (id)handleForTokenURI:(id)uri;
- (void)signPayload:(id)payload completion:(id /* block */)completion;
- (void)verifySignedPayload:(id)payload matchesPayload:(id)payload fromTokenURI:(id)uri completion:(id /* block */)completion;
- (void)service:(id)service devicesChanged:(id)changed;
- (BOOL)_keysharingIsDisabledByServer;
- (BOOL)_selfSharingIsDisabledByServer;
- (id)registerIDSDeviceChangedObserver:(id /* block */)observer;
- (void)unregisterIDSDeviceChangedObserver:(id)observer;
@end

#endif /* SKAMessagingProvider_h */
