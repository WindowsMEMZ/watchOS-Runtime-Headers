//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSpokenLanguagesViewController_h
#define HKSpokenLanguagesViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "HKSpokenLanguage.h"
#include "HKSpokenLanguageDiffableDataSource.h"
#include "HKSpokenLanguagesViewControllerDelegate-Protocol.h"
#include "UISearchResultsUpdating-Protocol.h"

@class NSArray, NSString, UISearchController;

@interface HKSpokenLanguagesViewController : UITableViewController<UISearchResultsUpdating>

@property (retain, nonatomic) NSArray *mostLikelyLanguages;
@property (retain, nonatomic) NSArray *allSpokenLanguages;
@property (retain, nonatomic) HKSpokenLanguage *currentLanguage;
@property (retain, nonatomic) HKSpokenLanguageDiffableDataSource *dataSource;
@property (retain, nonatomic) UISearchController *searchController;
@property (weak, nonatomic) NSObject<HKSpokenLanguagesViewControllerDelegate> *pickerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultCheckmarkImage;

/* instance methods */
- (id)initWithCurrentLanguage:(id)language preferredLanguages:(id)languages andAllSpokenLanguages:(id)languages;
- (void)viewDidLoad;
- (void)configureCancelButton;
- (void)setConfirmButtonEnabledIfNeeded;
- (void)configureSearchController;
- (void)configureDataSource;
- (id)snapshotForCurrentState;
- (id)snapshotForSearchResults:(id)results;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (void)handleSearchSelection;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view willDisplayHeaderView:(id)view forSection:(long long)section;
- (void)doneAction;
- (void)cancelAction;
- (void)updateSearchResultsForSearchController:(id)controller;
@end

#endif /* HKSpokenLanguagesViewController_h */
