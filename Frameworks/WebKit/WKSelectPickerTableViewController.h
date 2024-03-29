//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKSelectPickerTableViewController_h
#define WKSelectPickerTableViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "WKContentView.h"

@protocol {RetainPtr<NSMutableSet<NSNumber *>>="m_ptr"^v}, {RetainPtr<UIBarButtonItem>="m_ptr"^v};

@interface WKSelectPickerTableViewController : UITableViewController {
  /* instance variables */
  WKContentView *_contentView;
  long long _numberOfSections;
  struct RetainPtr<NSMutableSet<NSNumber *>> { void *m_ptr; } _collapsedSections;
  struct RetainPtr<UIBarButtonItem> { void *m_ptr; } _previousButton;
  struct RetainPtr<UIBarButtonItem> { void *m_ptr; } _nextButton;
}

/* instance methods */
- (id)initWithView:(id)view;
- (void)viewWillAppear:(BOOL)appear;
- (long long)numberOfRowsInGroup:(long long)group;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (void)didTapSelectPickerGroupHeaderView:(id)view;
- (long long)findItemIndexAt:(id)at;
- (void *)optionItemAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)groupHeaderFont;
- (void)next:(id)next;
- (void)previous:(id)previous;
- (void)close:(id)close;
@end

#endif /* WKSelectPickerTableViewController_h */
