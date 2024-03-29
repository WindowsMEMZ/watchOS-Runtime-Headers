//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKNanoAddEmergencyContactViewController_h
#define HKNanoAddEmergencyContactViewController_h
@import Foundation;

#include "NCABContactListCollectionViewController.h"
#include "HKNanoEditRelationshipPickerDelegate-Protocol.h"
#include "NCABContactDetailViewControllerDelegate-Protocol.h"
#include "NCABContactListCollectionViewControllerDelegate-Protocol.h"

@class HKMedicalIDStore, NSString, _HKEmergencyContact, _HKMedicalIDData;

@interface HKNanoAddEmergencyContactViewController : NCABContactListCollectionViewController<NCABContactListCollectionViewControllerDelegate, NCABContactDetailViewControllerDelegate, HKNanoEditRelationshipPickerDelegate> {
  /* instance variables */
  HKMedicalIDStore *_medicalIDStore;
  _HKMedicalIDData *_medicalIDData;
}

@property (retain, nonatomic) _HKEmergencyContact *contactToAdd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMedicalIDStore:(id)idstore medicalIDData:(id)iddata;
- (void)viewDidLoad;
- (BOOL)contactListViewController:(id)controller canSelectContact:(id)contact;
- (void)contactListViewController:(id)controller didSelectContact:(id)contact;
- (BOOL)contactDetailViewController:(id)controller shouldPerformDefaultActionForContactProperty:(id)property;
- (void)presentRelationshipSelector;
- (void)didSelectRelationship:(id)relationship;
- (void)saveEmergencyContact;
- (id)_meContactIdentifier;
@end

#endif /* HKNanoAddEmergencyContactViewController_h */
