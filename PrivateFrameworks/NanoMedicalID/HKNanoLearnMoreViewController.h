//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoLearnMoreViewController_h
#define HKNanoLearnMoreViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "PUICListCollectionViewDelegate-Protocol.h"

@class NSString;

@interface HKNanoLearnMoreViewController : PUICListCollectionViewController<PUICListCollectionViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)doneButtonTapped;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (BOOL)collectionView:(id)view shouldHighlightItemAtIndexPath:(id)path;
@end

#endif /* HKNanoLearnMoreViewController_h */
