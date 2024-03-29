//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTransitTicketDetailViewController_h
#define PKTransitTicketDetailViewController_h
@import Foundation;

#include "UITableViewController.h"
#include "PKTransitTicketDetailDataSource-Protocol.h"

@class UIColor;

@interface PKTransitTicketDetailViewController : UITableViewController

@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (weak, nonatomic) NSObject<PKTransitTicketDetailDataSource> *dataSource;

/* instance methods */
- (id)initWithTransitTicketDetailDataSource:(id)source;
- (void)viewDidLoad;
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (void)_applyDefaultStaticStylingToCell:(id)cell;
@end

#endif /* PKTransitTicketDetailViewController_h */
