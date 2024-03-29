//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBAutofillController_h
#define UIKBAutofillController_h
@import Foundation;

#include "UIColor.h"

@class NSMutableDictionary;

@interface UIKBAutofillController : NSObject {
  /* instance variables */
  BOOL _didOptOutOfAutofillSignup;
}

@property (copy, nonatomic) UIColor *textFieldOrigColor;
@property (readonly, retain, nonatomic) NSMutableDictionary *autofillGroup;
@property (copy, nonatomic) NSMutableDictionary *fallbackAutofillGroup;
@property (nonatomic) long long delegateNeedsAutofillMode;
@property (nonatomic) BOOL shouldSaveAutofill;

/* class methods */
+ (id)preferredInsertionOrder;
+ (unsigned long long)translateToTextInputAutofillMode:(long long)mode;
+ (long long)translateToUIAutofillMode:(unsigned long long)mode;

/* instance methods */
- (void)_setAutofillGroup:(id)group;
- (id)init;
- (long long)doTraits:(id)traits matchTextContentType:(id)type;
- (id)textContentTypeForInputDelegate:(id)delegate;
- (id)autofillContextForInputDelegate:(id)delegate;
- (void)updateAutofillContextForInputDelegate:(id)delegate;
- (long long)needAutofillCandidate:(id)candidate delegateAsResponder:(id)responder keyboardState:(id)state;
- (BOOL)_prohibitAutofill:(id)autofill needASPKeyboard:(BOOL)aspkeyboard;
- (id)signupKeywordList;
- (id)loginKeywordList;
- (id)accessibilitySignupKeywordList;
- (id)accessibilityLoginKeywordList;
- (id)contactAutoFillKeywordsForKey:(id)key value:(id)value localizedKeywords:(id)keywords;
- (id)searchKeywordSet;
- (id)addressKeywordSet;
- (id)phoneKeywordSet;
- (id)emailKeywordSet;
- (id)processLocalizedString:(id)string;
- (id)textSignalsForResponder:(id)responder;
- (long long)containsIndicationInText:(id)text withAccessibilityHints:(BOOL)hints;
- (long long)signUpSignalFromButton:(id)button;
- (long long)signUpSignalFromViewControllerHierarchy:(id)hierarchy;
- (long long)signUpSignalFromNavBarItem:(id)item;
- (long long)contactAutofillModeWithAutofillGroup:(id)group responders:(id)responders;
- (BOOL)signupHintForUsername:(id)username password:(id)password responder:(id)responder;
- (long long)_needAutofillCandidate:(id)candidate delegateAsResponder:(id)responder;
- (void)clearAutofillGroup;
- (void)clearFallbackAutofillGroup;
- (BOOL)containsUsernamePasswordPairsInAutofillGroup:(id)group;
- (BOOL)preferFallbackAutofillGroup;
- (void)handleAutofillCredentialSaveIfNeeded:(id)needed fromASP:(BOOL)asp;
- (void)handleWebviewCredentialsSaveForResponder:(id)responder WebsiteURL:(id)url user:(id)user password:(id)password passwordIsAutoGenerated:(BOOL)generated;
- (void)trackResponderForAutofillIfNeeded:(id)needed;
- (BOOL)shouldLoadASPForResponder:(id)responder;
- (void)didOptOutOfAutofillSignup;
- (void)showASPInTextField:(id)field isRightToLeft:(BOOL)left;
- (void)clearASPVisualEffectsInTextField:(id)field;
- (void)_clearASPInTextField:(id)field;
- (void)clearASPInPasswordFields;
- (void)optOutASPInTextField;
- (void)enumeratePasswordFieldsUsingBlock:(id /* block */)block;
- (void)addTemporaryTextColorToTextField:(id)field;
- (void)removeTemporaryTextColorFromTextField:(id)field;
@end

#endif /* UIKBAutofillController_h */
