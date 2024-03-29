//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFBookmarkTextEntryTableViewController_h
#define _SFBookmarkTextEntryTableViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "_SFBookmarkTextEntryTableViewCell.h"
#include "_SFBookmarkTextEntryTableViewControllerDelegate-Protocol.h"

@class NSString;

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {
  /* instance variables */
  NSObject<_SFBookmarkTextEntryTableViewControllerDelegate> *_delegate;
  NSString *_initialText;
  long long _autocapitalizationType;
  long long _autocorrectionType;
  _SFBookmarkTextEntryTableViewCell *_textEntryCell;
}

/* instance methods */
- (id)initWithBookmarkInfoViewField:(unsigned long long)field text:(id)text autocapitalizationType:(long long)type autocorrectionType:(long long)type delegate:(id)delegate;
- (void)loadView;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)dealloc;
- (void)_returnWasPressedInTextField:(id)field;
@end

#endif /* _SFBookmarkTextEntryTableViewController_h */
