//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKRecurrenceMonthlyChooserController_h
#define EKRecurrenceMonthlyChooserController_h
@import Foundation;

#include "EKRecurrenceChooserController.h"
#include "EKRecurrenceChooserControllerDelegate-Protocol.h"
#include "EKRecurrenceMonthDayChooserController.h"
#include "EKRecurrenceOrdinalChooserController.h"

@class UITableViewCell;

@interface EKRecurrenceMonthlyChooserController : EKRecurrenceChooserController {
  /* instance variables */
  EKRecurrenceMonthDayChooserController *_monthDayChooser;
  EKRecurrenceOrdinalChooserController *_ordinalChooser;
  NSObject<EKRecurrenceChooserControllerDelegate> *_delegate;
  long long _selectedRow;
  UITableViewCell *_onEachCell;
  UITableViewCell *_onTheCell;
}

@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;

/* instance methods */
- (id)initWithDate:(id)date;
- (void)setDelegate:(id)delegate;
- (void)updateRecurrenceRuleBuilder:(id)builder;
- (void)updateFromRecurrenceRule:(id)rule;
- (long long)frequency;
- (id)_currentChooser;
- (long long)numberOfRows;
- (id)cellForRow:(long long)row;
- (double)heightForRow:(long long)row;
- (void)rowTapped:(long long)tapped;
- (BOOL)drawBackgroundForRow:(long long)row;
- (void)_selectRow:(long long)row;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)color;
@end

#endif /* EKRecurrenceMonthlyChooserController_h */
