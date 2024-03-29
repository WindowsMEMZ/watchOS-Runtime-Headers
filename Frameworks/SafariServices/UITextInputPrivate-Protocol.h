//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef UITextInputPrivate_Protocol_h
#define UITextInputPrivate_Protocol_h
@import Foundation;

@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (nonatomic) long long selectionGranularity;
@property (readonly, nonatomic) NSObject<UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (nonatomic) long long _textInputSource;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (nonatomic) BOOL _systemCursorAccessoriesDisabled;

/* instance methods */
- (id)textInputTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectionRange;
- (BOOL)hasContent;
- (void)selectAll;
- (BOOL)hasSelection;
@optional
/* instance methods */
- (void)insertAttributedText:(id)text;
- (id)attributedTextInRange:(id)range;
- (void)replaceRange:(id)range withAttributedText:(id)text;
- (void)insertText:(id)text style:(long long)style alternatives:(id)alternatives;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x0; double x1; })point animated:(BOOL)animated;
- (BOOL)requiresKeyEvents;
- (void)handleKeyWebEvent:(id)event;
- (void)handleKeyWebEvent:(id)event withCompletionHandler:(id /* block */)handler;
- (id)selectionInteractionAssistant;
- (void)modifierFlagsDidChangeFrom:(long long)from to:(long long)to;
- (void)setBottomBufferHeight:(double)height;
- (id)automaticallySelectedOverlay;
- (id)selectionContainerView;
- (id)_selectionContainerViewAboveText;
- (id)_rangeAdjustmentGestureView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectionClipRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRect;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_caretTransformForPosition:(id)position;
- (void)streamingDictationDidBegin;
- (void)streamingDictationDidEnd;
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)identifier;
- (id)metadataDictionariesForDictationResults;
- (id)rangeWithTextAlternatives:(id *)alternatives atPosition:(id)position;
- (void)addTextAlternatives:(id)alternatives;
- (void)removeEmojiAlternatives;
- (void)insertTextSuggestion:(id)suggestion;
- (void)insertTextSuggestion:(id)suggestion completionHandler:(id /* block */)handler;
- (void)autoFillDidInsertWithExplicitInvocationMode:(BOOL)mode;
- (void)_insertSupplementalItem:(id)item forString:(id)string replacementRange:(id)range;
- (BOOL)_insertsSpaceAfterAcceptingPredictionForSupplementalItem:(id)item;
- (void)_chooseSupplementalItemToInsert:(id)insert replacementRange:(id)range completionHandler:(id /* block */)handler;
- (void)_cancelChooseSupplementalItemToInsert;
- (void)_insertionPointEnteredRange:(id)range string:(id)string supplementalItems:(id)items;
- (void)_insertionPointExitedRangeWithSupplementalItems;
- (BOOL)_canSuggestSupplementalItemsForCurrentSelection;
- (void)acceptedAutoFillWord:(id)word;
- (BOOL)isAutoFillMode;
- (id)_autofillContext;
- (double)_delayUntilRepeatInsertText:(id)text;
- (BOOL)_shouldRepeatInsertText:(id)text;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)typing replacementText:(id)text;
- (void)correctedTypedText:(id)text rangeOfReplacement:(id)replacement;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (void)_insertAttributedTextWithoutClosingTyping:(id)typing;
- (void)_willShowCorrections;
- (void)_didHideCorrections;
- (BOOL)_shouldSuppressSelectionCommands;
- (SEL)_sendCurrentLocationAction;
- (BOOL)_isInteractiveDespiteResponderStatus;
- (id)_rangeForTextKitRanges:(id)ranges;
- (id)_visualSelectionRangeForExtent:(id)extent forPoint:(struct CGPoint { double x0; double x1; })point fromPosition:(id)position inDirection:(long long)direction;
- (id)annotatedSubstringForRange:(id)range;
- (void)replaceRange:(id)range withAnnotatedString:(id)string relativeReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)removeAnnotation:(id)annotation forRange:(id)range;
@end

#endif /* UITextInputPrivate_Protocol_h */
