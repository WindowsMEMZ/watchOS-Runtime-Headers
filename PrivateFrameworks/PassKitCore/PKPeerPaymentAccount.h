//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentAccount_h
#define PKPeerPaymentAccount_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "PKCurrencyAmount.h"
#include "PKPeerPaymentAdditionalPushTopics.h"
#include "PKPeerPaymentAssociatedAccountInformation.h"

@class NSArray, NSDate, NSDecimalNumber, NSDictionary, NSSet, NSString, NSURL;

@interface PKPeerPaymentAccount : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *minimumTransferAmounts;
@property (readonly, nonatomic) NSDictionary *maximumTransferAmounts;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long role;
@property (copy, nonatomic) NSDate *createdDate;
@property (copy, nonatomic) NSDate *identifiedDate;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long stateReason;
@property (nonatomic) unsigned long long personToPersonRestrictionType;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) PKCurrencyAmount *currentBalance;
@property (copy, nonatomic) NSDecimalNumber *maximumBalance;
@property (nonatomic) BOOL identityVerificationRequired;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) double proactiveFetchPeriod;
@property (nonatomic) double accountFetchAfterTransactionWaitPeriod;
@property (nonatomic) double accountFetchAfterTransactionWaitTolerance;
@property (nonatomic) BOOL termsAcceptanceRequired;
@property (copy, nonatomic) NSString *termsIdentifier;
@property (copy, nonatomic) NSURL *termsURL;
@property (copy, nonatomic) NSURL *associatedPassURL;
@property (copy, nonatomic) NSString *associatedPassSerialNumber;
@property (copy, nonatomic) NSString *associatedPassTypeIdentifier;
@property (copy, nonatomic) NSSet *supportedFeatureDescriptors;
@property (nonatomic) long long pendingPaymentCount;
@property (nonatomic) BOOL identityVerificationForDisbursementsRequired;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSSet *cloudStoreZoneNames;
@property (retain, nonatomic) PKPeerPaymentAdditionalPushTopics *additionalPushTopics;
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountInformation *associatedAccountInformation;
@property (nonatomic) BOOL hasDisplayedAssociatedAccountActiveNotification;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (nonatomic) unsigned long long deviceScoreEncryptedPayloadVersion;
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (nonatomic) BOOL accountStateDirty;
@property (nonatomic) BOOL hasRecurringPayments;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (BOOL)supportsLoadFromCard;
- (id)loadFromCardFeatureDescriptor;
- (BOOL)supportsTransferToBank;
- (id)transferToBankFeatureDescriptor;
- (BOOL)supportsSendToUser;
- (id)sendToUserFeatureDescriptor;
- (BOOL)supportsRequestFromUser;
- (id)requestFromUserFeatureDescriptor;
- (BOOL)supportsSendFromWallet;
- (id)sendFromWalletFeatureDescriptor;
- (BOOL)supportsRequestFromWallet;
- (id)requestFromWalletFeatureDescriptor;
- (BOOL)supportsPendingRequestAction;
- (id)pendingRequestActionFeatureDescriptor;
- (BOOL)supportsRecurringPayments;
- (id)recurringPaymentsFeatureDescriptor;
- (BOOL)supportsThresholdTopUp;
- (id)thresholdTopUpFeatureDescriptor;
- (BOOL)supportsCardBalancePromotion;
- (id)cardBalancePromotionFeatureDescriptor;
- (BOOL)supportsInstantWithdrawal;
- (id)instantWithdrawalPromotionFeatureDescriptor;
- (BOOL)supportsAssociatedAccountStateAction;
- (id)associatedAccountStateActionFeatureDescriptor;
- (BOOL)supportsPreserveCurrentBalance;
- (id)preserveCurrentBalanceFeatureDescriptor;
- (BOOL)supportsFamilySharing;
- (id)supportsFamilySharingFeatureDescriptor;
- (BOOL)supportsGraduationWhileAssociatedAccountLocked;
- (id)supportsGraduationWhileAssociatedAccountLockedFeatureDescriptor;
- (id)_featureWithIdentifier:(id)identifier;
- (id)initWithDictionary:(id)dictionary lastUpdated:(id)updated;
- (id)associatedPassUniqueID;
- (id)peerPaymentAccountWithIdentifier:(id)identifier;
- (id)peerPaymentAccountWithAltDSID:(id)dsid;
- (id)accountInvitationWithAltDSID:(id)dsid;
- (BOOL)isAccountOutOfDate;
- (BOOL)areAssociatedAccountsOutOfDate;
- (BOOL)areRecurringPaymentsOutOfDate;
- (BOOL)isParticipantAccountLockedByOwner;
- (BOOL)isPariticipantAccountSecurityDowngraded;
- (BOOL)isPariticipantAccountEmbargoRecovery;
- (BOOL)isEligibleToAddMoneyForUser:(id)user;
- (BOOL)isEligibleToWithdrawForUser:(id)user;
- (BOOL)isEligibleForRecurringPaymentsForUser:(id)user;
- (BOOL)isEligibleForThresholdTopUpForUser:(id)user;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (BOOL)isAccountStateDirty;
@end

#endif /* PKPeerPaymentAccount_h */
