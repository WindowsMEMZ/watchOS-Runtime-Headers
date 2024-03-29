//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOAssetViewController_h
#define NPTOAssetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPTOAssetView.h"
#include "NPTOAssetViewDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface NPTOAssetViewController : UIViewController<UIScrollViewDelegate, NPTOAssetViewDelegate>

@property (retain, nonatomic) NPTOAssetView *assetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (id)viewForZoomingInScrollView:(id)view;
@end

#endif /* NPTOAssetViewController_h */
