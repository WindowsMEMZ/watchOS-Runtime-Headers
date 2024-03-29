//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFPrivacyReportWebsiteDetailViewController_h
#define SFPrivacyReportWebsiteDetailViewController_h
@import Foundation;

#include "UITableViewController.h"

@class NSArray, WBSTrackedFirstParty;

@interface SFPrivacyReportWebsiteDetailViewController : UITableViewController {
  /* instance variables */
  WBSTrackedFirstParty *_website;
  NSArray *_sections;
}

@property (nonatomic) BOOL separatesBlockedTrackers;

/* instance methods */
- (id)initWithWebsite:(id)website;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (void)_loadSections;
@end

#endif /* SFPrivacyReportWebsiteDetailViewController_h */
