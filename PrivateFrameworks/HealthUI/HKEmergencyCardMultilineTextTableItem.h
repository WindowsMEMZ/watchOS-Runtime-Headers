//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKEmergencyCardMultilineTextTableItem_h
#define HKEmergencyCardMultilineTextTableItem_h
@import Foundation;

#include "HKEmergencyCardTableItem.h"
#include "HKEmergencyCardRowHeightChangeDelegate-Protocol.h"
#include "HKMedicalIDEditorCellEditDelegate-Protocol.h"
#include "HKMedicalIDEditorCellHeightChangeDelegate-Protocol.h"
#include "HKMedicalIDEditorMultilineStringCell.h"

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem<HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate> {
  /* instance variables */
  HKMedicalIDEditorMultilineStringCell *_editableCell;
}

@property (weak, nonatomic) NSObject<HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate;

/* instance methods */
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)value;
- (id)_placeholderText;
- (void)_configureEditableCell:(id)cell;
- (id)_editableCell;
- (id)tableView:(id)view cellForRowAtIndex:(long long)index;
- (double)tableView:(id)view estimatedHeightForRowAtIndex:(long long)index;
- (double)tableView:(id)view heightForRowAtIndex:(long long)index;
- (double)_cellFittedHeightWithWidth:(double)width;
- (void)setData:(id)data;
- (void)medicalIDEditorCellDidChangeValue:(id)value;
- (void)medicalIDEditorCell:(id)cell didChangeHeight:(double)height keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidBeginEditing:(id)editing keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)medicalIDEditorCellDidChangeSelection:(id)selection keepRectVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visible inView:(id)view;
- (void)commitEditing;
@end

#endif /* HKEmergencyCardMultilineTextTableItem_h */
