//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UICollectionViewFocusDelegate_Legacy_Protocol_h
#define UICollectionViewFocusDelegate_Legacy_Protocol_h
@import Foundation;

@protocol UICollectionViewFocusDelegate_Legacy <UICollectionViewDelegate>
@optional
/* instance methods */
- (BOOL)_collectionView:(id)view canFocusItemAtIndexPath:(id)path;
- (void)_collectionView:(id)view didFocusItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didFocusItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didUnfocusItemAtIndexPath:(id)path;
- (BOOL)collectionView:(id)view shouldUpdateFocusFromItemAtIndexPath:(id)path toView:(id)view heading:(unsigned long long)heading;
- (id)indexPathForPreferredFocusedItemForCollectionView:(id)view;
@end

#endif /* UICollectionViewFocusDelegate_Legacy_Protocol_h */
