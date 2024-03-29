//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIMoreListController_h
#define UIMoreListController_h
@import Foundation;

#include "UIViewController.h"
#include "UIBarButtonItem.h"
#include "UIMoreListCellLayoutManager.h"
#include "UITableView.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface UIMoreListController : UIViewController<UITableViewDelegate, UITableViewDataSource> {
  /* instance variables */
  UITableView *_table;
  BOOL _disableCustomizing;
  BOOL _hideNavigationBar;
  UIMoreListCellLayoutManager *_layoutManager;
  UIBarButtonItem *_moreEditButtonItem;
}

@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) BOOL moreViewControllersChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)table;
- (void)_layoutCells;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateEditButton;
- (void)_willChangeToIdiom:(long long)idiom onScreen:(id)screen;
- (BOOL)_isSupportedInterfaceOrientation:(long long)orientation;
- (id)tabBarItem;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (BOOL)_viewControllerWasSelected;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (id)_targetNavigationController;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)encodeRestorableStateWithCoder:(id)coder;
- (void)decodeRestorableStateWithCoder:(id)coder;
@end

#endif /* UIMoreListController_h */
