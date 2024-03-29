//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountSupportTopicsSectionController_h
#define PKAccountSupportTopicsSectionController_h
@import Foundation;

#include "PKPaymentSetupListSectionController.h"
#include "PKAccountSupportTopicsSectionControllerDelegate-Protocol.h"

@class NSArray, NSString, PKAccount;

@interface PKAccountSupportTopicsSectionController : PKPaymentSetupListSectionController {
  /* instance variables */
  NSObject<PKAccountSupportTopicsSectionControllerDelegate> *_delegate;
  PKAccount *_account;
  NSArray *_topics;
  NSString *_sectionTitle;
}

/* instance methods */
- (id)initWithAccount:(id)account topics:(id)topics sectionTitle:(id)title delegate:(id)delegate;
- (id)headerAttributedStringForIdentifier:(id)identifier;
- (id)snapshotWithPreviousSnapshot:(id)snapshot forSectionIdentifier:(id)identifier;
- (Class)supplementaryRegistrationClassForKind:(id)kind sectionIdentifier:(id)identifier;
- (id)layoutWithLayoutEnvironment:(id)environment sectionIdentifier:(id)identifier;
- (void)didSelectItem:(id)item;
- (id)_decorateListCell:(id)cell forRowItem:(id)item;
@end

#endif /* PKAccountSupportTopicsSectionController_h */
