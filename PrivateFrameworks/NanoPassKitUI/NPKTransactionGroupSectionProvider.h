//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKTransactionGroupSectionProvider_h
#define NPKTransactionGroupSectionProvider_h
@import Foundation;

#include "NPKPassDetailSectionProvider.h"

@class NSArray, NSDateFormatter, NSHashTable, PKTransactionSourceCollection;

@interface NPKTransactionGroupSectionProvider : NPKPassDetailSectionProvider {
  /* instance variables */
  PKTransactionSourceCollection *_transactionSourceCollection;
}

@property (retain, nonatomic) NSArray *transactions;
@property (retain, nonatomic) NSArray *transactionSections;
@property (retain, nonatomic) NSHashTable *pushedViewControllers;
@property (retain, nonatomic) NSDateFormatter *transactionMonthFormatter;

/* class methods */
+ (Class)configurationClass;
+ (id)transactionGroupConfigurationForConfiguration:(id)configuration;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)sectionIdentifiers;
- (id)transactionGroup;
- (id)titleForSectionWithIdentifier:(id)identifier;
- (id)itemsForSectionWithIdentifier:(id)identifier;
- (void)_updateWithConfiguration:(id)configuration previousConfiguration:(id)configuration;
- (void)_fetchTransactions;
- (void)_fetchTransactionsWithSourceIdentifiers:(id)identifiers;
- (void)_createTransactionItems;
- (void)_handleTransactionsChanged;
- (id)_transactionMonthFormatter;
@end

#endif /* NPKTransactionGroupSectionProvider_h */
