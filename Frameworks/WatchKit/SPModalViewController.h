//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPModalViewController_h
#define SPModalViewController_h
@import Foundation;

#include "UIViewController.h"

@class PUICButton, PUICNotchProvider, UIViewController;

@interface SPModalViewController : UIViewController

@property (retain, nonatomic) PUICButton *cancelButton;
@property (retain, nonatomic) PUICNotchProvider *notchProvider;
@property (nonatomic) BOOL classicMode;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) BOOL descriptionOnlyContainsTableView;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)cancel;
- (void)viewDidLayoutSubviews;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (id)_firstTableViewSubView:(id)view;
@end

#endif /* SPModalViewController_h */
