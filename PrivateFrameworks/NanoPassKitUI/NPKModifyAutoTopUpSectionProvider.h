//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKModifyAutoTopUpSectionProvider_h
#define NPKModifyAutoTopUpSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@class NSDecimalNumber, PKPaymentPass;

@interface NPKModifyAutoTopUpSectionProvider : NPKPassDetailSectionProvider

@property (retain, nonatomic) NSDecimalNumber *existingAmount;
@property (retain, nonatomic) NSDecimalNumber *existingThreshold;
@property (retain, nonatomic) PKPaymentPass *existingPass;
@property (nonatomic) BOOL continueEnabled;

/* class methods */
+ (Class)configurationClass;
+ (id)autoTopUpConfigurationForConfiguration:(id)configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (id)_continueSectionProviderHandler;
- (id)_cancelSectionProviderHandler;
@end

#endif /* NPKModifyAutoTopUpSectionProvider_h */
