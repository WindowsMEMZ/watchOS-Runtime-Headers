//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailPaymentApplicationSectionProvider_h
#define NPKPassDetailPaymentApplicationSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@class PKPaymentApplication;

@interface NPKPassDetailPaymentApplicationSectionProvider : NPKPassDetailSectionProvider

@property (retain, nonatomic) PKPaymentApplication *preferredPaymentApplication;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)titleForSectionWithIdentifier:(id)identifier;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (BOOL)isSectionWithIdentifierRadioSection:(id)section;
- (id)selectedItemIdentifierForRadioSectionWithIdentifier:(id)identifier;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (void)_handleDefaultPaymentApplicationChangedNotification:(id)notification;
@end

#endif /* NPKPassDetailPaymentApplicationSectionProvider_h */
