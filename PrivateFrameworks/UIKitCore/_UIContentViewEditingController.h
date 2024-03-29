//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIContentViewEditingController_h
#define _UIContentViewEditingController_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UILabel.h"
#include "UILongPressGestureRecognizer.h"
#include "UITextField.h"
#include "UITextFieldDelegate-Protocol.h"
#include "UIView.h"
#include "_UIContentViewEditingConfiguration.h"
#include "_UIContentViewLabelConfiguration.h"
#include "_UIPassthroughScrollInteraction.h"
#include "_UIPassthroughScrollInteractionDelegate-Protocol.h"

@class NSString;

@interface _UIContentViewEditingController : NSObject<UITextFieldDelegate, UIGestureRecognizerDelegate, _UIPassthroughScrollInteractionDelegate> {
  /* instance variables */
  UILongPressGestureRecognizer *_longPressRecognizer;
  _UIPassthroughScrollInteraction *_passthroughInteraction;
  BOOL _hasEdits;
}

@property (retain, nonatomic) UITextField *textInputView;
@property (readonly, weak, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UILabel *editableLabel;
@property (readonly, nonatomic) _UIContentViewEditingConfiguration *editingConfiguration;
@property (readonly, nonatomic) _UIContentViewLabelConfiguration *labelConfiguration;
@property (readonly, nonatomic) BOOL displayingEditedText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentView:(id)view editableLabel:(id)label;
- (void)updateLabelConfiguration:(id)configuration editingConfiguration:(id)configuration;
- (void)dealloc;
- (void)longPressRecognizerChanged:(id)changed;
- (BOOL)makeTextInputFirstResponderWithInitialLayoutBlock:(id /* block */)block;
- (BOOL)isDisplayingEditedText;
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range replacementString:(id)string;
- (BOOL)textFieldShouldBeginEditing:(id)editing;
- (void)textFieldDidBeginEditing:(id)editing;
- (BOOL)textFieldShouldReturn:(id)return;
- (BOOL)textFieldShouldEndEditing:(id)editing;
- (void)textFieldDidEndEditing:(id)editing;
- (BOOL)passthroughScrollInteraction:(id)interaction shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })location withEvent:(id)event;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)recognize;
@end

#endif /* _UIContentViewEditingController_h */
