//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKSelectSinglePicker_h
#define WKSelectSinglePicker_h
@import Foundation;

#include "UIPickerView.h"
#include "UIPickerViewDataSource-Protocol.h"
#include "UIPickerViewDelegate-Protocol.h"
#include "WKContentView.h"
#include "WKFormControl-Protocol.h"

@class NSString;

@interface WKSelectSinglePicker : UIPickerView<WKFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
  /* instance variables */
  WKContentView *_view;
  long long _selectedIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithView:(id)view;
- (void)dealloc;
- (id)controlView;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (long long)numberOfComponentsInPickerView:(id)view;
- (long long)pickerView:(id)view numberOfRowsInComponent:(long long)component;
- (id)pickerView:(id)view attributedTitleForRow:(long long)row forComponent:(long long)component;
- (void)pickerView:(id)view didSelectRow:(long long)row inComponent:(long long)component;
- (void)selectRow:(long long)row inComponent:(long long)component extendingSelection:(BOOL)selection;
@end

#endif /* WKSelectSinglePicker_h */
