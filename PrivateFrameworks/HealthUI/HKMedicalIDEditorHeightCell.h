//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKMedicalIDEditorHeightCell_h
#define HKMedicalIDEditorHeightCell_h
@import Foundation;

#include "HKMedicalIDEditorCell.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"

@class NSNumber, NSString, UIPickerView;

@interface HKMedicalIDEditorHeightCell : HKMedicalIDEditorCell<UIPickerViewDataSource, UIPickerViewDelegate> {
  /* instance variables */
  UIPickerView *_picker;
  BOOL _usesImperialUnits;
}

@property (retain, nonatomic) NSNumber *centimeterValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_commonInit;
- (void)_localeDidChange:(id)change;
- (id)formattedValue;
- (void)_showPicker;
- (void)dealloc;
- (void)_hidePicker;
- (void)beginEditing;
- (void)commitEditing;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (double)pickerView:(id)view widthForComponent:(long long)component;
- (id)pickerView:(id)view titleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
@end

#endif /* HKMedicalIDEditorHeightCell_h */
