//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypingEffortAnalyzer_h
#define TITypingEffortAnalyzer_h
@import Foundation;

#include "TITypingSession.h"
#include "TITypingSessionAligned.h"
#include "TITypingSessionAnalyzing-Protocol.h"

@class NSString;

@interface TITypingEffortAnalyzer : NSObject<TITypingSessionAnalyzing> {
  /* instance variables */
  TITypingSession *_session;
  TITypingSessionAligned *_alignedSession;
  BOOL _emojiPlaneActive;
  BOOL _emojiSearchActive;
}

@property (readonly, nonatomic) BOOL hasEmojiInput;
@property (readonly, nonatomic) BOOL hasCursorMovement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (unsigned long long)evaluateConfidenceInSession:(id)session alignedSession:(id)session;
- (BOOL)analyzeSession:(id)session alignedSession:(id)session withConfidence:(unsigned long long)confidence;
- (id)countActions;
- (void)addActionsForWordEntry:(id)entry toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addActionsForDeleteWord:(id)word toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addKeyboardInputActionsForKeyboardInputs:(id)inputs inputMode:(id)mode toActionSummary:(id)summary andKeyboardInputTouches:(id)touches emojiSearchMode:(BOOL)mode;
- (BOOL)isFlickInput:(id)input;
- (BOOL)isPopupVariantInput:(id)input inputMode:(id)mode;
- (BOOL)isTenKeyInputMode:(id)mode;
- (void)addPathAndCandidateBarActionsForWordEntry:(id)entry toActionSummary:(id)summary andPathTouches:(id)touches emojiSearchMode:(BOOL)mode;
- (void)addTouchRelatedActionsForTouches:(id)touches layouts:(id)layouts acceptedCandidate:(id)candidate toActionSummary:(id)summary keyboardInputTouches:(id)touches pathTouches:(id)touches emojiSearchMode:(BOOL)mode;
- (void)addPathWeightActionsForTouches:(id)touches withLayout:(id)layout forWord:(id)word toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addSpecialKeyActionsForFirstTouch:(id)touch andLastTouch:(id)touch fromLayout:(id)layout toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (id)keyStringWithCode:(long long)code fromLayout:(id)layout;
- (void)addActionsForCursorEvent:(id)event lastAction:(id)action nextAction:(id)action toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addActionsForArrowKey:(id)key toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addActionsForCut:(id)cut toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)addActionsForPaste:(id)paste toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (BOOL)isEmojiSearchCandidateSelection:(id)selection;
- (void)addActionsForDocumentStateChange:(id)change toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (id)countOutput;
- (void)addCountsForAlignedEntry:(id)entry toOutputSummary:(id)summary;
- (void)addCountsForEmojiInputs:(id)inputs toOutputSummary:(id)summary;
- (void)addCountsForWord:(id)word toOutputSummary:(id)summary;
- (BOOL)hasEmojiInKeyboardInputs:(id)inputs;
- (int)countComposedCharactersInText:(id)text;
- (void)addCountsForPropertyWithName:(id)name andEmojiSearchPropertyName:(id)name contributesToTotal:(BOOL)total toActionSummary:(id)summary emojiSearchMode:(BOOL)mode;
- (void)registerEventSpec;
- (void)dispatchEventWithActionSummary:(id)summary outputSummary:(id)summary;
@end

#endif /* TITypingEffortAnalyzer_h */
