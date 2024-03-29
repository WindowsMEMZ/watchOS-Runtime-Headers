//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSPasscodeField_h
#define PSPasscodeField_h
@import Foundation;

#include "UIView.h"
#include "PSPasscodeFieldDelegate-Protocol.h"
#include "UIKeyInput-Protocol.h"

@class NSArray, NSMutableArray, NSMutableString, NSString, UIColor, UITextInputPasswordRules;

@interface PSPasscodeField : UIView<UIKeyInput> {
  /* instance variables */
  NSMutableArray *_dotOutlineViews;
  NSMutableArray *_dotFullViews;
  NSMutableArray *_dashViews;
  NSMutableArray *_digitViews;
  NSMutableString *_stringValue;
}

@property (weak, nonatomic) NSObject<PSPasscodeFieldDelegate> *delegate;
@property (nonatomic) unsigned long long numberOfEntryFields;
@property (nonatomic) BOOL securePasscodeEntry;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) long long keyboardAppearance;
@property (retain, nonatomic) NSArray *fieldSpacing;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL shouldBecomeFirstResponderOnTap;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long inlinePredictionType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNumberOfEntryFields:(unsigned long long)fields;
- (id)dotFullImage;
- (id)dotOutlineImage;
- (id)dashImage;
- (struct CGSize { double x0; double x1; })dotFullSize;
- (struct CGSize { double x0; double x1; })promptSize;
- (id)digitFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)passcodeFieldTapped:(id)tapped;
- (BOOL)isSecureTextEntry;
- (void)layoutSubviews;
- (void)_delegateEnteredPasscode:(id)passcode;
- (id)stringValue;
- (void)setStringValue:(id)value;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)insertText:(id)text;
- (void)deleteBackward;
- (BOOL)isEnabled;
@end

#endif /* PSPasscodeField_h */
