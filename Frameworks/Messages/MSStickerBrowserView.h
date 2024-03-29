//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef MSStickerBrowserView_h
#define MSStickerBrowserView_h
@import Foundation;

#include "UIView.h"
#include "MSStickerBrowserViewDataSource-Protocol.h"
#include "MSStickerBrowserViewLayoutSpec.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDataSourcePrefetching-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;
@protocol MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDataSourcePrefetching>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec;
@property (retain, nonatomic) NSMutableArray *cellsToAnimate;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) unsigned long long currentlyAnimatingIndex;
@property (nonatomic) struct CGPoint { double x0; double x1; } restoredContentOffset;
@property (nonatomic) struct CGSize { double x0; double x1; } browserSizeToRestoreFrom;
@property (nonatomic) BOOL isRestoringContentOffset;
@property (nonatomic) BOOL animating;
@property (retain, nonatomic) NSMutableDictionary *stickerCache;
@property (retain, nonatomic) NSOperationQueue *stickerCacheQueue;
@property (weak, nonatomic) NSObject<MSStickerBrowserViewDisplayDelegate> *displayDelegate;
@property (readonly, nonatomic) NSDictionary *stateRestorationInfo;
@property (readonly, nonatomic) long long stickerSize;
@property (weak, nonatomic) NSObject<MSStickerBrowserViewDataSource> *dataSource;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame stickerSize:(long long)size;
- (void)dealloc;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })offset animated:(BOOL)animated;
- (void)configureStickerView;
- (void)animateNextCell;
- (void)reloadData;
- (void)_reloadStickersAtIndexes:(id)indexes;
- (id)_stickerAtIndexPath:(id)path;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view prefetchItemsAtIndexPaths:(id)paths;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)prepareForSnapshotting;
- (void)setUserInteractionEnabled:(BOOL)enabled;
- (void)restoreFromState:(id)state;
- (void)invalidateFlowLayout;
- (void)_startAnimating;
- (void)_stopAnimating;
- (BOOL)isAnimating;
@end

#endif /* MSStickerBrowserView_h */
