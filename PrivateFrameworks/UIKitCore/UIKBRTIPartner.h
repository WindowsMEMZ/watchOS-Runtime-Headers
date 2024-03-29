//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBRTIPartner_h
#define UIKBRTIPartner_h
@import Foundation;

#include "RTIInputSystemClientDelegate-Protocol.h"
#include "RTIInputSystemSessionDelegate-Protocol.h"
#include "UIKBRTIPartnerDelegate-Protocol.h"
#include "UIKeyboardTaskExecutionContext.h"
#include "UIKeyboardTaskSubqueue.h"
#include "_UIGeometryChangeObserver-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSUUID, RTIDocumentState, RTIDocumentTraits, RTIInputSourceState, RTIInputSystemClient, TIKeyboardOutput;

@interface UIKBRTIPartner : NSObject<RTIInputSystemClientDelegate, RTIInputSystemSessionDelegate, _UIGeometryChangeObserver> {
  /* instance variables */
  RTIDocumentTraits *_remoteDocumentTraits;
  NSNumber *_cachedHasPreviousKeyResponder;
  NSNumber *_cachedHasNextKeyResponder;
  struct __CFStringTokenizer * _wkRectTokenizer;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  UIKeyboardTaskExecutionContext *_waitingRTIOutputOperationResponseContext;
  NSDictionary *_pendingDisableBecomeFirstResponderParameters;
  BOOL _dontTakeKeyboardSnapshot;
  BOOL _applicationDeactivationReasonAssistant;
  long long _id;
}

