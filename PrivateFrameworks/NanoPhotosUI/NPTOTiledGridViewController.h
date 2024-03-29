//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOTiledGridViewController_h
#define NPTOTiledGridViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NPTOTiledGridView.h"
#include "NPTOTiledGridViewDataSource-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface NPTOTiledGridViewController : UIViewController<NPTOTiledGridViewDataSource, UIScrollViewDelegate>

@property (retain, nonatomic) NPTOTiledGridView *gridView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)loadView;
- (long long)numberOfItemsInGridView:(id)view;
- (id)gridView:(id)view imageForItemAtIndex:(long long)index size:(struct CGSize { double x0; double x1; })size;
- (id)viewForZoomingInScrollView:(id)view;
@end

#endif /* NPTOTiledGridViewController_h */
