//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKAddPageViewController_h
#define NTKAddPageViewController_h
@import Foundation;

#include "UIViewController.h"
#include "NTKAddPageViewControllerDelegate-Protocol.h"
#include "NTKPageScrollViewController.h"
#include "_NTKAddPageActivationButton.h"

@class UIViewController;

@interface NTKAddPageViewController : UIViewController {
  /* instance variables */
  _NTKAddPageActivationButton *_activationButton;
}

@property (readonly, nonatomic) NTKPageScrollViewController *pageScrollViewController;
@property (weak, nonatomic) NSObject<NTKAddPageViewControllerDelegate> *delegate;
@property (readonly, nonatomic) unsigned long long currentPageIndex;
@property (readonly, nonatomic) UIViewController *currentPageViewController;
@property (readonly, nonatomic) BOOL active;

/* instance methods */
- (id)init;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)_activationButtonPress;
- (void)prepareForGalleryAnimation;
- (void)applyGalleryAnimationPresentationFraction:(double)fraction;
- (void)cleanupAfterGalleryAnimation;
- (BOOL)isActive;
@end

#endif /* NTKAddPageViewController_h */
