//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPRecoveryKeyEntryViewModel_h
#define CDPRecoveryKeyEntryViewModel_h
@import Foundation;

#include "CDPEscapeOption.h"
#include "CDPRemoteValidationEscapeOffer.h"

@class CDPContext;
@protocol CDPRecoveryKeyValidator, CDPRemoteDeviceSecretValidatorProtocol;

@interface CDPRecoveryKeyEntryViewModel : NSObject {
  /* instance variables */
  NSObject<CDPRecoveryKeyValidator> *_validator;
  NSObject<CDPRemoteDeviceSecretValidatorProtocol> *_secretValidator;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) int mode;
@property BOOL shouldSuppressCancelButton;
@property BOOL isFooterForVerifyFlow;
@property BOOL isFooterForMismatchRepairFlow;
@property (nonatomic) BOOL isWalrusEnabled;
@property (readonly, nonatomic) BOOL isFooterButtonForOtherRecoveryOptions;
@property (retain, nonatomic) CDPEscapeOption *custodianRecoveryEscapeOption;
@property (retain, nonatomic) CDPRemoteValidationEscapeOffer *deleteiCloudDataEscapeOffer;
@property (retain, nonatomic) CDPContext *context;

/* instance methods */
- (id)initWithContext:(id)context validator:(id)validator mode:(int)mode;
- (id)initWithContext:(id)context validator:(id)validator;
- (id)footerButtonTitle;
- (id)footerLabelText;
- (id)headerTitle;
- (id)headerSubtitle;
- (id)placeholderText;
- (id)recoveryKey;
- (void)processCollectedRecoveryKey:(id)key completion:(id /* block */)completion;
- (void)handleCancel;
- (void)handleForgotRecoveryKeyWithCDPStateError:(long long)error;
- (void)handleNoRecoveryKeyWithCDPStateError:(long long)error;
- (BOOL)supportsRKRecovery;
- (BOOL)mandatesRecoveryKey;
- (BOOL)isDataRecoveryFlow;
@end

#endif /* CDPRecoveryKeyEntryViewModel_h */
