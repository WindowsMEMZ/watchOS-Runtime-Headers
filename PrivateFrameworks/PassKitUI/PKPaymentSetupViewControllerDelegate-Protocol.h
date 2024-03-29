//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupViewControllerDelegate_Protocol_h
#define PKPaymentSetupViewControllerDelegate_Protocol_h
@import Foundation;

@protocol PKPaymentSetupViewControllerDelegate <NSObject>
/* instance methods */
- (void)viewControllerDidTerminateSetupFlow:(id)flow;
@optional
/* instance methods */
- (void)viewControllerDidBeginSetupFlow:(id)flow;
- (void)viewControllerDidCancelSetupFlow:(id)flow;
- (void)viewController:(id)controller didShowProvisioningError:(id)error;
- (void)viewControllerDidShowEligibilityIssue:(id)issue;
- (void)viewController:(id)controller willPerformPasscodeUpgradeWithCompletionHandler:(id /* block */)handler;
- (void)viewController:(id)controller requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)controller completion:(id /* block */)completion;
- (void)viewController:(id)controller didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)controller withShouldContinue:(BOOL)continue error:(id)error;
- (void)viewControllerWillPresentChangePasscodeComplex:(id)complex;
- (void)viewControllerDidFinishChangingPasscodeComplex:(id)complex;
- (void)viewControllerDidFailToChangePasscodeComplex:(id)complex;
- (void)viewController:(id)controller requestPasscodeUpgradeWithCompletion:(id /* block */)completion;
- (void)viewController:(id)controller didExitPasscodeUpgradeWithShouldContinue:(BOOL)continue error:(id)error;
- (void)viewController:(id)controller canProceedWithInstallment:(BOOL)installment featureApplication:(id)application completion:(id /* block */)completion;
- (void)viewController:(id)controller didFinishWithPasses:(id)passes error:(id)error;
- (BOOL)viewController:(id)controller requestsReturnToPresentationMarker:(unsigned long long)marker reset:(BOOL)reset;
- (void)viewController:(id)controller entitlementSelectionDidChange:(id)change;
- (void)viewController:(id)controller requestPresentPassUniqueIdentifier:(id)identifier completion:(id /* block */)completion;
@end

#endif /* PKPaymentSetupViewControllerDelegate_Protocol_h */