@property (copy, nonatomic) NSUUID *currentSessionIdentifier;
@property (nonatomic) BOOL isObservingGeometry;
@property (nonatomic) BOOL cacheHitTestsAsOpaque;
@property (retain, nonatomic) NSMutableDictionary *rtiSessionMarkers;
@property (retain, nonatomic) NSMutableDictionary *supplementalLexicons;
@property (retain, nonatomic) NSMutableDictionary *textSuggestions;
@property (retain, nonatomic) NSMutableArray *queuedSupplementalLexiconOperations;
@property (retain, nonatomic) UIKeyboardTaskSubqueue *keyboardTaskSubqueue;
@property (copy, nonatomic) NSUUID *authenticatingSessionIdentifier;
@property (weak, nonatomic) NSObject<UIKBRTIPartnerDelegate> *partnerDelegate;
@property (nonatomic) BOOL inputSystemClientEnabled;
@property (readonly, nonatomic) BOOL isNotifyingDelegateOfRemoteOutputOperation;
@property (retain, nonatomic) RTIInputSystemClient *rtiClient;
@property (retain, nonatomic) RTIDocumentTraits *rtiDocumentTraits;
@property (retain, nonatomic) RTIDocumentState *rtiDocumentState;
@property (readonly, nonatomic) RTIInputSourceState *rtiInputSourceState;
@property (nonatomic) BOOL applicationStateIsActiveForRTI;
@property (nonatomic) BOOL viewServiceStateIsActiveForRTI;
@property (retain, nonatomic) TIKeyboardOutput *pendingOutputOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)registerTextOperationCustomInfo;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_macWindowChangedKey:(id)key;
- (void)_applicationWillSuspend:(id)suspend;
- (void)_viewServiceHostWillResignActive:(id)active;
- (void)_viewServiceHostDidBecomeActive:(id)active;
- (unsigned int)_ignoredReasonsForKeyboard;
- (unsigned int)_ignoredReasonsForAutoFill;
- (void)_applicationWillAddDeactivationReason:(id)reason;
- (void)endInputSessionOnSwitchingApps;
- (void)_applicationDidRemoveDeactivationReason:(id)reason;
- (void)_screenModeDidChange:(id)change;
- (id)delegate;
- (void)documentTraitsChanged;
- (void)updateAnimationForOptions:(id)options;
- (void)beginInputSessionWithIdentifier:(id)identifier;
- (void)endInputSessionWithIdentifier:(id)identifier;
- (void)endInputSessionWithIdentifier:(id)identifier shouldResign:(BOOL)resign;
- (void)endInputSessionWithIdentifier:(id)identifier shouldResign:(BOOL)resign waitForReply:(BOOL)reply;
- (BOOL)_remoteInputSystemRequiresDocumentStateForAutofill;
- (BOOL)_remoteInputSystemRequiresDocumentStateUpdates;
- (BOOL)_remoteInputSystemRequiresTextSuggestionUpdates;
- (void)documentStateChanged;
- (void)documentStateChanged:(BOOL)changed;
- (void)performInputOperation:(id)operation;
- (void)forwardKeyboardSuppression:(BOOL)suppression suppressAssistantBar:(BOOL)bar;
- (void)forwardApplicationOperation:(SEL)operation object:(id)object;
- (void)forwardKeyboardInputMode:(id)mode;
- (void)forwardClearForwardingInputDelegateAndResign:(BOOL)resign;
- (void)forwardKeyboardEventToUIHost:(id)uihost;
- (BOOL)synchronousForwardKeyCommandsBeforePublicToUIHost:(id)uihost;
- (BOOL)synchronousForwardKeyCommandsToUIHost:(id)uihost;
- (BOOL)synchronousForwardKeyInputMethodCommandEventToUIHost:(id)uihost canHandleAppKeyCommand:(BOOL)command;
- (void)forwardDictationEventToUIHost:(SEL)uihost withOptionalObject:(id)object;
- (void)forwardInputDestinationEventToUIHost:(SEL)uihost;
- (void)forwardInputDestinationEventToUIHost:(SEL)uihost params:(id)params;
- (void)forwardSelectorToUIHost:(SEL)uihost completionHandler:(id /* block */)handler;
- (void)forwardKeyboardCameraEvent_startCameraInput:(id)input;
- (void)forwardEventCallbackToRemoteSource_didChooseSupplementalItem:(id)item toReplaceText:(id)text;
- (void)forwardEventToRemoteSource_canSuggestSupplementalItemsForCurrentSelection:(BOOL)selection;
- (id)textOperation_insertSupplementalCandidate:(id)candidate textToCommit:(id)commit;
- (id)textOperation_chooseSupplementalItem:(id)item toReplaceText:(id)text;
- (id)textOperation_cancelChooseSupplementalItemToInsert;
- (id)textOperation_insertionPointEnteredText:(id)text withSupplementalCandidate:(id)candidate;
- (id)textOperation_insertionPointExitedTextWithSupplementalItems;
- (id)textOperation_insertAutofillContent:(id)content;
- (id)autofillPayloadDelegate;
- (id)payloadDelegate;
- (void)forwardAutofillPayload:(id)payload toPayloadDelegate:(id)delegate;
- (void)forwardKeyboardOperation:(SEL)operation object:(id)object;
- (void)forwardTypologyLogURL:(id)url;
- (void)forwardGrammarCorrectionEntries:(id)entries;
- (void)textSuggestionsChanged:(id)changed;
- (void)updateTextSuggestionsIfNecessary:(id)necessary;
- (void)addTextSuggestions:(id)suggestions;
- (void)removeTextSuggestionsForSessionWithID:(id)id;
- (BOOL)remoteTextInputClientHasActiveSession;
- (void)_queueSupplementalLexiconOperation:(unsigned long long)operation lexicon:(id)lexicon;
- (void)_performQueuedSupplementalLexiconOperations;
- (void)didAddSupplementalLexicon:(id)lexicon;
- (void)didRemoveSupplementalLexicon:(id)lexicon;
- (void)_didAddSupplementalLexicon:(id)lexicon;
- (void)_didRemoveSupplementalLexiconWithIdentifier:(unsigned long long)identifier;
- (void)_updateRTIAllowedAndNotify:(BOOL)notify withReason:(id)reason;
- (id)_defaultRTIMachNames;
- (id)_newInputSystemUIClient;
- (id)_newInputSystemAutoFillUIClient;
- (id)_newRTIConnection;
- (void)_didCreateRTIClient:(id)rticlient;
- (void)_createRTIClient;
- (void)_createRTIClientIfNecessary;
- (void)ensureRTIConnection;
- (void)beginAllowingRemoteTextInput:(id)input;
- (void)endAllowingRemoteTextInput:(id)input;
- (void)endAllowingRemoteTextInput:(id)input waitForReply:(BOOL)reply;
- (void)restartCurrentSession;
- (void)updateStateWithCompletion:(id /* block */)completion updateTraits:(BOOL)traits;
- (BOOL)documentTraitsDisableAutomaticKeyboardUI;
- (BOOL)_updateRTITraitsIfNecessary;
- (id)inputDelegate;
- (id)inputDelegateView;
- (void)_updateRTIStateWithCompletion:(id /* block */)completion;
- (void)applyRemoteDocumentTraitsIfNecessary:(id)necessary force:(BOOL)force;
- (void)applyAssistantItem:(id)item;
- (void)applyRemoteDocumentStateIfNecessary:(id)necessary force:(BOOL)force;
- (void)sendAutoFillDidInsertCallbacksWithTextOperations:(id)operations;
- (void)inputSession:(id)session documentTraitsDidChange:(id)change;
- (void)inputSession:(id)session documentStateDidChange:(id)change;
- (void)inputSession:(id)session performInputOperation:(id)operation;
- (void)inputSession:(id)session performInputOperation:(id)operation withResponse:(id /* block */)response;
- (void)inputSession:(id)session textSuggestionsChanged:(id)changed;
- (void)inputSession:(id)session didAddRTISupplementalLexicon:(id)lexicon;
- (void)inputSession:(id)session didRemoveRTISupplementalLexicon:(id)lexicon;
- (BOOL)compareWaitingRTIOutputOperationResponseContext:(id)context andExchange:(id)exchange;
- (id)exchangeWaitingRTIOutputOperationResponseContext:(id)context;
- (void)finishCompletionHandlersIfNeeded;
- (void)connectionInvalidated:(id)invalidated;
- (void)connectionInterrupted:(id)interrupted;
- (void)performTextOperations:(id)operations;
- (void)performTextOperations:(id)operations resultHandler:(id /* block */)handler;
- (void)_queued_performTextOperations:(id)operations resultHandler:(id /* block */)handler;
- (unsigned int)_performKeyboardOutputOperations:(id)operations;
- (void)defaultDocumentRequestDidChange:(id)change;
- (void)_performDocumentRequest:(id)request completion:(id /* block */)completion;
- (void)performDocumentRequest:(id)request completion:(id /* block */)completion;
- (void)_queryDocumentRequest:(id)request completion:(id /* block */)completion;
- (long long)_uiTextGranularityForRTITextGranularity:(long long)granularity;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (void)_addFirstSelectionRectToDocumentState:(id)state;
- (void)_addAutocorrectStylingToDocumentState:(id)state;
- (void)_addMergedTextRectsToDocumentState:(id)state forWKContext:(id)wkcontext textInputView:(id)view granularity:(long long)granularity;
- (void)_queryWKDocumentRequest:(id)request completion:(id /* block */)completion;
- (void)_queryUIKitDocumentRequest:(id)request completion:(id /* block */)completion;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect from:(id)from;
- (void)_updateGeometryObserverIfNecessary;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)changed forAncestor:(id)ancestor;
- (id)insertionPointColor;
@end

#endif /* UIKBRTIPartner_h */
