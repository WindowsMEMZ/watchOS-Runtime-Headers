//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSpendingSingleSummaryViewController_h
#define PKSpendingSingleSummaryViewController_h
@import Foundation;

#include "UICollectionViewController.h"
#include "PKAccountServiceAccountResolutionController.h"
#include "PKAccountServiceAccountResolutionControllerDelegate-Protocol.h"
#include "PKContactAvatarManager.h"
#include "PKDashboardAvatarPresenter.h"
#include "PKDashboardButtonCollectionViewCell.h"
#include "PKDashboardFooterTextView.h"
#include "PKDashboardTitleDetailCell.h"
#include "PKDashboardTitleHeaderView.h"
#include "PKDashboardViewControllerFooterView.h"
#include "PKDashboardViewControllerFooterViewDelegate-Protocol.h"
#include "PKHorizontalScrollingChildLayout.h"
#include "PKHorizontalScrollingChildLayoutDataSource-Protocol.h"
#include "PKHorizontalScrollingChildViewControllerProtocol-Protocol.h"
#include "PKHorizontalScrollingViewControllerDelegate-Protocol.h"
#include "PKPaymentDataProviderDelegate-Protocol.h"
#include "PKSpendingSingleSummaryViewControllerDelegate-Protocol.h"
#include "PKSpendingSummaryAccountUserPresenter.h"
#include "PKSpendingSummaryPresenter.h"
#include "PKTransactionGroupItemPresenter.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSSet, NSString, PKAccount, PKAccountService, PKAccountUserCollection, PKFamilyMemberCollection, PKSpendingSummary, PKTransactionSourceCollection, UIGestureRecognizer;

@interface PKSpendingSingleSummaryViewController : UICollectionViewController<PKPaymentDataProviderDelegate, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, PKDashboardViewControllerFooterViewDelegate, PKAccountServiceAccountResolutionControllerDelegate, PKHorizontalScrollingChildLayoutDataSource, PKHorizontalScrollingChildViewControllerProtocol> {
  /* instance variables */
  PKTransactionSourceCollection *_transactionSourceCollection;
  PKContactAvatarManager *_avatarManager;
  PKAccount *_account;
  PKAccountUserCollection *_accountUserCollection;
  NSSet *_physicalCards;
  PKAccountService *_accountService;
  unsigned long long _feature;
  unsigned long long _displayType;
  PKFamilyMemberCollection *_familyCollection;
  PKDashboardViewControllerFooterView *_currentFooter;
  BOOL _footerNeedsConfiguration;
  PKSpendingSummary *_summary;
  unsigned long long _summaryType;
  NSDate *_startDate;
  NSDate *_endDate;
  BOOL _hasTransactions;
  BOOL _hasCategoryInsights;
  NSCalendar *_currentCalendar;
  NSArray *_currentMonthTransactions;
  NSArray *_pendingPayments;
  NSArray *_upcomingScheduledPayments;
  NSDateFormatter *_formatterMonth;
  NSDateFormatter *_formatterFullMonth;
  NSDateFormatter *_formatterDay;
  NSDateFormatter *_formatterYear;
  PKTransactionGroupItemPresenter *_transactionGroupPresenter;
  PKSpendingSummaryPresenter *_summaryPresenter;
  PKDashboardTitleHeaderView *_sampleHeaderView;
  PKDashboardFooterTextView *_sampleFooterView;
  PKDashboardButtonCollectionViewCell *_sampleButtonCell;
  PKDashboardTitleDetailCell *_sampleHighlightsCell;
  PKDashboardAvatarPresenter *_avatarPresenter;
  PKSpendingSummaryAccountUserPresenter *_summaryUsersPresenter;
  NSArray *_sortedAccountUsers;
  PKAccountServiceAccountResolutionController *_resolutionController;
  PKHorizontalScrollingChildLayout *_layout;
  BOOL _isLowEndDevice;
  struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsett;
}

@property (weak, nonatomic) NSObject<PKSpendingSingleSummaryViewControllerDelegate> *summaryDelegate;
@property (nonatomic) unsigned long long categorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKHorizontalScrollingViewControllerDelegate> *scrollingDelegate;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) BOOL visible;
@property (nonatomic) double alphaTransition;

/* instance methods */
- (id)initWithTransationSourceCollection:(id)collection familyCollection:(id)collection avatarManager:(id)manager account:(id)account accountUserCollection:(id)collection physicalCards:(id)cards transactionGroupPresenter:(id)presenter summaryPresenter:(id)presenter currentMonthTransactions:(id)transactions pendingPayments:(id)payments upcomingScheduledPayments:(id)payments displayType:(unsigned long long)type;
- (void)dealloc;
- (void)viewDidLoad;
- (id)footer;
- (void)setData:(id)data swap:(BOOL)swap;
- (id)data;
- (double)alphaForIndexPath:(id)path visible:(BOOL)visible transition:(double)transition;
- (double)lineSpacingForSection:(long long)section;
- (unsigned int)horizontalAlignmentForSection:(long long)section;
- (id)_sortedAccountUsersForSummary:(id)summary;
- (void)setSummary:(id)summary swap:(BOOL)swap;
- (void)_configureFooter;
- (void)_configureDefaultFooter;
- (void)_configureFooterForAccountUsers;
- (long long)_numberOfSummaryCells;
- (long long)_numberOfRewardsCells;
- (unsigned long long)_rewardsCellAtIndex:(unsigned long long)index;
- (long long)_numberOfAggregateCells;
- (unsigned long long)_aggregateCellAtIndex:(unsigned long long)index;
- (id)indexPathForSummary;
- (void)scrollViewDidScroll:(id)scroll;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (long long)_numberOfNonSpendingTransactionTypeRowsEnabled;
- (unsigned long long)_nonSpendingTransactionTypeForRow:(long long)row;
- (id)_nonSpendingTransactionGroupForType:(unsigned long long)type;
- (void)_applyMaskToCell:(id)cell firstInSection:(BOOL)section lastInSection:(BOOL)section;
- (struct CGSize { double x0; double x1; })_sizeForAggregateOrRewardsCellInCollectionView:(id)view atIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(long long)section;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (BOOL)_hasHeaderForSection:(unsigned long long)section;
- (void)_configureHeaderView:(id)view inSection:(unsigned long long)section;
- (BOOL)_hasFooterForSection:(unsigned long long)section;
- (void)_configureFooterView:(id)view inSection:(unsigned long long)section;
- (void)_configureRewardsHubButtonCell:(id)cell;
- (void)_configureHighlightsButtonCell:(id)cell;
- (void)_accountsChanged:(id)changed;
- (void)didUpdateFamilyMembers:(id)members;
- (BOOL)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (void)traitCollectionDidChange:(id)change;
- (void)buttonTappedInFooterView:(id)view;
- (void)accountServiceAccountResolutionController:(id)controller requestsPresentViewController:(id)controller animated:(BOOL)animated;
@end

#endif /* PKSpendingSingleSummaryViewController_h */
