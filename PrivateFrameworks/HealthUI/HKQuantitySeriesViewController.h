//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKQuantitySeriesViewController_h
#define HKQuantitySeriesViewController_h
@import Foundation;

#include "UIViewController.h"
#include "HKQuantitySeriesDataProvider.h"

@class UITableView;

@interface HKQuantitySeriesViewController : UIViewController

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HKQuantitySeriesDataProvider *dataProvider;

/* instance methods */
- (void)viewDidLoad;
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;
- (void)willMoveToParentViewController:(id)controller;
- (void)loadView;
@end

#endif /* HKQuantitySeriesViewController_h */
