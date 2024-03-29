//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSubcredentialProvisioningAcceptRemoteInvitationOperation_h
#define PKSubcredentialProvisioningAcceptRemoteInvitationOperation_h
@import Foundation;

#include "PKSubcredentialProvisioningOperation.h"
#include "PKAppletSubcredentialSharingInvitation.h"
#include "PKPaymentWebService.h"
#include "PKPaymentWebServiceTargetDeviceProtocol-Protocol.h"

@interface PKSubcredentialProvisioningAcceptRemoteInvitationOperation : PKSubcredentialProvisioningOperation {
  /* instance variables */
  PKPaymentWebService *_remoteDeviceWebService;
  PKPaymentWebService *_localDeviceWebService;
  NSObject<PKPaymentWebServiceTargetDeviceProtocol> *_remoteTargetDevice;
  NSObject<PKPaymentWebServiceTargetDeviceProtocol> *_localTargetDevice;
  PKAppletSubcredentialSharingInvitation *_invitation;
}

/* class methods */
+ (BOOL)canDeviceAcceptInvitation:(id)invitation;

/* instance methods */
- (id)initWithConfiguration:(id)configuration context:(id)context delegate:(id)delegate;
- (void)performOperation;
- (void)acceptIDSInvitation;
- (void)acceptCrossPlatformInvitation;
- (void)canAcceptInvitation:(id)invitation withCompletion:(id /* block */)completion;
- (void)getMatchingInvitation:(id)invitation withCompletion:(id /* block */)completion;
- (void)metadataForInvitation:(id)invitation withCompletion:(id /* block */)completion;
- (void)acceptInvitation:(id)invitation withMetadata:(id)metadata;
- (void)_handleAcceptInviteResponseWithPass:(id)pass error:(id)error;
@end

#endif /* PKSubcredentialProvisioningAcceptRemoteInvitationOperation_h */
