//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PDPassLibraryInAppExportedInterface_Protocol_h
#define PDPassLibraryInAppExportedInterface_Protocol_h
@import Foundation;

@protocol PDPassLibraryInAppExportedInterface <PDPassLibraryExportedInterface>
/* instance methods */
- (void)hasInAppPaymentPassesForNetworks:(id)networks capabilities:(unsigned long long)capabilities issuerCountryCodes:(id)codes paymentRequestType:(id)type isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)inAppPaymentPassesForNetworks:(id)networks capabilities:(unsigned long long)capabilities issuerCountryCodes:(id)codes paymentRequestType:(id)type isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)identifier issuerCountryCodes:(id)codes isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)identifier issuerCountryCodes:(id)codes isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)inAppPrivateLabelPaymentPassesForWebDomain:(id)domain issuerCountryCodes:(id)codes isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)domain issuerCountryCodes:(id)codes isMultiTokensRequest:(BOOL)request withHandler:(id /* block */)handler;
- (void)canPresentPaymentRequest:(id)request completion:(id /* block */)completion;
- (void)hasPassesWithSupportedNetworks:(id)networks merchantCapabilities:(unsigned long long)capabilities webDomain:(id)domain issuerCountryCodes:(id)codes paymentRequestType:(id)type isMultiTokensRequest:(BOOL)request completion:(id /* block */)completion;
@end

#endif /* PDPassLibraryInAppExportedInterface_Protocol_h */
