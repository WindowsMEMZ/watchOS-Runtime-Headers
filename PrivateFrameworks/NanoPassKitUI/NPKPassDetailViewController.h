//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassDetailViewController_h
#define NPKPassDetailViewController_h
@import Foundation;

#include "NPKListCollectionViewController.h"
#include "NPKBalanceDetailViewControllerDelegate-Protocol.h"
#include "NPKBarcodeCollectionViewCellDelegate-Protocol.h"
#include "NPKBarcodeDisplayHelper.h"
#include "NPKCardInformationDetailCollectionViewControllerDelegate-Protocol.h"
#include "NPKContactlessPaymentSessionManagerObserver-Protocol.h"
#include "NPKDetailTilesCollectionViewControllerDelegate-Protocol.h"
#include "NPKListCollectionViewCellCreatorDelegate-Protocol.h"
#include "NPKListCollectionViewDelegate-Protocol.h"
#include "NPKPassCapabilitiesSectionProviderProtocol-Protocol.h"
#include "NPKPassDetailBarcodeInstructionBackgroundView.h"
#include "NPKPassDetailCardInformationSectionProviderProtocol-Protocol.h"
#include "NPKPassDetailLinkedAccountSectionProviderHandlerProtocol-Protocol.h"
#include "NPKPassDetailViewControllerDelegate-Protocol.h"
#include "NPKShareEntitlementsViewControllerDelegate-Protocol.h"
#include "NPKUIAssertion.h"

@class NPKContactlessPaymentSessionManager, NSIndexPath, NSString, PKPass, UIScrollView;

@interface NPKPassDetailViewController : NPKListCollectionViewController<NPKListCollectionViewDelegate, NPKListCollectionViewCellCreatorDelegate, NPKBarcodeCollectionViewCellDelegate, NPKDetailTilesCollectionViewControllerDelegate, NPKBalanceDetailViewControllerDelegate, NPKCardInformationDetailCollectionViewControllerDelegate, NPKPassCapabilitiesSectionProviderProtocol, NPKShareEntitlementsViewControllerDelegate, NPKContactlessPaymentSessionManagerObserver, NPKPassDetailLinkedAccountSectionProviderHandlerProtocol, NPKPassDetailCardInformationSectionProviderProtocol>

@property (retain, nonatomic) NPKPassDetailBarcodeInstructionBackgroundView *barcodeBackgroundView;
@property (retain, nonatomic) NPKUIAssertion *brightnessAssertion;
@property (weak, nonatomic) UIScrollView *autoScrollView;
@property (weak, nonatomic) NPKContactlessPaymentSessionManager *paymentSessionManager;
@property (retain, nonatomic) NPKBarcodeDisplayHelper *barcodeDisplayHelper;
@property (readonly, nonatomic) PKPass *pass;
@property (weak, @dynamic, nonatomic) NSObject<NPKPassDetailViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSIndexPath *passViewIndexPath;
@property (readonly, nonatomic) NSIndexPath *barcodeIndexPath;
@property (retain, nonatomic) NSIndexPath *visibleIndexPath;
@property (readonly, nonatomic) NSIndexPath *targetIndexPathForTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (Class)sectionProviderConfigurationClass;
+ (id)sectionProviderClassesWithConfiguration:(id)configuration;
+ (Class)dataSourceClass;
+ (id)passDetailConfigurationForConfiguration:(id)configuration;

/* instance methods */
- (id)initWithSectionProviderConfiguration:(id)configuration shouldShowCloseButton:(BOOL)button;
- (id)initWithSectionProviderConfiguration:(id)configuration;
- (unsigned long long)displayStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (long long)preferredNavigationBarHiddenBehavior;
- (double)contentOffsetForIndexPath:(id)path;
- (void)requestServiceMode;
- (void)requestSessionEnd;
- (void)handleUserUnarchivedPass:(id)pass;
- (void)handleUserDeletedPass:(id)pass;
- (void)handleEntitlementDetailPresentationForDisplayableEntitlements:(id)entitlements;
- (void)snapToBarcodeIfNecessary;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)scrollViewDidEndScrollingAnimation:(id)animation;
- (void)collectionView:(id)view crownSequencerWillBecomeIdleWithVelocity:(double)velocity targetOffset:(inout double *)offset;
- (void)barcodeCell:(id)cell didSelectBarcodeIndex:(long long)index;
- (void)barcodeCellDidTapOnBarcodeView:(id)view;
- (double)collectionView:(id)view layout:(id)layout estimatedHeightForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout heightForHeaderInSection:(long long)section;
- (BOOL)collectionView:(id)view layout:(id)layout shouldSpecifyPositioningForItemAtIndexPath:(id)path yOffset:(double *)offset;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)detailTilesViewController:(id)controller didSelectItem:(id)item atIndexPath:(id)path forPass:(id)pass;
- (void)detailTilesViewController:(id)controller didDeselectItem:(id)item;
- (void)detailTilesViewController:(id)controller didUpdateWithTileItems:(id)items;
- (void)balanceDetailViewControllerDidRequestSessionEnd:(id)end;
- (void)cardInformationDetailViewControllerDidRequestSessionEnd:(id)end;
- (void)handlePresentCardInformationWithConfiguration:(id)configuration pass:(id)pass forSectionProvider:(id)provider;
- (void)handleDidSelectEntitlementSummaryForDisplayableEntitlements:(id)entitlements sectionProvider:(id)provider;
- (void)collectionView:(id)view didChangeAlpha:(double)alpha;
- (void)passDetailLinkedAccountSectionProvider:(id)provider requestSavingsAccountDetailsWithPass:(id)pass;
- (void)_setUpNavigationItemShowingCloseButton:(BOOL)button;
- (void)_registerObservers;
- (void)_closeButtonTapped;
- (void)_applicationWillEnterForeground:(id)foreground;
- (void)scrollingDidStart;
- (void)scrollingDidEnd;
- (void)cellCreator:(id)creator didConfigureCell:(id)cell atIndexPath:(id)path;
- (id)additionalVisibleViews;
- (void)_handleBarcodeSelectedAtIndexPath:(id)path;
- (void)_returnToPassListViewController;
- (BOOL)_passCellNeedsAlphaChange;
- (void)contactlessPaymentSessionManager:(id)manager didChangeSessionState:(id)state;
- (BOOL)_isInBarcodePaymentSessionWithState:(id)state;
@end

#endif /* NPKPassDetailViewController_h */
