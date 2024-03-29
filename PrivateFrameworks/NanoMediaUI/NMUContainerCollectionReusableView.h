//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUContainerCollectionReusableView_h
#define NMUContainerCollectionReusableView_h
@import Foundation;

#include "UICollectionReusableView.h"

@class UIViewController;

@interface NMUContainerCollectionReusableView : UICollectionReusableView

@property (weak, nonatomic) UIViewController *containerViewController;
@property (retain, nonatomic) UIViewController *contentViewController;

/* instance methods */
- (void)didMoveToWindow;
- (void)_removeContentViewController;
- (void)_addContentViewController;
@end

#endif /* NMUContainerCollectionReusableView_h */
