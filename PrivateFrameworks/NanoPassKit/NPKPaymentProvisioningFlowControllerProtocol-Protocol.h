//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPaymentProvisioningFlowControllerProtocol_Protocol_h
#define NPKPaymentProvisioningFlowControllerProtocol_Protocol_h
@import Foundation;

@protocol NPKPaymentProvisioningFlowControllerProtocol <NSObject>

@property (weak, nonatomic) NSObject<NPKPaymentProvisioningFlowControllerDelegate> *delegate;

/* instance methods */
- (void)setReaderModeProvisioningSupported:(BOOL)supported;
- (void)setDigitalIssuanceSupported:(BOOL)supported;
- (void)setSeparateLocalDeviceEntryRequired:(BOOL)required;
- (void)reset;
- (void)startProvisioningFlow:(id)flow;
- (void)startIssuerVerificationFlowForPaymentPass:(id)pass requestContext:(id)context;
- (void)startInAppProvisioningFlowWithConfiguration:(id)configuration requestContext:(id)context;
- (void)acknowledgeWelcome:(id)welcome;
- (void)chooseFlowForPickerItem:(id)item requestContext:(id)context;
- (void)chooseProduct:(id)product requestContext:(id)context;
- (void)chooseProduct:(id)product includeCardsOnFile:(BOOL)file requestContext:(id)context;
- (void)handleDigitalIssuanceAmount:(id)amount requestContext:(id)context;
- (void)handleDigitalIssuanceAmount:(id)amount serviceProviderProduct:(id)product item:(id)item requestContext:(id)context;
- (void)chooseReaderMode:(id)mode;
- (void)handleReaderModeFields:(id)fields requestContext:(id)context;
- (void)chooseCredentials:(id)credentials requestContext:(id)context;
- (void)chooseManualEntry:(id)entry;
- (void)handleManualEntryFields:(id)fields credential:(id)credential requestContext:(id)context;
- (void)handleProductSelection:(id)selection requestContext:(id)context;
- (void)handlePasscodeUpgradeCompleteWithSuccess:(BOOL)success error:(id)error requestContext:(id)context;
- (void)acceptTerms:(id)terms;
- (void)skipProvisioning:(id)provisioning;
- (void)acknowledgeMoreInformation:(id)information;
- (void)handleIssuerVerificationChannel:(id)channel requestContext:(id)context;
- (void)handleIssuerVerificationFields:(id)fields requestContext:(id)context;
- (void)handleIssuerVerificationCode:(id)code requestContext:(id)context;
- (void)skipIssuerVerification:(id)verification;
- (void)handleIssuerApplicationAddRequest:(id)request requestContext:(id)context;
- (void)chooseCardsOnFileFlowForProduct:(id)product requestContext:(id)context preloadMetadata:(BOOL)metadata;
- (void)chooseTransitProductFromFlowPickerSection:(id)section requestContext:(id)context;
- (void)chooseEMoneyProductFromFlowPickerSection:(id)section requestContext:(id)context;
- (void)acknowledgeAppleBalanceAccountDetailsWithProduct:(id)product requestContext:(id)context;
- (void)presentTransitServiceProviderProductsWithRequestContext:(id)context;
@end

#endif /* NPKPaymentProvisioningFlowControllerProtocol_Protocol_h */
