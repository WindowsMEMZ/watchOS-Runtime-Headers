//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDuetActivityBudget_h
#define CSLDuetActivityBudget_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "CSLDuetActivityBudgetDataSourceProtocol-Protocol.h"

@class NSCountedSet, NSDate, NSMutableDictionary, NSString;

@interface CSLDuetActivityBudget : NSObject<BSDescriptionProviding>

@property (retain, nonatomic) NSMutableDictionary *subBudgetsByClass;
@property (weak, nonatomic) NSObject<CSLDuetActivityBudgetDataSourceProtocol> *dataSource;
@property (readonly, nonatomic) NSCountedSet *history;
@property (retain, nonatomic) NSDate *lastRefresh;
@property (nonatomic) unsigned long long stateHandler;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithName:(id)name dataSource:(id)source subBudgets:(id)budgets;
- (id)_bestSubBudgetForBundleID:(id)id;
- (BOOL)startActivityForBundleID:(id)id deduct:(BOOL)deduct;
- (BOOL)_checkDeductibleActivityForApp:(id)app takeDeduction:(BOOL)deduction;
- (BOOL)canStartActivityForBundleID:(id)id;
- (BOOL)hasBudgetForBundleID:(id)id;
- (void)restoreCreditForBundleID:(id)id;
- (void)deductCreditForBundleID:(id)id;
- (void)eligibleBundleIDsAdded:(id)added removed:(id)removed budgetClasses:(id)classes;
- (void)refreshBudget;
- (id)budgetDictionary;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
@end

#endif /* CSLDuetActivityBudget_h */
