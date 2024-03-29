//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKEditGroupViewController_h
#define PKEditGroupViewController_h
@import Foundation;

#include "PKEditTableViewController.h"
#include "PKEditGroupViewControllerDelegate-Protocol.h"
#include "PKEditPassesDetailsResponder-Protocol.h"
#include "PKGroupDelegate-Protocol.h"

@class NSString, PKGroup, PKPass, UIBarButtonItem, UITableView;

@interface PKEditGroupViewController : PKEditTableViewController<PKGroupDelegate, PKEditPassesDetailsResponder> {
  /* instance variables */
  PKGroup *_group;
  NSObject<PKGroupDelegate> *_savedDelegate;
  UIBarButtonItem *_deleteToolbarItem;
  UIBarButtonItem *_flexibleSpace;
  PKPass *_viewingPass;
  UITableView *_tableView;
  long long _editStyle;
  struct CGSize { double width; double height; } _imageSizeNeeded;
  NSObject<PKEditGroupViewControllerDelegate> *_delegate;
  BOOL _isForWatch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithGroup:(id)group existingGroupsController:(id)controller style:(long long)style placeholders:(id)placeholders isForWatch:(BOOL)watch delegate:(id)delegate;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)_deleteButtonPressed;
- (void)_deleteAllPassesInGroup;
- (void)group:(id)group didUpdatePass:(id)pass withState:(id)state atIndex:(unsigned long long)index;
- (void)group:(id)group didInsertPass:(id)pass withState:(id)state atIndex:(unsigned long long)index;
- (void)group:(id)group didRemovePass:(id)pass atIndex:(unsigned long long)index;
- (void)group:(id)group didUpdatePassState:(id)state forPass:(id)pass atIndex:(unsigned long long)index;
- (void)group:(id)group didMovePassFromIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)configureCell:(id)cell atIndexPath:(id)path withPass:(id)pass;
- (BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
- (void)tableView:(id)view moveRowAtIndexPath:(id)path toIndexPath:(id)path;
- (void)_presentAlertForUpdatedExpressPass:(id)pass;
- (id)viewControllerForRowAtIndexPath:(id)path;
- (id)passAtIndexPath:(id)path;
- (void)prefetchItemsAtIndexPaths:(id)paths;
- (BOOL)passExistsWithUniqueIdentifier:(id)identifier;
- (id)group;
- (id)pass;
@end

#endif /* PKEditGroupViewController_h */
