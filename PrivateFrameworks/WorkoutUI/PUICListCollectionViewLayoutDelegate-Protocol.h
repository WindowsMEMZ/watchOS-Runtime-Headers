//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 749.20.0.0.0
//
#ifndef PUICListCollectionViewLayoutDelegate_Protocol_h
#define PUICListCollectionViewLayoutDelegate_Protocol_h
@import Foundation;

@protocol PUICListCollectionViewLayoutDelegate <PUICListCollectionViewDelegate>
@optional
/* instance methods */
- (double)collectionView:(id)view layout:(id)layout heightForItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view layout:(id)layout isRadioSection:(long long)section;
- (long long)collectionView:(id)view layout:(id)layout styleForSection:(long long)section;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout contentInsetsForSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout rowSpacingInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout heightForHeaderInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout heightForFooterInSection:(long long)section;
- (double)heightForGlobalHeaderInCollectionView:(id)view layout:(id)layout;
- (double)heightForGlobalFooterInCollectionView:(id)view layout:(id)layout;
- (double)collectionView:(id)view layout:(id)layout estimatedHeightForItemAtIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout estimatedHeightForHeaderInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout estimatedHeightForFooterInSection:(long long)section;
- (double)estimatedHeightForGlobalHeaderInCollectionView:(id)view layout:(id)layout;
- (double)estimatedHeightForGlobalFooterInCollectionView:(id)view layout:(id)layout;
@end

#endif /* PUICListCollectionViewLayoutDelegate_Protocol_h */
