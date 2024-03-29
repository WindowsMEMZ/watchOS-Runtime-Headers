//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFFormAutocompleteState_h
#define SFFormAutocompleteState_h
@import Foundation;

#include "CNContactPickerDelegate-Protocol.h"
#include "SFAppAutoFillOneTimeCodeProviderObserver-Protocol.h"
#include "SFContactAutoFillViewControllerFiller-Protocol.h"
#include "SFCreditCardFillingViewController.h"
#include "SFFormAutoFillFrameHandle.h"
#include "_SFCreditCardCaptureViewControllerDelegate-Protocol.h"
#include "_SFFormAutoFillController.h"
#include "_SFFormAutoFillInputSession.h"
#include "_SFFormDataController.h"

@class BOOL *, NSArray, NSDictionary, NSString, UIView, WBSAuthenticationServicesAgentProxy, WBSFormAutoFillMetadataCorrector, WBSFormControlMetadata, WBSFormMetadata, WBSMultiRoundAutoFillManager;

@interface SFFormAutocompleteState : NSObject<CNContactPickerDelegate, SFContactAutoFillViewControllerFiller, _SFCreditCardCaptureViewControllerDelegate, SFAppAutoFillOneTimeCodeProviderObserver> {
  /* instance variables */
  _SFFormAutoFillController *_autoFillController;
  _SFFormDataController *_dataController;
  UIView *_emptyInputView;
  WBSFormMetadata *_formMetadata;
  unsigned long long _formType;
  NSDictionary *_formValues;
  BOOL _gatheringFormValues;
  BOOL _hasNotedThatTextDidChangeInPasswordField;
  NSString *_prefixForSuggestions;
  NSArray *_cachedCredentialMatches;
  NSArray *_cachedRelatedCredentialMatches;
  id /* block */ _credentialMatchesCompletionHandler;
  BOOL _fetchingLoginCredentialSuggestions;
  BOOL _invalidated;
  BOOL _hasDeterminedIfURLIsAllowedByWhiteList;
  BOOL _URLIsAllowedByWhiteList;
  id /* block */ _displayOtherContactsCompletionHandler;
  id /* block */ _customAutoFillContactCompletionHandler;
  id /* block */ _creditCardCaptureCompletionHandler;
  WBSFormAutoFillMetadataCorrector *_metadataCorrector;
  BOOL _performingPageLevelAutoFill;
  SFCreditCardFillingViewController *_creditCardViewController;
  WBSAuthenticationServicesAgentProxy *_authenticationServicesAgentProxy;
  long long _quickTypeBarTrailingButtonPurpose;
}

@property (nonatomic) long long action;
@property (readonly, nonatomic) _SFFormAutoFillInputSession *inputSession;
@property (readonly, nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (readonly, nonatomic) WBSMultiRoundAutoFillManager *multiRoundAutoFillManager;
@property (readonly, nonatomic) BOOL currentTextFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField;
@property (readonly, nonatomic) SFFormAutoFillFrameHandle *frame;
@property (readonly, nonatomic) WBSFormControlMetadata *textFieldMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)_getMatchesFromFormProtectionSpace:(id)space matchesFromOtherProtectionSpaces:(id)spaces withFormURL:(id)url credentialMatches:(id)matches lastGeneratedPassword:(id)password currentUser:(id)user currentPassword:(id)password forUserNamesOnly:(BOOL)only;
+ (BOOL)_shouldSaveCredentialsInProtectionSpace:(id)space savedAccountContext:(id)context;

