//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingPlanPaymentScheduleComposer_h
#define PKPayLaterFinancingPlanPaymentScheduleComposer_h
@import Foundation;

#include "PKPayLaterFinancingPlanPaymentScheduleComposerDataSource-Protocol.h"
#include "PKPayLaterFinancingPlanPaymentScheduleComposerDelegate-Protocol.h"

@class UIFont;

@interface PKPayLaterFinancingPlanPaymentScheduleComposer : NSObject {
  /* instance variables */
  double _minimumCellHeight;
  UIFont *_font;
  NSObject<PKPayLaterFinancingPlanPaymentScheduleComposerDelegate> *_delegate;
  NSObject<PKPayLaterFinancingPlanPaymentScheduleComposerDataSource> *_dataSource;
}

/* class methods */
+ (id)mediumDateFormatter;
+ (id)shortDateFormatter;
+ (id)numberFormatter;
+ (id)attributedStringWithText:(id)text strikethrough:(BOOL)strikethrough;
+ (id)detailTextForPayment:(id)payment financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithPaymentType:(id)type financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithCreditRevokedType:(id)type financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithRefundRevokedType:(id)type financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithTemporaryCreditType:(id)type financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithDisputeCreditType:(id)type financingPlan:(id)plan;
+ (id)_detailTextForPaymentWithRefundType:(id)type financingPlan:(id)plan;
+ (unsigned long long)_scheduleComposerDetailTypeForPayment:(id)payment financingPlan:(id)plan;

/* instance methods */
- (id)initWithDelegate:(id)delegate dataSource:(id)source;
- (id)composeFinancingPlanPaymentScheduleLineItemsForPlan:(id)plan payLaterAccount:(id)account;
- (id)_formRowsWithList:(id)list financingPlan:(id)plan payLaterAccount:(id)account;
- (id)_paymentForItem:(id)item;
- (void)_updateRowConnectorsForRows:(id)rows;
- (id /* block */)_selectionBlockForPayment:(id)payment financingPlan:(id)plan payLaterAccount:(id)account;
- (id)_commonRowWithRowIndex:(long long)index;
@end

#endif /* PKPayLaterFinancingPlanPaymentScheduleComposer_h */
