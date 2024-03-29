//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSPhoneCertificateVendor_h
#define IDSPhoneCertificateVendor_h
@import Foundation;

#include "IDSDaemonListenerProtocol-Protocol.h"
#include "IDSDaemonRequestTimer.h"
#include "IDSPhoneCertificateVendor.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface IDSPhoneCertificateVendor : NSObject<IDSDaemonListenerProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IDSPhoneCertificateVendor *strongSelfReference;
@property (readonly, nonatomic) IDSDaemonRequestTimer *daemonRequestTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)requestCarrierTokenWithMessageBody:(id)body completion:(id /* block */)completion;
- (void)setCurrentPhoneUserSubscriptionSource:(long long)source completion:(id /* block */)completion;
- (void)requestCurrentPhoneUserSubscriptionSourceWithCompletion:(id /* block */)completion;
- (long long)currentPhoneUserSubscriptionSourceWithError:(id *)error;
- (id)_scheduleTimeoutForPhoneSubscriptionSourceCompletionBlock:(id /* block */)block;
- (void)didSetPhoneUserSubscriptionSource:(id)source requestUUID:(id)uuid error:(id)error;
- (void)didFetchPhoneUserSubscriptionSource:(id)source requestUUID:(id)uuid error:(id)error;
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)authenticatePhoneWithCompletion:(id /* block */)completion;
- (void)generatePhoneAuthenticationSignatureOverData:(id)data withCompletion:(id /* block */)completion;
- (void)requestCarrierTokenWithParameters:(id)parameters completion:(id /* block */)completion;
- (void)_updateSelfRetentionBasedOnInFlightRequestCount;
- (BOOL)_isPhoneCertificateVendorSupported;
- (id)_debugDescriptionForErrorCode:(long long)code;
- (id)_clientErrorForCode:(long long)code underlyingError:(id)error;
- (void)didAuthenticatePhoneWithAuthenticationCertificateData:(id)data requestUUID:(id)uuid error:(id)error;
- (void)didGeneratePhoneAuthenticationSignature:(id)signature nonce:(id)nonce certificates:(id)certificates labelIDs:(id)ids inputData:(id)data requestUUID:(id)uuid error:(id)error;
- (void)didRequestCarrierTokenString:(id)string requestUUID:(id)uuid error:(id)error;
- (long long)_subscriptionSourceFromIntegerValue:(long long)value;
- (long long)_subscriptionSourceForContext:(id)context;
- (id)_scheduleTimeoutForPhoneAuthenticationSignatureRequestCompletionBlock:(id /* block */)block;
- (id)_scheduleTimeoutForPhoneAuthenticationCertificateRequestCompletionBlock:(id /* block */)block;
- (id)_scheduleTimeoutForCarrierTokenCompletionBlock:(id /* block */)block;
@end

#endif /* IDSPhoneCertificateVendor_h */
