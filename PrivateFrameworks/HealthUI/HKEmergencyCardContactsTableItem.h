//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardContactsTableItem_h
#define HKEmergencyCardContactsTableItem_h
@import Foundation;

#include "HKEmergencyCardTableItem.h"
#include "HKEmergencyCardContactUpdateDelegate-Protocol.h"
#include "HKEmergencyContactRelationshipPickerDelegate-Protocol.h"
#include "HKMedicalIDEditorCellEditDelegate-Protocol.h"
#include "HKMedicalIDEmergencyContactFlow.h"
#include "HKMedicalIDEmergencyContactFlowDelegate-Protocol.h"

@class UITableViewCell, _HKEmergencyContact;

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem<HKMedicalIDEditorCellEditDelegate, HKMedicalIDEmergencyContactFlowDelegate, HKEmergencyContactRelationshipPickerDelegate> {
  /* instance variables */
  UITableViewCell *_lastDequeuedAddContactCell;
  _HKEmergencyContact *_selectedContact;
  HKMedicalIDEmergencyContactFlow *_contactPicker;
}

@property (weak, nonatomic) NSObject<HKEmergencyCardContactUpdateDelegate> *delegate;

/* instance methods */
- (id)initInEditMode:(BOOL)mode;
- (BOOL)hasPresentableData;
- (long long)itemTypeForRowIndex:(long long)index;
- (long long)contactIndexForRowIndex:(long long)index;
- (void)callEmergencyContact:(id)contact;
- (long long)numberOfRows;
- (BOOL)refreshFromData:(BOOL)data;
- (id)_dequeueAndConfigureContactViewCellForIndex:(long long)index inTableView:(id)view;
- (id)_footerAttributedText;
- (id)_footerAttributedTextForPrimaryProfile;
- (id)_footerAttributedTextForSecondaryProfile;
- (id)_footerTextForSecondaryProfile;
- (id)_footerTextWithGivenName:(id)name;
- (id)_dequeueAndConfigureContactEditCellForIndex:(long long)index inTableView:(id)view;
- (id)tableView:(id)view cellForRowAtIndex:(long long)index;
- (id)title;
- (double)tableView:(id)view heightForRowAtIndex:(long long)index;
- (BOOL)shouldHighlightRowAtIndex:(long long)index;
- (void)_setupContactPickingFlow;
- (void)_presentEmergencyContactPickerIfPossible;
- (void)tableView:(id)view didSelectRowAtIndex:(long long)index;
- (BOOL)canEditRowAtIndex:(long long)index;
- (long long)editingStyleForRowAtIndex:(long long)index;
- (long long)commitEditingStyle:(long long)style forRowAtIndex:(long long)index;
- (void)medicalIDEditorCellDidChangeValue:(id)value;
- (void)medicalIDEditorCellDidTapLabel:(id)label;
- (void)emergencyContactRelationshipPicker:(id)picker didChooseRelationshipNamed:(id)named;
- (void)emergencyContactRelationshipPickerDidCancel:(id)cancel;
- (void)_addEmergencyContactToData:(id)data;
- (void)emergencyContactFlow:(id)flow didSelectContact:(id)contact;
- (void)emergencyContactFlowDidCancel:(id)cancel;
- (id)titleForFooter;
- (id)viewOnlyTitle;
- (id)titleForHeader;
@end

#endif /* HKEmergencyCardContactsTableItem_h */
