//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKNanoAssetViewController_h
#define CKNanoAssetViewController_h
@import Foundation;

#include "UIViewController.h"

@class CLGeocoder, PHAsset, PUICStatusBarGlobalContextViewAssertion;

@interface CKNanoAssetViewController : UIViewController

@property (retain, nonatomic) CLGeocoder *geocoder;
@property (retain, nonatomic) PUICStatusBarGlobalContextViewAssertion *contextViewAssertion;
@property (nonatomic) BOOL shouldHideStatusBar;
@property (readonly, nonatomic) PHAsset *asset;

/* instance methods */
- (id)initWithAsset:(id)asset;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (BOOL)prefersStatusBarHidden;
- (void)_updateTitle;
@end

#endif /* CKNanoAssetViewController_h */
