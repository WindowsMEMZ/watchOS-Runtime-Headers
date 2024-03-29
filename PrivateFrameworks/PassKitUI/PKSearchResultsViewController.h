//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKSearchResultsViewController_h
#define PKSearchResultsViewController_h
@import Foundation;

#include "UICollectionViewController.h"
#include "PKAccountServiceObserver-Protocol.h"
#include "PKDashboardPaymentTransactionItemPresenter.h"
#include "PKDashboardTitleHeaderView.h"
#include "PKForegroundActiveArbiterObserver-Protocol.h"
#include "PKPaymentDataProviderDelegate-Protocol.h"
#include "PKSearchServiceObserver-Protocol.h"
#include "PKSearchSuggestionCollectionViewCell.h"
#include "PKTransactionGroupItemPresenter.h"
#include "PKTransactionGroupThumbnailPresenter.h"
#include "PKTransactionHistoryViewController.h"
#include "PKWorldRegionUpdater.h"
#include "PKWorldRegionUpdaterObserver-Protocol.h"
#include "UICollectionViewDelegateFlowLayout-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableOrderedSet, NSString, PKAccountService, PKFamilyMemberCollection, PKPassLibrary, PKSearchQuery, PKSearchResults, PKSearchService, PKTransactionSourceCollection, UILabel;
@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentDataProvider;

@interface PKSearchResultsViewController : UICollectionViewController<PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, PKPaymentDataProviderDelegate, UISearchResultsUpdating> {
  /* instance variables */
  PKDashboardTitleHeaderView *_sampleHeaderView;
  PKSearchSuggestionCollectionViewCell *_sampleSuggestionCell;
  PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;
  PKTransactionGroupItemPresenter *_transactionGroupPresenter;
  PKTransactionGroupThumbnailPresenter *_thumbnailPresenter;
  PKWorldRegionUpdater *_regionUpdater;
  PKFamilyMemberCollection *_familyCollection;
  PKSearchService *_searchService;
  PKAccountService *_accountService;
  PKPassLibrary *_passLibrary;
  NSObject<PKPaymentDataProvider> *_paymentDataProvider;
  NSDictionary *_accountsPerIdentifier;
  NSDictionary *_accountUserCollectionsPerIdentifier;
  NSDictionary *_physicalCardsPerIdentifier;
  PKTransactionSourceCollection *_transactionSourceCollection;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockQuery;
  NSString *_currentQueryIdentifier;
  NSMutableOrderedSet *_lastQueries;
  PKSearchQuery *_queryForCurrentResults;
  PKSearchResults *_currentResults;
  BOOL _queryInProgress;
  NSMutableDictionary *_lastResultsPerQueryIdentifier;
  NSObject<OS_dispatch_queue> *_queuePrepareResults;
  NSArray *_transactions;
  NSArray *_categories;
  NSArray *_merchants;
  NSArray *_locations;
  NSArray *_people;
  NSArray *_transactionTags;
  NSArray *_suggestions;
  NSMutableDictionary *_passesForResults;
  BOOL _hasReceivedResults;
  BOOL _hasLoadedRequiredData;
  unsigned long long _presentationCounter;
  unsigned long long _seeAllPresentationCounter;
  PKTransactionHistoryViewController *_seeAllHistoryVC;
  NSObject<OS_dispatch_source> *_seeAllPresentationTimer;
  BOOL _queryHasNoResults;
  BOOL _fullResultsNotAvailable;
  BOOL _hasSearchableContent;
  UILabel *_noResultsTitleLabel;
  UILabel *_noResultsBodyLabel;
  BOOL _queryIsReplay;
  BOOL _keyboardVisible;
  struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
  BOOL _usingThumbnailLayout;
  BOOL _atNaturalRestingBounds;
  BOOL _isScrolling;
  struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
  id /* block */ _pendingPreflightCompletion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPaymentDataProvider:(id)provider transactionSourceCollection:(id)collection familyCollection:(id)collection;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)scrollViewWillBeginDragging:(id)dragging;
- (void)scrollViewDidEndDragging:(id)dragging willDecelerate:(BOOL)decelerate;
- (void)scrollViewDidEndDecelerating:(id)decelerating;
- (void)_scrollViewStoppedScrolling;
- (id)_searchController;
- (double)_thumbnailInset;
- (double)_thumbnailSpacing;
- (id)_thumbnailLayout;
- (id)_resultsLayout;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (void)_configureHeaderView:(id)view inSection:(unsigned long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (long long)_numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)_configureSuggestionCell:(id)cell withSuggestion:(id)suggestion;
- (void)_applyMaskToCell:(id)cell firstInSection:(BOOL)section lastInSection:(BOOL)section;
- (void)_updateContentUnavailableConfigurationUsingState:(id)state;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(long long)section;
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)traitCollectionDidChange:(id)change;
- (void)updateSearchResultsForSearchController:(id)controller;
- (void)searchDidCompleteWithError:(id)error results:(id)results forIdentifier:(id)identifier;
- (void)invalidateSearchResults;
- (id)_queryWithIdentifier:(id)identifier;
- (BOOL)_isQueryIdentifierMatchingCurrentQuery:(id)query;
- (void)_saveResults:(id)results forQuery:(id)query;
- (void)_updateUIWithResults:(id)results forQuery:(id)query completion:(id /* block */)completion;
- (void)_updateUIIfPossibleWithResults:(id)results query:(id)query completion:(id /* block */)completion;
- (void)preflightWithCompletion:(id /* block */)completion;
- (void)foregroundActiveArbiter:(id)arbiter didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })state;
- (void)keyboardWillShow:(id)show;
- (void)keyboardWillChange:(id)change;
- (void)keyboardWillHide:(id)hide;
- (void)_updateLayoutForKeyboardAction:(id /* block */)action;
- (void)worldRegionUpdated:(id)updated updatedRegion:(id)region;
- (BOOL)_updateGroup:(id)group withRegion:(id)region;
- (void)_initiateSeeAllPresentationForQuery:(id)query;
- (void)_seeAllHeaderGroupForQuery:(id)query groups:(id)groups transactions:(id)transactions completion:(id /* block */)completion;
- (id)_historyViewControllerForQuery:(id)query groups:(id)groups headerGroup:(id)group;
- (void)_udpateOrPresentSeeAllViewControllerForQuery:(id)query groups:(id)groups transactions:(id)transactions;
- (void)accountAdded:(id)added;
- (void)accountRemoved:(id)removed;
- (void)accountChanged:(id)changed;
- (void)accountUsersChanged:(id)changed forAccountIdentifier:(id)identifier;
- (void)_updateAccountsWithCompletion:(id /* block */)completion;
- (void)didUpdateFamilyMembers:(id)members;
@end

#endif /* PKSearchResultsViewController_h */
