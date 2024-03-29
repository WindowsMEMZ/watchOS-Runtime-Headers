//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 494.4.6.3.2
//
#ifndef AAUIDataclassPickerViewController_h
#define AAUIDataclassPickerViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AAUIBuddyView.h"
#include "AAUIDataclassPickerViewControllerDelegate-Protocol.h"
#include "AAUIHeaderView.h"
#include "AAUISwitchTableViewCellDelegate-Protocol.h"
#include "NSCoding-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "_AAUIDataclassOptionCache.h"

@class NSArray, NSDictionary, NSString, UITableView, UITableViewHeaderFooterView;

@interface AAUIDataclassPickerViewController : UIViewController<AAUISwitchTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate, NSCoding, NSSecureCoding> {
  /* instance variables */
  AAUIHeaderView *_tableHeaderView;
  UITableView *_tableView;
  UITableViewHeaderFooterView *_tableFooterView;
  NSArray *_compactConstraints;
  NSArray *_expandedConstraints;
  _AAUIDataclassOptionCache *_dataclassOptionCache;
}

@property (retain, @dynamic, nonatomic) AAUIBuddyView *view;
@property (weak, nonatomic) NSObject<AAUIDataclassPickerViewControllerDelegate> *delegate;
@property (copy, nonatomic) NSDictionary *dataclassOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDataclassOptions:(id)options;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillLayoutSubviews;
- (id)_cancelBarButtonItem;
- (id)_nextBarButtonItem;
- (id)_tableHeaderView;
- (id)_tableView;
- (id)_tableFooterView;
- (id)_signOutFooterText;
- (id)_titleText;
- (id)_messageText;
- (void)_cancelButtonSelected:(id)selected;
- (void)_nextButtonSelected:(id)selected;
- (void)_dismissAdditionalInformation:(id)information;
- (void)_delegate_signOutViewControllerDidCancel;
- (void)_delegate_signOutViewControllerDidCompleteWithDataclassActions:(id)actions;
- (void)switchTableViewCellDidUpdateValue:(id)value;
- (void)encodeWithCoder:(id)coder;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (id)viewForHeaderInTableView:(id)view;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)heightForHeaderInTableView:(id)view;
- (double)_compressedHeightForView:(id)view containedInView:(id)view;
- (BOOL)tableView:(id)view shouldDrawTopSeparatorForSection:(long long)section;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateConstraintsForTraitCollection:(id)collection;
@end

#endif /* AAUIDataclassPickerViewController_h */
