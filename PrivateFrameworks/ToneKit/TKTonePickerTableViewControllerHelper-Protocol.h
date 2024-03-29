//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TKTonePickerTableViewControllerHelper_Protocol_h
#define TKTonePickerTableViewControllerHelper_Protocol_h
@import Foundation;

@protocol TKTonePickerTableViewControllerHelper <NSObject>
/* instance methods */
- (void)loadViewForTonePickerTableViewController:(id)controller;
- (id)tableView:(id)view cellForPickerRowItem:(id)item;
- (void)tableView:(id)view willDisplayCell:(id)cell forPickerRowItem:(id)item;
- (void)tableView:(id)view updateCell:(id)cell withSeparatorForPickerRowItem:(id)item;
- (id)selectedTonePickerItem;
- (void)updateCell:(id)cell withCheckedStatus:(BOOL)status forTonePickerItem:(id)item;
- (void)updateCell:(id)cell withDetailText:(id)text;
- (void)updateDividerContentColorToMatchSeparatorColorInTableView:(id)view;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path forPickerRowItem:(id)item;
- (void)tonePickerTableViewWillDisappear:(BOOL)disappear;
- (void)tonePickerTableViewControllerWillBeDeallocated:(id)deallocated;
@end

#endif /* TKTonePickerTableViewControllerHelper_Protocol_h */
