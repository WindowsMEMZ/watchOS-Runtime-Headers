//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPaymentAutoReloadSetupSectionController_h
#define PKPaymentAutoReloadSetupSectionController_h
@import Foundation;

#include "PKPaymentPassDetailSectionController.h"
#include "PKPaymentPassDetailAutoReloadActionSectionControllerDelegate-Protocol.h"

@interface PKPaymentAutoReloadSetupSectionController : PKPaymentPassDetailSectionController {
  /* instance variables */
  NSObject<PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> *_delegate;
}

/* class methods */
+ (BOOL)validForPaymentPass:(id)pass;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)allSectionIdentifiers;
- (id)sectionIdentifiers;
- (long long)tableView:(id)view numberOfRowsInSectionIdentifier:(id)identifier;
- (id)titleForFooterInSectionIdentifier:(id)identifier;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path sectionIdentifier:(id)identifier;
@end

#endif /* PKPaymentAutoReloadSetupSectionController_h */
