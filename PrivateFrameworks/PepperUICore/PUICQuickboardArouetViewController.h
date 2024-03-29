//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardArouetViewController_h
#define PUICQuickboardArouetViewController_h
@import Foundation;

#include "PUICQuickboardViewController.h"
#include "ArouetButton.h"
#include "ArouetCandidateManagerDelegate-Protocol.h"
#include "ArouetCandidateSelectionSession.h"
#include "ArouetCandidateViewController.h"
#include "ArouetCandidateViewControllerDelegate-Protocol.h"
#include "ArouetCandidatesIndicatorView.h"
#include "ArouetCandidatesManager.h"
#include "ArouetCandidatesResult.h"
#include "ArouetInputDelegate-Protocol.h"
#include "ArouetInputView.h"
#include "ArouetLanguageSpec.h"
#include "ArouetPrewarmer.h"
#include "ArouetRecognitionManager.h"
#include "ArouetRecognitionResult.h"
#include "ArouetTextInputModel.h"
#include "ArouetTextInputModelChangesObserver-Protocol.h"
#include "ArouetTextInputView.h"
#include "ArouetTextServices.h"
#include "ArouetUserInteractionMonitor.h"
#include "PUICCrownInputSequencerDelegate-Protocol.h"
#include "PUICQuickboardLanguageControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class CSLSAlertSuppressionAssertion, CSLSSuspendSystemGestureAssertion, NSString, NSTimer, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface PUICQuickboardArouetViewController : PUICQuickboardViewController<ArouetTextInputModelChangesObserver, ArouetCandidateViewControllerDelegate, ArouetCandidateManagerDelegate, PUICCrownInputSequencerDelegate, UIGestureRecognizerDelegate, PUICQuickboardLanguageControllerDelegate, ArouetInputDelegate> {
  /* instance variables */
  BOOL _showsArouetCancelButton;
  BOOL _showsArouetAcceptButton;
}

@property (retain, nonatomic) ArouetInputView *inkView;
@property (retain, nonatomic) ArouetRecognitionManager *recognitionManager;
@property (retain, nonatomic) ArouetPrewarmer *prewarmer;
@property (nonatomic) BOOL didPrewarmRecognizer;
@property BOOL recognitionInProgress;
@property (retain, nonatomic) ArouetCandidateViewController *candidateViewController;
@property (retain, nonatomic) UIView *candidateBackgroundView;
@property (readonly, nonatomic) BOOL candidateListShouldBeVisible;
@property (retain, nonatomic) ArouetCandidatesIndicatorView *candidatesIndicatorView;
@property (nonatomic) BOOL candidatesIndicatorIsVisible;
@property (retain, nonatomic) ArouetCandidateSelectionSession *candidateSelectionSession;
@property (retain, nonatomic) ArouetTextInputView *textInputView;
@property (copy, nonatomic) NSString *pendingInputText;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } pendingInputTextSelectionRange;
@property (retain, nonatomic) UIPanGestureRecognizer *_scrollDrawDeciderRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *_textTapRecognizer;
@property (nonatomic) BOOL needsUpdateDisplayedText;
@property (retain, nonatomic) ArouetLanguageSpec *languageSpec;
@property (retain, nonatomic) ArouetTextServices *textServices;
@property (retain, nonatomic) ArouetUserInteractionMonitor *userInteractionMonitor;
@property (retain, nonatomic) NSTimer *repeatDeletionTimer;
@property (retain, nonatomic) ArouetButton *spaceButton;
@property (retain, nonatomic) ArouetButton *deleteButton;
@property (readonly, nonatomic) BOOL candidatesIndicatorShouldBeVisible;
@property (retain, nonatomic) ArouetButton *languageButton;
@property (retain, nonatomic) CSLSAlertSuppressionAssertion *alertSuppressionAssertion;
@property (retain, nonatomic) CSLSSuspendSystemGestureAssertion *systemGesturesSuppressionAssertion;
@property (nonatomic) struct CGPoint { double x0; double x1; } panGestureLastPoint;
@property (retain, nonatomic) ArouetButton *arouetCancelButton;
@property (retain, nonatomic) ArouetButton *arouetAcceptButton;
@property (nonatomic) BOOL buttonsNeedUpdate;
@property (nonatomic) BOOL longDeleteInProgress;
@property (weak, nonatomic) UIView *punchoutView;
@property (copy, nonatomic) id /* block */ recognitionCompletion;
@property (retain, nonatomic) ArouetTextInputModel *textInputModel;
@property (readonly) long long layout;
@property (retain, nonatomic) ArouetCandidatesResult *lastCandidatesResult;
@property (retain, nonatomic) ArouetCandidatesManager *candidatesManager;
@property (retain, nonatomic) ArouetRecognitionResult *currentRecognitionResult;
@property (nonatomic) BOOL clearsHandwritingRecognitionResultAfterInsert;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } arouetGridEdgeInsets;
@property (nonatomic) BOOL disablesAcceptOnEmptyText;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) BOOL passwordEntryMode;
@property (nonatomic) BOOL showsLanguageSelectionButton;
@property (copy, nonatomic) UIColor *arouetBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsLanguage:(id)language textContentType:(id)type;
+ (BOOL)supportsLanguage:(id)language;

