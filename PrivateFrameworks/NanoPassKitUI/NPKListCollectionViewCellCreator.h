//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKListCollectionViewCellCreator_h
#define NPKListCollectionViewCellCreator_h
@import Foundation;

#include "NPKContactResolverCreator.h"
#include "NPKListCollectionViewCellCreatorDelegate-Protocol.h"
#include "NPKPaymentTransactionCellController.h"

@class UICollectionView;

@interface NPKListCollectionViewCellCreator : NSObject {
  /* instance variables */
  NPKContactResolverCreator *_contactResolverCreator;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NPKPaymentTransactionCellController *transactionCellController;
@property (weak, nonatomic) NSObject<NPKListCollectionViewCellCreatorDelegate> *delegate;

/* instance methods */
- (id)initWithCollectionView:(id)view;
- (id)collectionView:(id)view cellForListItem:(id)item atIndexPath:(id)path isSelectedRadioItem:(BOOL)item;
- (id)collectionView:(id)view headerWithTitle:(id)title atIndexPath:(id)path;
- (id)collectionView:(id)view footerWithText:(id)text atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForCardArtItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForPassTipItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForPassFooterImageItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForBarcodeItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTitleSubtitleItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTitleSubtitleAccessoryItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTitleMultiSubtitleAccessoryItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTitleSubtitleLoadingItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTransactionItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForActionItem:(id)item atIndexPath:(id)path isSelectedRadioItem:(BOOL)item;
- (id)_collectionView:(id)view cellForMapItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForMerchantMapItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForCenteredTitleSubtitleHeaderItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForCenteredIconCaptionHeaderItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTitleIconItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForPassAssociatedInfoItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForBalanceHeaderItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForAddToWalletItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForSwitchItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForImageItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTilesItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTriStateRadioItem:(id)item atIndexPath:(id)path isSelectedRadioItem:(BOOL)item;
- (id)_collectionView:(id)view cellForTriStateSwitchItem:(id)item atIndexPath:(id)path isSelectedRadioItem:(BOOL)item;
- (id)_collectionView:(id)view cellForCaptionItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForTextFieldItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForCenteredHeroImageTitleSubtitleItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view cellForPassItem:(id)item atIndexPath:(id)path;
- (id)_collectionView:(id)view headerWithTitle:(id)title atIndexPath:(id)path;
- (id)_collectionView:(id)view footerWithText:(id)text atIndexPath:(id)path;
- (void)_registerCells;
- (void)_registerSupplementaryViews;
- (id)_createAttributedStringForLinksAndURLsWithInputString:(id)string inputAttributedString:(id)string rangeAttributed:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)attributed containsLinks:(BOOL *)links;
@end

#endif /* NPKListCollectionViewCellCreator_h */
