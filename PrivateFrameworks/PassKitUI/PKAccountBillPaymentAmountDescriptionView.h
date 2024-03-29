//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAccountBillPaymentAmountDescriptionView_h
#define PKAccountBillPaymentAmountDescriptionView_h
@import Foundation;

#include "UIView.h"
#include "PKAccountBillPaymentAmountContainerView.h"
#include "PKAccountBillPaymentAmountDescriptionViewDelegate-Protocol.h"
#include "PKEnterCurrencyAmountViewDelegate-Protocol.h"
#include "PKNumberPadSuggestionsView.h"
#include "PKNumberPadSuggestionsViewDelegate-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSDecimalNumber, NSString, PKAccount, PKAccountServiceAccountResolutionCofiguration, PKBillPaymentSuggestedAmountList, UILabel, UITextView;

@interface PKAccountBillPaymentAmountDescriptionView : UIView<PKNumberPadSuggestionsViewDelegate, UITextViewDelegate, PKEnterCurrencyAmountViewDelegate> {
  /* instance variables */
  UILabel *_suggestedAmountTitleLabel;
  UITextView *_suggestedAmountDescriptionView;
  PKNumberPadSuggestionsView *_suggestionView;
  NSDecimalNumber *_enteredAmount;
  NSString *_learnMoreString;
  PKBillPaymentSuggestedAmountList *_suggestionList;
  PKAccount *_account;
  PKAccountServiceAccountResolutionCofiguration *_configuration;
}

@property (weak, nonatomic) NSObject<PKAccountBillPaymentAmountDescriptionViewDelegate> *delegate;
@property (readonly, nonatomic) PKAccountBillPaymentAmountContainerView *amountContainerView;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSDecimalNumber *minimumAmount;
@property (copy, nonatomic) NSDecimalNumber *maximumAmount;
@property (nonatomic) BOOL showAmount;
@property (nonatomic) BOOL showDescriptionLabels;
@property (nonatomic) BOOL showDescriptionSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSuggestedAmountList:(id)list account:(id)account configuration:(id)configuration delegate:(id)delegate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)numberPadSuggestionsView:(id)view didSelectSuggestion:(id)suggestion;
- (BOOL)textView:(id)view shouldInteractWithURL:(id)url inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range interaction:(long long)interaction;
- (id)_sugestedAmountDescriptionAttributedString;
- (void)_updateDescriptionAlpha;
- (void)showKeyboard;
- (void)dismissKeyboard;
- (BOOL)enterCurrencyAmountView:(id)view shouldChangeAmountFrom:(id)from to:(id)to;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)amount;
- (void)_updateEnteredAmount:(id)amount;
- (void)_enteredAmountDidChangeTo:(id)to;
- (BOOL)_isEnteredAmountValid;
- (BOOL)_shouldShakeWithNewAmount:(id)amount;
- (id)_keypadSuggestions;
- (id)_enterCurrencyAmountView;
@end

#endif /* PKAccountBillPaymentAmountDescriptionView_h */
