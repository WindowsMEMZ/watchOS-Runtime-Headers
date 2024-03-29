//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUICustomRecurrenceViewController_h
#define EKUICustomRecurrenceViewController_h
@import Foundation;

#include "UIViewController.h"
#include "EKRecurrenceChooserController.h"
#include "EKRecurrenceChooserControllerDelegate-Protocol.h"
#include "EKRecurrenceMonthChooserController.h"
#include "EKRecurrenceMonthlyChooserController.h"
#include "EKRecurrenceOrdinalChooserController.h"
#include "EKRecurrenceWeekdayChooserController.h"
#include "EKUIManagedViewController-Protocol.h"
#include "EKUIPopupTableViewCell.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"
#include "UITableViewDataSource-Protocol.h"
#include "UITableViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class EKRecurrenceRule, NSDate, NSString, NSTimeZone, UIPickerView, UISwitch, UITableView, UITableViewCell;

@interface EKUICustomRecurrenceViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, EKRecurrenceChooserControllerDelegate, UITextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate, EKUIManagedViewController> {
  /* instance variables */
  long long _cachedFrequency;
  long long _cachedInterval;
  EKRecurrenceRule *_cachedRecurrenceRule;
  BOOL _showingIntervalPicker;
  EKUIPopupTableViewCell *_frequencySummaryCell;
  UITableViewCell *_intervalSummaryCell;
  UIPickerView *_intervalPicker;
  BOOL _useClearBackground;
}

@property (copy) id /* block */ completionBlock;
@property (retain) UITableView *tableView;
@property (weak) EKRecurrenceChooserController *currentChooser;
@property (retain) EKRecurrenceWeekdayChooserController *weeklyChooser;
@property (retain) EKRecurrenceMonthlyChooserController *monthlyChooser;
@property (retain) EKRecurrenceMonthChooserController *yearlyChooser;
@property (retain) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser;
@property (retain) NSDate *startDate;
@property (retain) NSTimeZone *timeZone;
@property (retain) UISwitch *yearOrdinalSwitch;
@property (copy) NSString *recurrenceSummaryString;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property BOOL prohibitsYearlyRecurrenceInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)isRecurrenceRuleOrdinal:(id)ordinal;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithStartDate:(id)date timeZone:(id)zone clearBackground:(BOOL)background;
- (void)loadView;
- (void)viewWillAppear:(BOOL)appear;
- (void)resetBackgroundColor;
- (void)traitCollectionDidChange:(id)change;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (void)_createChoosersAndControls;
- (id)frequencyPopupMenu;
- (void)viewWillDisappear:(BOOL)disappear;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (long long)numberOfSectionsInTableView:(id)view;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)path;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (void)tableView:(id)view willDisplayFooterView:(id)view forSection:(long long)section;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)path;
- (void)_toggleInlineSpinnerForTag:(long long)tag;
- (void)_setShowingIntervalPicker:(BOOL)picker;
- (void)recurrenceChooserUpdated:(id)updated;
- (void)recurrenceChooserWantsReload:(id)reload;
- (void)recurrenceChooser:(id)chooser wantsRowReload:(long long)reload;
- (void)_updateRecurrenceRule;
- (id)recurrenceRule;
- (void)setRecurrenceRule:(id)rule;
- (void)setRecurrenceRule:(id)rule shouldUpdatePickers:(BOOL)pickers;
- (void)_refreshCacheAndPickers;
- (void)_updateSummaryLabel;
- (void)_updateCustomPickerView;
- (void)_updateTableSectionsFromFrequency:(long long)frequency toFrequency:(long long)frequency;
- (void)_updateFrequencyRows;
- (void)_frequencyPickerViewUpdated;
- (id)_chooserForFrequency:(long long)frequency;
- (void)_yearOrdinalSwitchChanged:(id)changed;
- (id)_stringForFrequency:(long long)frequency;
- (id)_stringForFrequency:(long long)frequency interval:(long long)interval;
- (id)_everyStringForFrequency:(long long)frequency interval:(long long)interval;
- (long long)_tagForIndexPath:(id)path;
- (long long)_numberOfRowsForSection:(long long)section;
- (BOOL)_disallowsRecurrenceInterval;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (BOOL)wantsManagement;
- (BOOL)canManagePresentationStyle;
- (BOOL)prefersPushForSizeClass:(long long)class;
- (BOOL)canRequirePushOrPresentation;
@end

#endif /* EKUICustomRecurrenceViewController_h */
