//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 46.0.0.0.0
//
#ifndef NSHNameDropShareViewController_h
#define NSHNameDropShareViewController_h
@import Foundation;

#include "UIViewController.h"

@class UIView;
@protocol NSHNameDropShareViewControllerDelegate;

@interface NSHNameDropShareViewController : UIViewController {
  /* instance variables */
   viewModel;
}

@property (nonatomic, retain) UIView *nameDropShareContentView;
@property (nonatomic, weak) NSObject<NSHNameDropShareViewControllerDelegate> *delegate;

/* instance methods */
- (id)initWithContact:(id)contact headerTitle:(id)title;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)updateContact:(id)contact;
- (id)initWithNibName:(id)name bundle:(id)bundle;
@end

#endif /* NSHNameDropShareViewController_h */
