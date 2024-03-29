//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKNanoPassDaemonConnectionProtocol_Protocol_h
#define NPKNanoPassDaemonConnectionProtocol_Protocol_h
@import Foundation;

@protocol NPKNanoPassDaemonConnectionProtocol <PDXPCServiceExportedInterface>
/* instance methods */
- (void)handleMetadataRequestOnPairedDevice:(id)device withAssociatedApplicationIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)handleApplicationRedirectRequestOnPairedDeviceForPaymentPass:(id)pass transaction:(id)transaction;
- (void)canAcceptInvitationOnRemoteDeviceForInvitation:(id)invitation completion:(id /* block */)completion;
- (void)startSubcredentialProvisioningOnRemoteDeviceForInvitation:(id)invitation;
- (void)startSubcredentialProvisioningOnRemoteDeviceForMailboxAddress:(id)address activationCode:(id)code;
- (void)startSubcredentialProvisioningOnLocalDeviceMatchingInvitation:(id)invitation shouldFetchAnonymizationSaltFromRemoteDevice:(BOOL)device completion:(id /* block */)completion;
- (void)identityPassPrearmStatusWithCompletion:(id /* block */)completion;
- (void)noteWillDeleteAccountsWithCompletion:(id /* block */)completion;
- (void)addUserNotificationOfType:(unsigned long long)type passUniqueID:(id)id completion:(id /* block */)completion;
- (void)canNotifyAboutExpressModeWithCompletion:(id /* block */)completion;
- (void)fetchRelevantPassTuplesWithCompletion:(id /* block */)completion;
@end

#endif /* NPKNanoPassDaemonConnectionProtocol_Protocol_h */
