//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSTextViewTableCell_h
#define PSTextViewTableCell_h
@import Foundation;

#include "PSTableCell.h"
#include "PSTextView.h"
#include "UITextContentViewDelegate-Protocol.h"

@class NSString;

@interface PSTextViewTableCell : PSTableCell<UITextContentViewDelegate>

@property (retain, nonatomic) PSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier specifier:(id)specifier;
- (void)setValue:(id)value;
- (void)textContentViewDidChange:(id)change;
- (void)cellRemovedFromView;
- (void)layoutSubviews;
- (void)_adjustTextView:(id)view updateTable:(BOOL)table withSpecifier:(id)specifier;
- (void)textContentViewDidEndEditing:(id)editing;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect selected:(BOOL)selected;
@end

#endif /* PSTextViewTableCell_h */
