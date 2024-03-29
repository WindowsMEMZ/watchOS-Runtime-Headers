//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentSetupDevicePickerViewController_h
#define PKPaymentSetupDevicePickerViewController_h
@import Foundation;

#include "PKDynamicCollectionViewController.h"
#include "PKPaymentSetupDevicePickerListSectionControllerDelegate-Protocol.h"
#include "PKPaymentSetupDevicePickerViewControllerFlowDelegate-Protocol.h"
#include "PKPaymentSetupViewControllerDelegate-Protocol.h"
#include "PKViewControllerPreflightable-Protocol.h"

@class NSArray, NSString, PKPaymentProvisioningController, PKPaymentSetupProduct, PKPaymentWebService, UIImage;

@interface PKPaymentSetupDevicePickerViewController : PKDynamicCollectionViewController<PKViewControllerPreflightable, PKPaymentSetupDevicePickerListSectionControllerDelegate> {
  /* instance variables */
  PKPaymentProvisioningController *_provisioningController;
  PKPaymentProvisioningController *_bridgeProvisioningController;
  long long _setupContext;
  NSObject<PKPaymentSetupViewControllerDelegate> *_setupDelegate;
  PKPaymentSetupProduct *_product;
  PKPaymentSetupProduct *_nanoProduct;
  NSArray *_webServices;
  PKPaymentWebService *_webService;
  PKPaymentWebService *_nanoWebService;
  UIImage *_cardImage;
}

@property (weak, nonatomic) NSObject<PKPaymentSetupDevicePickerViewControllerFlowDelegate> *flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProvisioningController:(id)controller context:(long long)context setupDelegate:(id)delegate product:(id)product webService:(id)service nanoWebService:(id)service;
- (void)viewDidLoad;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)didSelectWebService:(id)service;
@end

#endif /* PKPaymentSetupDevicePickerViewController_h */
