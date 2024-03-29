//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSEditableTableCell_h
#define PSEditableTableCell_h
@import Foundation;

#include "PSTableCell.h"
#include "PSListController.h"
#include "UITextFieldDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSString, UIColor;

@interface PSEditableTableCell : PSTableCell<UITextViewDelegate, UITextFieldDelegate> {
  /* instance variables */
  UIColor *_textColor;
  id _delegate;
  BOOL _forceFirstResponder;
  BOOL _delaySpecifierRelease;
  SEL _targetSetter;
  id _realTarget;
  BOOL _valueChanged;
}

@property (readonly, nonatomic) BOOL returnKeyTapped;
@property (weak, nonatomic) PSListController *controllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)cellStyle;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)dealloc;
- (void)refreshCellContentsWithSpecifier:(id)specifier;
- (void)prepareForReuse;
- (BOOL)canReload;
- (void)controlChanged:(id)changed;
- (void)endEditingAndSave;
- (void)cellRemovedFromView;
- (void)_setValueChanged;
- (void)_saveForExit;
- (void)textFieldDidBeginEditing:(id)editing;
- (BOOL)textFieldShouldClear:(id)clear;
- (void)textFieldDidEndEditing:(id)editing;
- (BOOL)textFieldShouldReturn:(id)return;
- (void)setValueChangedTarget:(id)target action:(SEL)action specifier:(id)specifier;
- (id)_defaultTextColor;
- (void)setCellEnabled:(BOOL)enabled;
- (void)setTitle:(id)title;
- (void)setDelegate:(id)delegate;
- (void)layoutSubviews;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canResignFirstResponder;
- (BOOL)isFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)isTextFieldEditing;
- (BOOL)isEditing;
- (BOOL)_cellIsEditing;
- (id)value;
- (void)setValue:(id)value;
- (void)setPlaceholderText:(id)text;
- (id)textField;
@end

#endif /* PSEditableTableCell_h */
