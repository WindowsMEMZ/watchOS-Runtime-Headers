//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDEmergencyAccessLearnMoreTableViewController_h
#define HKMedicalIDEmergencyAccessLearnMoreTableViewController_h
@import Foundation;

#include "UITableViewController.h"

@interface HKMedicalIDEmergencyAccessLearnMoreTableViewController : UITableViewController
/* instance methods */
- (id)init;
- (void)viewDidLoad;
- (void)didTapDone:(id)done;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (double)tableView:(id)view estimatedHeightForRowAtIndexPath:(id)path;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (double)tableView:(id)view heightForHeaderInSection:(long long)section;
- (double)tableView:(id)view estimatedHeightForHeaderInSection:(long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)_bodyTextForIndexPath:(id)path;
- (id)tableView:(id)view viewForHeaderInSection:(long long)section;
- (void)tableView:(id)view willDisplayHeaderView:(id)view forSection:(long long)section;
- (id)_titleForHeaderInSection:(long long)section;
@end

#endif /* HKMedicalIDEmergencyAccessLearnMoreTableViewController_h */
