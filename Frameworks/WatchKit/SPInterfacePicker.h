//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPInterfacePicker_h
#define SPInterfacePicker_h
@import Foundation;

#include "PUICPickerView.h"
#include "PUICPickerViewDataSource-Protocol.h"
#include "PUICPickerViewDelegate-Protocol.h"
#include "SPInterfaceActionItem-Protocol.h"

@class NSArray, NSBundle, NSDictionary, NSString;

@interface SPInterfacePicker : PUICPickerView<PUICPickerViewDataSource, PUICPickerViewDelegate, SPInterfaceActionItem> {
  /* instance variables */
  NSBundle *_bundle;
  NSString *_stringsFileName;
  id _target;
  SEL _action;
  struct CGSize { double width; double height; } _cachedContainerSize;
  struct CGSize { double width; double height; } _cachedSize;
  NSArray *_staticItems;
  long long _pickerStyle;
}

@property (copy, nonatomic) NSDictionary *companionProperty;
@property (nonatomic) long long interfaceAlignment;
@property (nonatomic) long long verticalInterfaceAlignment;
@property (nonatomic) double height;
@property (nonatomic) double heightAdjustment;
@property (nonatomic) double width;
@property (nonatomic) double widthAdjustment;
@property (nonatomic) struct CGSize { double x0; double x1; } interfacePlistSize;
@property (nonatomic) BOOL isNativeInterfaceObject;
@property (copy, nonatomic) NSString *interfaceAction;
@property (copy, nonatomic) NSString *selectionAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *itemDescriptionForIB;

/* instance methods */
- (id)initWithItemDescription:(id)description bundle:(id)bundle stringsFileName:(id)name;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_updateForFirstResponderStatus;
- (void)pickerDidSettle;
- (void)pickerDidFocus;
- (void)pickerDidClearFocus;
- (void)pickerView:(id)view didSelectItemAtIndex:(long long)index;
- (long long)numberOfItemsInPickerView:(id)view;
- (id)pickerView:(id)view viewForItemAtIndex:(long long)index;
- (id)pickerView:(id)view keylineCaptionForItemAtIndex:(long long)index;
- (void)setInterfaceItemValue:(id)value property:(id)property;
- (BOOL)hasIntrinsicHeight;
- (void)setTarget:(id)target forInterfaceItemAction:(SEL)action;
@end

#endif /* SPInterfacePicker_h */
