//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardNameAndPictureTableItem_h
#define HKEmergencyCardNameAndPictureTableItem_h
@import Foundation;

#include "HKEmergencyCardTableItem.h"
#include "HKEmergencyCardRowHeightChangeDelegate-Protocol.h"
#include "HKMedicalIDEditorCellEditDelegate-Protocol.h"
#include "HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h"
#include "HKMedicalIDEditorNameAndPhotoCell.h"
#include "UIImagePickerControllerDelegate-Protocol.h"
#include "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem<HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate> {
  /* instance variables */
  HKMedicalIDEditorNameAndPhotoCell *_cell;
}

@property (weak, nonatomic) NSObject<HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initInEditMode:(BOOL)mode;
- (id)title;
- (id)_cell;
- (void)_editPhotoTapped:(id)tapped;
- (id)tableView:(id)view cellForRowAtIndex:(long long)index;
- (double)tableView:(id)view estimatedHeightForRowAtIndex:(long long)index;
- (double)tableView:(id)view heightForRowAtIndex:(long long)index;
- (double)_cellFittedHeightWithWidth:(double)width;
- (void)medicalIDEditorCell:(id)cell didChangeHeight:(double)height keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidBeginEditing:(id)editing keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidChangeSelection:(id)selection keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)commitEditing;
- (void)setData:(id)data;
- (void)_updateMedicalIDPhotoMenu;
- (void)medicalIDEditorCellDidChangeValue:(id)value;
- (void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
- (void)imagePickerControllerDidCancel:(id)cancel;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)orientations;
@end

#endif /* HKEmergencyCardNameAndPictureTableItem_h */
