//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassPaymentConfirmationView_h
#define PKPassPaymentConfirmationView_h
@import Foundation;

#include "PKPassFooterContentView.h"
#include "PKPassPaymentPayStateView.h"
#include "PKPassPaymentPayStateViewDelegate-Protocol.h"
#include "PKPassTileGroupView.h"
#include "PKPaymentServiceDelegate-Protocol.h"

@class NSArray, NSDate, NSMutableDictionary, NSString, PKExpressTransactionState, PKPaymentService, PKTransitBalanceModel, UIView;
@protocol OS_dispatch_source, UIView<PKPaymentDashboardCellActionHandleable;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView<PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {
  /* instance variables */
  PKPassPaymentPayStateView *_payStateView;
  UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
  UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
  UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
  PKPassTileGroupView *_tileGroupView;
  UIView *_displayedCellPrimary;
  BOOL _animated;
  PKExpressTransactionState *_expressState;
  BOOL _receivedTransaction;
  BOOL _receivedExit;
  BOOL _needsResolution;
  BOOL _showingResolution;
  BOOL _showingSuccessResolution;
  BOOL _animatingResolution;
  BOOL _showingAlert;
  long long _transactionType;
  NSObject<OS_dispatch_source> *_activityResolutionTimer;
  unsigned long long _resolutionCounter;
  NSDate *_visibleDate;
  NSMutableDictionary *_registeredExpressObservers;
  PKPaymentService *_paymentService;
  NSArray *_tiles;
  PKTransitBalanceModel *_transitBalanceModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPass:(id)pass;
- (id)initWithPass:(id)pass context:(id)context;
- (id)_findOrCreatePrimaryAdjustableSingleCellView;
- (id)_findOrCreatePrimaryFusedDoubleCellView;
- (id)_findOrCreateSecondaryView;
- (BOOL)_shouldDisplayPrimaryView;
- (BOOL)_canDisplaySecondaryView;
- (BOOL)_shouldDisplaySecondaryView;
- (void)_updateContentPrimaryView;
- (void)_updateContentSecondaryView;
- (void)dealloc;
- (void)layoutIfNeededAnimated:(BOOL)animated;
- (void)layoutSubviews;
- (void)willBecomeVisibleAnimated:(BOOL)animated;
- (void)didBecomeVisibleAnimated:(BOOL)animated;
- (void)willBecomeHiddenAnimated:(BOOL)animated;
- (void)didBecomeHiddenAnimated:(BOOL)animated;
- (void)_presentCheckmarkIfNecessary;
- (void)_disableActivityTimer;
- (void)_beginResolution;
- (void)_resolveActivityIfNecessaryWithDelay;
- (void)_resolveActivityIfNecessary;
- (void)payStateView:(id)view revealingCheckmark:(BOOL)checkmark;
- (void)transactionSourceIdentifier:(id)identifier didReceiveTransaction:(id)transaction;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didUpdateWithTransitPassProperties:(id)properties;
- (void)passWithUniqueIdentifier:(id)identifier didUpdateTiles:(id)tiles;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didReceiveBalanceUpdate:(id)update;
- (void)paymentPassWithUniqueIdentifier:(id)identifier didReceivePlanUpdate:(id)update;
- (id)_expressNotificationNames;
- (BOOL)_isRegisteredForAllExpressTransactionNotifications;
- (BOOL)_isRegisteredForAnyExpressTransactionNotifications;
- (void)_registerObserverForNotificationName:(id)name center:(id)center handler:(id /* block */)handler;
- (void)_registerForExpressTransactionNotifications:(BOOL)notifications;
- (void)_handleExpressNotification:(id)notification;
- (BOOL)_isExpressOutstanding;
@end

#endif /* PKPassPaymentConfirmationView_h */