/* instance methods */
- (id)initWithFrame:(id)frame form:(id)form textField:(id)field inputSession:(id)session autoFillController:(id)controller;
- (void)invalidate;
- (void)dealloc;
- (void)updateSuggestions;
- (void)_updateSuggestions:(unsigned long long)suggestions;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)autoFill;
- (void)_performAutoFill;
- (void)_gatherFormValues;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (long long)_actionForLoginForm;
- (void)_textDidChangeInForm:(id)form textField:(id)field;
- (void)updateCachedFormMetadataAfterFilling:(id)filling;
- (void)updateAutoFillButton;
- (BOOL)_textFieldIsEmptyPasswordField;
- (void)_autoFillFormWithUsername:(id)username;
- (void)_setShowingKeyboardInputView:(BOOL)view;
- (void)textDidChangeInFrame:(id)frame form:(id)form textField:(id)field;
- (void)_gatherFormValuesWithCompletionHandler:(id /* block */)handler;
- (void)autoFillTextSuggestion:(id)suggestion;
- (id)_viewControllerToPresentFrom;
- (void)_presentViewController:(id)controller presentingViewController:(id)controller animated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)_shouldShowPasswordOptions;
- (void)_offerToForgetSavedAccount:(id)account completionHandler:(id /* block */)handler;
- (void)_getLoginFormUser:(id *)user password:(id *)password userIsAutoFilled:(BOOL *)filled passwordIsAutoFilled:(BOOL *)filled;
- (void)_fetchPotentialCredentialMatchesWithCompletion:(id /* block */)completion;
- (id)_cachedPotentialCredentialMatches;
- (void)_fillSavedAccount:(id)account setAutoFilled:(BOOL)filled setAsDefaultCredential:(BOOL)credential focusFieldAfterFilling:(BOOL)filling submitForm:(BOOL)form;
- (void)_fillCredential:(id)credential setAutoFilled:(BOOL)filled setAsDefaultCredential:(BOOL)credential focusFieldAfterFilling:(BOOL)filling submitForm:(BOOL)form;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_addActionForAlertController:(id)controller title:(id)title detail:(id)detail handler:(id /* block */)handler;
- (void)_offerToAutoFillFromAvailableOneTimeCodes;
- (void)_fillSavedAccountMatchAfterAuthenticationIfNeeded:(id)needed setAsDefaultCredential:(BOOL)credential submitForm:(BOOL)form;
- (void)_fillCredentialAfterAuthenticationIfNeeded:(id)needed setAsDefaultCredential:(BOOL)credential submitForm:(BOOL)form;
- (void)_fillOneTimeCodeAfterAuthenticationIfNeeded:(id)needed inFrame:(id)frame shouldSubmit:(BOOL)submit;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:(BOOL)key;
- (void)_addPasswordsAutoFillSuggestionToSuggestions:(id)suggestions forPurpose:(long long)purpose;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:(BOOL)usernames withCompletion:(id /* block */)completion;
- (id)_textSuggestionForCredentialDisplayData:(id)data submitForm:(BOOL)form;
- (void)showAllPasswordsButtonTapped;
- (BOOL)_hasMatchWithUser:(id)user password:(id)password;
- (void)_getShouldOfferForgetPassword:(BOOL *)password savePassword:(BOOL *)password;
- (void)_setUserAndPasswordFieldsAutoFilled:(BOOL)filled clearPasswordField:(BOOL)field;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (long long)_passwordGenerationAssistanceAction;
- (void)_generateAndSuggestPasswordWithCompletionHandler:(id /* block */)handler;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (BOOL)_shouldAllowGeneratedPassword;
- (BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:(id)data;
- (id)_sortedSingleCreditCardDataArray:(id)array;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:(id)needed;
- (void)_fillSingleCreditCardDataValue:(id)value creditCardDataType:(long long)type;
- (BOOL)_canAutoFillCreditCardData;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (void)_updateCreditCardAutoFillAction;
- (void)_fillCreditCardData:(id)data;
- (void)presentUnavailableVirtualCardAlert;
- (void)captureCreditCardDataWithCameraAndFill;
- (void)_autoFillSingleCreditCardData:(long long)data;
- (void)_clearAutoFilledCreditCardFieldsAndShowAllCreditCards;
- (id)_createCreditCardHeaderViewControllerForEscapeHatchAlertControllerForCard:(id)card;
- (void)performPageLevelAutoFill;
- (void)_performPageLevelCredentialAutoFill;
- (void)_performPageLevelContactAutoFill;
- (void)_finishPageLevelAutoFillWithResult:(long long)result;
- (void)_showPageLevelAutoFillNotAvailableAlertForResult:(long long)result;
- (id)_titleForPageLevelAutoFillNotAvailableAlertForResult:(long long)result;
- (id)_messageForPageLevelAutoFillNotAvailableAlertForResult:(long long)result;
- (void)creditCardCaptureViewControllerDidCancel:(id)cancel;
- (void)creditCardCaptureViewController:(id)controller didCaptureCreditCard:(id)card;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (id)_suggestionsForAutoFillDisplayData:(id)data;
- (void)_autoFillWithSet:(id)set;
- (void)_offerToAutoFillContact;
- (void)_autoFillDisplayData:(id)data setAutoFilled:(BOOL)filled;
- (void)_switchToCustomInputViewWithMatches:(id)matches contact:(id)contact;
- (void)_showOtherContactOptions;
- (void)dismissCustomAutoFill;
- (void)performAutoFillWithMatchSelections:(id)selections doNotFill:(id)fill contact:(id)contact;
- (void)contactPickerDidCancel:(id)cancel;
- (void)contactPicker:(id)picker didSelectContact:(id)contact;
- (id)_correctedFormMetadata:(id)metadata;
- (id)_bestTextFieldMetadataForMetadata:(id)metadata;
- (void)oneTimeCodeProviderReceivedCode:(id)code;
- (void)newAutoFillablePasskeysAvailable:(id)available;
- (void)_clearCachedCredentials;
@end

#endif /* SFFormAutocompleteState_h */
