//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKManageBarcodePassNotificationsViewController_h
#define PKManageBarcodePassNotificationsViewController_h
@import Foundation;

#include "PKDynamicTableViewController.h"
#include "PKBarcodePassDetailsNotificationSettingsSectionController.h"
#include "PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate-Protocol.h"

@class NSString, PKPass;

@interface PKManageBarcodePassNotificationsViewController : PKDynamicTableViewController<PKBarcodePassDetailsNotificationSettingsSectionControllerDelegate> {
  /* instance variables */
  PKPass *_pass;
  PKBarcodePassDetailsNotificationSettingsSectionController *_notificationsSectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)canShowForPass:(id)pass;

/* instance methods */
- (id)initWithPass:(id)pass;
- (void)recomputeMappedSectionsAndReloadSections:(id)sections;
@end

#endif /* PKManageBarcodePassNotificationsViewController_h */
