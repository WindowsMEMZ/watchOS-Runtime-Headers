//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentDocumentSubmissionController_h
#define PKPeerPaymentDocumentSubmissionController_h
@import Foundation;

#include "PKPaymentDocumentSubmissionController.h"
#include "PKPeerPaymentAccountResolutionController.h"
#include "PKPeerPaymentAccountResolutionControllerDelegate-Protocol.h"

@class NSString, PKPeerPaymentIdentityVerificationResponse, PKPeerPaymentWebService;

@interface PKPeerPaymentDocumentSubmissionController : PKPaymentDocumentSubmissionController<PKPeerPaymentAccountResolutionControllerDelegate>

@property (retain, nonatomic) PKPeerPaymentWebService *webService;
@property (retain, nonatomic) PKPeerPaymentIdentityVerificationResponse *identityVerificationResponse;
@property (retain, nonatomic) PKPeerPaymentAccountResolutionController *accountResolutionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPeerPaymentWebService:(id)service identityVerificationResponse:(id)response setupDelegate:(id)delegate context:(long long)context;
- (void)uploadID;
- (void)contactApplePressed;
- (void)peerPaymentAccountResolutionController:(id)controller requestsPresentViewController:(id)controller animated:(BOOL)animated;
- (void)peerPaymentAccountResolutionController:(id)controller requestsDismissCurrentViewControllerAnimated:(BOOL)animated;
@end

#endif /* PKPeerPaymentDocumentSubmissionController_h */
