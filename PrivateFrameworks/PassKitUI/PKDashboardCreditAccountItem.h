//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDashboardCreditAccountItem_h
#define PKDashboardCreditAccountItem_h
@import Foundation;

#include "PKContactAvatarManager.h"
#include "PKDashboardItem-Protocol.h"

@class NSArray, NSSet, NSString, PKAccount, PKAccountUserCollection, PKFamilyMemberCollection, PKSpendingSummary, PKSpendingSummaryFetcher, PKTransactionSourceCollection;

@interface PKDashboardCreditAccountItem : NSObject<PKDashboardItem>

@property (readonly, nonatomic) PKAccount *account;
@property (readonly, nonatomic) PKAccountUserCollection *accountUserCollection;
@property (readonly, nonatomic) NSSet *physicalCards;
@property (retain, nonatomic) PKTransactionSourceCollection *transactionSourceCollection;
@property (retain, nonatomic) PKFamilyMemberCollection *familyCollection;
@property (retain, nonatomic) PKContactAvatarManager *avatarManager;
@property (readonly, nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *weeks;
@property (retain, nonatomic) NSArray *months;
@property (retain, nonatomic) NSArray *years;
@property (retain, nonatomic) PKSpendingSummary *summary;
@property (retain, nonatomic) PKSpendingSummaryFetcher *summaryFetcher;
@property (retain, nonatomic) NSArray *mostRecentTransactions;
@property (retain, nonatomic) NSArray *pendingPayments;
@property (retain, nonatomic) NSArray *upcomingScheduledPayments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)identifier;

/* instance methods */
- (id)initWithAccount:(id)account accountUserCollection:(id)collection physicalCards:(id)cards transactionSourceCollection:(id)collection familyCollection:(id)collection avatarManager:(id)manager type:(unsigned long long)type;
@end

#endif /* PKDashboardCreditAccountItem_h */