/* instance methods */
- (void)drawAndRecognizeTestInputWithCompletion:(id /* block */)completion;
- (void)drawAndRecognizeSingleStrokeWithCompletion:(id /* block */)completion;
- (void)_commonArouetViewControllerInit;
- (id)initWithCoder:(id)coder;
- (id)initWithDelegate:(id)delegate;
- (id)initWithDelegate:(id)delegate prewarmer:(id)prewarmer;
- (void)_performLocaleLayoutAdjustments;
- (id)textInputViewPanGestureRecognizer;
- (id)viewForAddingPanGestureRecognizer;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)loadInitialTextIfNeeded;
- (void)acceptButtonTappedWithCompletion:(id /* block */)completion;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (void)viewDidDisappear:(BOOL)disappear;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)setConfirmationType:(unsigned long long)type;
- (void)_updateLanguageButtonVisibility;
- (void)handleUIApplicationWillEnterForegroundNotification:(id)notification;
- (void)handleUIApplicationDidEnterBackgroundNotification:(id)notification;
- (void)handleUIApplicationDidBecomeActiveNotification:(id)notification;
- (void)handleUIApplicationWillResignActiveNotification:(id)notification;
- (void)clearDrawing:(id)drawing;
- (void)handleTapCancel:(id)cancel;
- (void)handleTapAccept:(id)accept;
- (void)addDismissalAnimationsWithOptions:(unsigned long long)options;
- (void)handleTapCandidatesIndicator:(id)indicator;
- (void)handleTapBackgroundCandidates:(id)candidates;
- (void)handleTapSpace:(id)space;
- (void)insertSpaceIfPossible;
- (void)deleteOneCharacter:(id)character;
- (void)handleTapDelete:(id)delete;
- (void)handleLongPressDelete:(id)delete;
- (void)handleScrollPan:(id)pan;
- (BOOL)shouldHandleTextTap:(id)tap;
- (void)handleTextTapGesture:(id)gesture;
- (void)handleTapAtCharacterIndex:(long long)index isBeforeStart:(BOOL)start isAfterEnd:(BOOL)end;
- (void)_updateTextViewContentAndSelectionWithInsertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range animated:(BOOL)animated;
- (void)updateButtonsIfNeeded;
- (void)updateControlsInteractionEnabled;
- (void)setMinTextLengthForEnablingAccept:(long long)accept;
- (BOOL)showsAcceptButton;
- (void)setShowsAcceptButton:(BOOL)button;
- (void)setShowsAcceptButton:(BOOL)button animated:(BOOL)animated;
- (void)setLastCandidatesResult:(id)result animated:(BOOL)animated;
- (void)generateCandidateResultsForSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range isInsertion:(BOOL)insertion;
- (void)updateCandidateViewControllerAnimated:(BOOL)animated;
- (void)updateCandidatesIndicatorAnimated:(BOOL)animated fadeInAfterADelay:(BOOL)adelay;
- (BOOL)canBeginCandidateSelectionSession;
- (void)beginCandidateSelectionSessionIfPossible;
- (void)endCandidateSelectionSession;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
- (void)setInputText:(id)text selectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_logInputLength;
- (id)_createTextInputModelWithLanguageSpec:(id)spec;
- (void)_updateConfigurationForCurrentTypeAndLanguage;
- (void)updateTextInputModel;
- (BOOL)candidateManager:(id)manager shouldExcludeCandidate:(id)candidate;
- (id)candidateManager:(id)manager transliterationVariantsForString:(id)string;
- (void)candidateViewControllerSelectedCandidateIndexDidChange:(id)change;
- (void)candidateViewControllerDidCommitSelection:(id)selection;
- (void)textInputModel:(id)model didChangeWithInfo:(id)info;
- (void)_presentLanguageSelection:(id)selection;
- (void)languageControllerDidChangePrimaryLanguage:(id)language;
- (void)_wheelChangedWithEvent:(id)event;
- (void)drawingDidStart;
- (void)drawingDidEnd;
- (void)_updateRecognitionManager;
- (void)handwritingRecognitionDidStart;
- (void)handwritingRecognitionDidEnd;
- (void)handwritingWasRecognized:(id)recognized;
- (void)handwritingWasCommitted;
- (id)characterHistory;
- (id)recentDeletionsAtLocation:(long long)location;
- (double)relativeHoriztonalTextCursorPosition;
- (struct CGPoint { double x0; double x1; })relativeTextCursorScreenPosition;
- (unsigned long long)inputType;
@end

#endif /* PUICQuickboardArouetViewController_h */
