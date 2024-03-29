//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterUserInfoSectionController_h
#define PKPayLaterUserInfoSectionController_h
@import Foundation;

#include "PKPayLaterSectionController.h"
#include "PKPayLaterSubtitleRow.h"
#include "PKPayLaterUserInfoSectionControllerDelegate-Protocol.h"

@class PKPayLaterAccountUserInfo, PKPaymentWebService;

@interface PKPayLaterUserInfoSectionController : PKPayLaterSectionController {
  /* instance variables */
  NSObject<PKPayLaterUserInfoSectionControllerDelegate> *_delegate;
  PKPayLaterAccountUserInfo *_userInfo;
  PKPaymentWebService *_paymentWebService;
  PKPayLaterSubtitleRow *_phoneRow;
  PKPayLaterSubtitleRow *_addressRow;
  PKPayLaterSubtitleRow *_incomeRow;
  BOOL _processingRowTap;
}

/* instance methods */
- (id)initWithPayLaterAccount:(id)account delegate:(id)delegate;
- (void)setPayLaterAccount:(id)account;
- (id)identifiers;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (id)footerContentForSectionIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (void)_configureEmailAddressSection:(id)section;
- (void)_configureOtherUserInfoSection:(id)section;
- (id)_legalNameRow;
- (id)_dobRow;
- (id)_phoneNumberRow;
- (id)_addressRow;
- (id)_ssnRow;
- (id)_yearlyIncomeRow;
- (id)_subtitleRowWithTitle:(id)title subtitle:(id)subtitle selectionHandler:(id /* block */)handler;
- (void)_updateUserInfo;
@end

#endif /* PKPayLaterUserInfoSectionController_h */
