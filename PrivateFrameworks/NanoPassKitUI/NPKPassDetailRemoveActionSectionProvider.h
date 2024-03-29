//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailRemoveActionSectionProvider_h
#define NPKPassDetailRemoveActionSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@interface NPKPassDetailRemoveActionSectionProvider : NPKPassDetailSectionProvider
/* instance methods */
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)_removeItem;
- (BOOL)_shouldDisplayRemoveAction;
- (void)_confirmRemovalWithViewController:(id)controller;
- (id)_confirmRemovalWithValueRemainingAlertSheetControllerWithRemovalHandler:(id /* block */)handler;
- (id)_confirmRemovalAlertSheetControllerWithRemovalHandler:(id /* block */)handler;
- (id)_confirmRemovalAlertSheetControllerWithMessage:(id)message removalHandler:(id /* block */)handler;
- (id)_unableToDeleteAlertSheetController;
@end

#endif /* NPKPassDetailRemoveActionSectionProvider_h */
