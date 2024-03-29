//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKPassListCellCreator_h
#define NPKPassListCellCreator_h
@import Foundation;

@class UICollectionView;

@interface NPKPassListCellCreator : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;

/* instance methods */
- (id)initWithCollectionView:(id)view;
- (id)collectionView:(id)view cellForPass:(id)pass atIndexPath:(id)path passViewScale:(unsigned long long)scale;
- (id)collectionView:(id)view cellForActionWithTitle:(id)title atIndexPath:(id)path;
- (id)collectionViewCellForInset:(id)inset atIndexPath:(id)path;
- (void)_registerCells;
@end

#endif /* NPKPassListCellCreator_h */
