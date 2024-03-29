//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKClinicalAuthorizationIntroViewController_h
#define HKClinicalAuthorizationIntroViewController_h
@import Foundation;

#include "HKViewController.h"
#include "HKClinicalAuthorizationHeaderView.h"
#include "HKClinicalAuthorizationSequenceContext.h"
#include "HKHealthPrivacyServicePromptController-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UITableView, UIViewController;
@protocol HKHealthPrivacyServicePromptControllerDelegate;

@interface HKClinicalAuthorizationIntroViewController : HKViewController<UITableViewDataSource, UITableViewDelegate, HKHealthPrivacyServicePromptController>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) HKClinicalAuthorizationHeaderView *headerView;
@property (retain, nonatomic) UIViewController *nextViewController;
@property (copy, nonatomic) NSString *headerTitle;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) UIBarButtonItem *navigationRightButton;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePromptControllerDelegate> *delegate;
@property (readonly, nonatomic) HKClinicalAuthorizationSequenceContext *context;
@property (copy, nonatomic) NSString *headerText;
@property (copy, nonatomic) NSString *buttonText;
@property (retain, nonatomic) UIBarButtonItem *navigationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithContext:(id)context viewController:(id)controller;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)appear;
- (void)_configureTableView;
- (void)_configureNavigationItem;
- (void)_configureHeaderViewWithSource:(id)source;
- (id)_createFooterView;
- (BOOL)_indexPathIsValidRow:(id)row;
- (long long)_rowFromIndexPath:(id)path;
- (id)_cellForDetailsAtIndexPath:(id)path;
- (id)_cellForViewHealthRecordsAtIndexPath:(id)path;
- (void)_cancelButtonPressed:(id)pressed;
- (void)_finishWithError:(id)error;
- (void)_nextButtonPressed:(id)pressed;
- (void)_viewHealthRecordsCellTapped:(id)tapped;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (void)_updateForCurrentContentSizeCategory;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* HKClinicalAuthorizationIntroViewController_h */
