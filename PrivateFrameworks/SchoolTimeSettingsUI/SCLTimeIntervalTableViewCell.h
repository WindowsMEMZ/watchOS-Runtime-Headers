//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 38.0.15.0.0
//
#ifndef SCLTimeIntervalTableViewCell_h
#define SCLTimeIntervalTableViewCell_h
@import Foundation;

#include "PSTableCell.h"
#include "SCLTimePickerTableViewCellDelegate-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSDateFormatter, NSString, UITableView, UITableViewDiffableDataSource;

@interface SCLTimeIntervalTableViewCell : PSTableCell<UITableViewDelegate, SCLTimePickerTableViewCellDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (nonatomic) BOOL reloadingAnimated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (id)timeInterval;
- (id)constraintInterval;
- (unsigned long long)pickerState;
- (id)dateConverter;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path itemIdentifier:(id)identifier;
- (void)configureTimePickerCell:(id)cell forRow:(unsigned long long)row;
- (void)configureTimeCell:(id)cell forRow:(unsigned long long)row;
- (id)snapshotForPickerState:(unsigned long long)state;
- (id)scheduleTimeFormatter;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)timePickerCell:(id)cell didUpdateDate:(id)date;
- (BOOL)isReloadingAnimated;
@end

#endif /* SCLTimeIntervalTableViewCell_h */
