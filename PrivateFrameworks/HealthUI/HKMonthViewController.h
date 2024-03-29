//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMonthViewController_h
#define HKMonthViewController_h
@import Foundation;

#include "HKViewController.h"
#include "HKCalendarScrollViewController.h"
#include "HKCalendarScrollViewControllerDelegate-Protocol.h"
#include "HKDateCache.h"
#include "HKMonthViewControllerDelegate-Protocol.h"

@class NSDate, NSDateComponents, NSString, UILabel;

@interface HKMonthViewController : HKViewController<HKCalendarScrollViewControllerDelegate> {
  /* instance variables */
  NSDateComponents *_cachedDateComponents;
}

@property (retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (weak, nonatomic) NSObject<HKMonthViewControllerDelegate> *delegate;
@property (readonly, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL wantsShortTitleDate;
@property (nonatomic) long long titleAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDateCache:(id)cache date:(id)date;
- (void)createCalendarScrollViewController;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)createTitleLabel;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)setCurrentDate:(id)date animateIfPossible:(BOOL)possible;
- (void)_setCurrentDate:(id)date;
- (void)traitCollectionDidChange:(id)change;
- (void)calendarScrollViewController:(id)controller didSelectDate:(id)date;
- (void)calendarScrollViewController:(id)controller didUpdateCenteredMonth:(id)month;
- (void)_updateBackButton;
- (void)_updateCurrentMonthBarButtonItemWithDate:(id)date;
- (id)_titleStringForDate:(id)date;
- (void)_didTapBackButton;
@end

#endif /* HKMonthViewController_h */
