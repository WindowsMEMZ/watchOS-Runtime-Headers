//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXRDeviceActionsViewController_h
#define AXRDeviceActionsViewController_h
@import Foundation;

#include "PUICListCollectionViewController.h"
#include "AXRDeviceActionsViewControllerDelegate-Protocol.h"

@class AXRemoteDevice;

@interface AXRDeviceActionsViewController : PUICListCollectionViewController

@property (retain, nonatomic) AXRemoteDevice *activeDevice;
@property (weak, nonatomic) NSObject<AXRDeviceActionsViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithRemoteDevice:(id)device delegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewDidDisappear:(BOOL)disappear;
- (BOOL)accessibilityPerformEscape;
- (BOOL)_canShowWhileLocked;
- (BOOL)_deviceSupportsHandGestures;
- (id)_supportedHandGestures;
- (long long)_numberOfSections;
- (BOOL)_indexPathSectionIsForHandGestures:(long long)gestures;
- (long long)_numberOfRowsInSection:(long long)section;
- (id)_titleForSection:(long long)section;
- (id)_footerForSection:(long long)section;
- (id)_actionForIndexPath:(id)path;
- (long long)_handGestureEventUsageForIndexPath:(id)path;
- (void)_handleIndexPathSelection:(id)selection;
- (id)_titleForListItemAtIndexPath:(id)path;
- (id)_subtitleForListItemAtIndexPath:(id)path;
- (id)_imageForListItemAtIndexPath:(id)path;
- (id)_leadingImageViewForListItemAtIndexPath:(id)path;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)path;
- (double)collectionView:(id)view layout:(id)layout heightForHeaderInSection:(long long)section;
- (double)collectionView:(id)view layout:(id)layout heightForFooterInSection:(long long)section;
@end

#endif /* AXRDeviceActionsViewController_h */
