//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIHealthSettingsDataSource_h
#define FIUIHealthSettingsDataSource_h
@import Foundation;

#include "FIUIHealthSettingsBirthDatePickerController.h"
#include "FIUIHealthSettingsHeightPickerController.h"
#include "FIUIHealthSettingsSexPickerController.h"
#include "FIUIHealthSettingsTableViewCell.h"
#include "FIUIHealthSettingsWeightPickerController.h"
#include "UITableViewDataSource-Protocol.h"

@class FIActivitySettingsController, NSString;
@protocol FIUIHealthSettingsDataSourceDelegate;

@interface FIUIHealthSettingsDataSource : NSObject<UITableViewDataSource> {
  /* instance variables */
  FIUIHealthSettingsTableViewCell *_birthDateCell;
  FIUIHealthSettingsTableViewCell *_biologicalSexCell;
  FIUIHealthSettingsTableViewCell *_heightCell;
  FIUIHealthSettingsTableViewCell *_weightCell;
  FIUIHealthSettingsTableViewCell *_wheelchairUseCell;
  FIActivitySettingsController *_preEditSettingsController;
  BOOL _showWheelchair;
}

@property (weak, nonatomic) NSObject<FIUIHealthSettingsDataSourceDelegate> *delegate;
@property (retain, nonatomic) FIActivitySettingsController *settingsController;
@property (retain, nonatomic) FIUIHealthSettingsBirthDatePickerController *birthDatePickerController;
@property (retain, nonatomic) FIUIHealthSettingsHeightPickerController *heightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsWeightPickerController *weightPickerController;
@property (retain, nonatomic) FIUIHealthSettingsSexPickerController *sexPickerController;
@property (readonly, nonatomic) FIActivitySettingsController *editedSettingsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActivitySettingsController:(id)controller showWheelchair:(BOOL)wheelchair;
- (id)birthDateCell;
- (id)biologicalSexCell;
- (id)heightCell;
- (id)weightCell;
- (id)wheelchairUseCell;
- (void)_updateCells;
- (void)_updateHeightCell;
- (void)_updateWeightCell;
- (void)_updateBirthDateCell;
- (void)_updateBiologicalSexCell;
- (void)wheelchairSwitchDidChange:(id)change;
- (void)cellDidBecomeFirstResponder:(id)responder;
- (void)cellDidResignFirstResponder:(id)responder;
- (long long)numberOfSectionsInTableView:(id)view;
- (long long)tableView:(id)view numberOfRowsInSection:(long long)section;
- (id)tableView:(id)view cellForRowAtIndexPath:(id)path;
- (BOOL)shouldHighlightRowAtIndexPath:(id)path;
- (void)startEditing;
- (void)endEditingAndDiscardChanges:(BOOL)changes;
@end

#endif /* FIUIHealthSettingsDataSource_h */
