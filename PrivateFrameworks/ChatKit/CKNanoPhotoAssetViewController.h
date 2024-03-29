//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoPhotoAssetViewController_h
#define CKNanoPhotoAssetViewController_h
@import Foundation;

#include "CKNanoAssetViewController.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"
#include "_CKNPTOAssetView.h"

@class NPTOAssetViewController, NPTOLibraryAsset, NSString, NSURL, UITapGestureRecognizer;

@interface CKNanoPhotoAssetViewController : CKNanoAssetViewController<UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) NPTOAssetViewController *assetViewController;
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) NPTOLibraryAsset *photoAssetDataSource;
@property (retain, nonatomic) _CKNPTOAssetView *assetView;
@property (retain, nonatomic) NSURL *livePhotoURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAsset:(id)asset;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_tapAction:(id)action;
- (void)_shareAction:(id)action;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)viewForZoomingInScrollView:(id)view;
@end

#endif /* CKNanoPhotoAssetViewController_h */
