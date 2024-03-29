//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardAutocorrectionController_h
#define UIKeyboardAutocorrectionController_h
@import Foundation;

@class NSArray, NSHashTable, NSMutableDictionary, TIAutocorrectionList, TIKeyboardCandidate;

@interface UIKeyboardAutocorrectionController : NSObject {
  /* instance variables */
  unsigned long long _signpostToken;
  BOOL _needsAutocorrection;
  BOOL _hasPendingAutocorrection;
  NSHashTable *_autocorrectionObservers;
  NSMutableDictionary *_recentCandidates;
}

@property (readonly, nonatomic) TIKeyboardCandidate *autocorrection;
@property (readonly, nonatomic) NSArray *textCompletions;
@property (retain, nonatomic) TIAutocorrectionList *autocorrectionList;
@property (retain, nonatomic) TIAutocorrectionList *textSuggestionList;
@property (readonly, nonatomic) BOOL requestedAutocorrection;
@property (nonatomic) unsigned long long maximumNumberOfCandidates;
@property (readonly, nonatomic) BOOL hasActiveObservers;

/* instance methods */
- (id)init;
- (void)addAutocorrectionObserver:(id)observer;
- (void)removeAutocorrectionObserver:(id)observer;
- (void)setNeedsAutocorrection;
- (void)clearAutocorrection;
- (void)clearAutocorrectionAndNotifyObservers:(BOOL)observers;
- (void)clearAutofillAndTextSuggestions;
- (BOOL)hasAutocorrection;
- (void)updateAfterShiftStateChange;
- (BOOL)hasAutofillCandidates;
- (BOOL)hasContinuousPathConversions;
- (BOOL)hasProactiveCandidates;
- (BOOL)hasTextSuggestionCandidates;
- (void)requestAutocorrectionWithExecutionContext:(id)context;
- (id)storedListForCandidate:(id)candidate;
@end

#endif /* UIKeyboardAutocorrectionController_h */
