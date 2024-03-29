//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountAutomaticPaymentsConfigurationViewController_h
#define PKAccountAutomaticPaymentsConfigurationViewController_h
@import Foundation;

#include "PKSectionTableViewController.h"
#include "PKAccountAutomaticPaymentsController.h"
#include "PKAccountAutomaticPaymentsDateFooterView.h"
#include "PKAddBankAccountInformationViewControllerDelegate-Protocol.h"
#include "PKFixedAmountWrapperView.h"
#include "PKMonthDayCollectionViewController.h"
#include "PKMonthDayCollectionViewControllerDelegate-Protocol.h"
#include "PKTableHeaderView.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSCalendar, NSDate, NSDateFormatter, NSDictionary, NSNumber, NSNumberFormatter, NSString, NSTimeZone, PKAccount, UIPickerView;

@interface PKAccountAutomaticPaymentsConfigurationViewController : PKSectionTableViewController<PKAddBankAccountInformationViewControllerDelegate, PKMonthDayCollectionViewControllerDelegate, UIPickerViewDelegate, UIPickerViewDataSource> {
  /* instance variables */
  PKAccountAutomaticPaymentsController *_controller;
  PKAccount *_account;
  NSTimeZone *_productTimeZone;
  unsigned long long _featureIdentifier;
  PKTableHeaderView *_tableHeaderView;
  NSNumberFormatter *_currencyFormatter;
  NSDateFormatter *_modelDateFormatter;
  NSDateFormatter *_pickerDateFormatter;
  NSDateFormatter *_cellDateFormatter;
  NSDateFormatter *_dayNameFormatter;
  NSDateFormatter *_cardinalDayDateFormatter;
  BOOL _useOrdinalDay;
  NSArray *_amounts;
  NSArray *_frequencies;
  NSDictionary *_frequenciesMap;
  NSArray *_dates;
  NSNumber *_selectedAmount;
  NSNumber *_selectedFrequency;
  NSDate *_selectedDate;
  long long _scheduledDay;
  long long _selectedRowType;
  NSCalendar *_productCalendar;
  PKMonthDayCollectionViewController *_monthDayCollectionViewController;
  BOOL _shouldShowCollectionView;
  UIPickerView *_amountPicker;
  UIPickerView *_frequencyPicker;
  UIPickerView *_datePicker;
  PKFixedAmountWrapperView *_wrapperView;
  PKAccountAutomaticPaymentsDateFooterView *_footerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithController:(id)controller;
- (void)dealloc;
- (void)viewDidLoad;
- (id)tableView;
- (void)viewWillLayoutSubviews;
- (id)tableHeaderView;
- (void)setSelectedFrequency:(id)frequency;
- (id)_datesForFrequency:(long long)frequency;
- (void)_updateDates;
- (void)setSelectedAmount:(id)amount;
- (void)setSelectedDate:(id)date;
- (BOOL)shouldMapSection:(unsigned long long)section;
- (void)monthDaySelectionViewController:(id)controller didSelectDate:(id)date day:(long long)day;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (long long)numberOfComponentsInPickerView:(id)view;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (id)_dates;
- (id)_amounts;
- (id)_frequencies;
- (id)_frequencyTitleForFrequency:(long long)frequency;
- (long long)_preset;
- (id)_amount;
- (long long)_frequency;
- (void)_updateNextButtonEnabledIfNecessary;
- (void)handleNextButtonTapped:(id)tapped;
- (void)_performNextButtonTapped;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view viewForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForFooterInSection:(long long)section;
- (double)tableView:(id)view heightForRowAtIndexPath:(id)path;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (id)_textForPaymentRowType:(long long)type;
- (id)_detailTextForPaymentRowType:(long long)type;
- (id)_displayStringForSelectedDate;
- (id)_textForAmount:(id)amount;
- (long long)_paymentRowTypeForIndexPath:(id)path;
- (id)_footerText;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)path;
- (id)_addBankAccountInformationViewController;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)information;
- (void)addBankAccountInformationViewController:(id)controller didAddFundingSource:(id)source;
- (void)addBankAccountInformationViewControllerDidFinish:(id)finish;
- (void)addBankAccountInformationViewController:(id)controller didFailWithError:(id)error;
@end

#endif /* PKAccountAutomaticPaymentsConfigurationViewController_h */
