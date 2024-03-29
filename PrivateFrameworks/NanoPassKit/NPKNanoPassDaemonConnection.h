//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKNanoPassDaemonConnection_h
#define NPKNanoPassDaemonConnection_h
@import Foundation;

#include "PKXPCServiceDelegate-Protocol.h"

@class NSString, PKXPCService;

@interface NPKNanoPassDaemonConnection : NSObject<PKXPCServiceDelegate>

@property (retain, nonatomic) PKXPCService *remoteService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)handleMetadataRequestOnPairedDevice:(id)device withAssociatedApplicationIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(id)pass transaction:(id)transaction;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)invitation completion:(id /* block */)completion;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)invitation;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)address activationCode:(id)code;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)invitation shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)device completion:(id /* block */)completion;
- (void)noteWillDeleteAccountsSynchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)identityPassPrearmStatusSynchronous:(BOOL)synchronous completion:(id /* block */)completion;
- (void)addUserNotificationOfType:(unsigned long long)type passUniqueID:(id)id completion:(id /* block */)completion;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)completion;
- (void)fetchRelevantPassTuplesWithCompletion:(id /* block */)completion;
- (id)_remoteObjectProxySynchronous:(BOOL)synchronous withFailureHandler:(id /* block */)handler;
- (id /* block */)_errorHandlerWithCompletion:(id /* block */)completion;
- (void)remoteService:(id)service didEstablishConnection:(id)connection;
- (void)remoteService:(id)service didInterruptConnection:(id)connection;
- (void)remoteServiceDidResume:(id)resume;
- (void)remoteServiceDidSuspend:(id)suspend;
@end

#endif /* NPKNanoPassDaemonConnection_h */
