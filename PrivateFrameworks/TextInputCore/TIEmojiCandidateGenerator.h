//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIEmojiCandidateGenerator_h
#define TIEmojiCandidateGenerator_h
@import Foundation;

#include "TIInputMode.h"

@class NSArray;

@interface TIEmojiCandidateGenerator : NSObject {
  /* instance variables */
  void * m_emojiGeneratorPrimaryLanguage;
  void * m_emojiGeneratorSecondaryLanguage;
  BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
  BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
  BOOL m_shouldShowEmojis;
  struct __EmojiLocaleDataWrapper * m_emojiDataForPrimaryLocale;
  struct __EmojiLocaleDataWrapper * m_emojiDataForSecondaryLocale;
  BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
  BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
  BOOL m_isEmojiInputModeEnabled;
}

@property (readonly, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) NSArray *activeInputModes;

/* instance methods */
- (id)initWithActiveInputModes:(id)modes;
- (void)dealloc;
- (void)updateEmojiLocale;
- (void)updateEmojiAdornmentGenerators;
- (id)createAndAddEmojiTokensFrom:(struct __CFArray *)from inArray:(id)array forInputString:(id)string;
- (id)enumerateForEmojiCandidatesIn:(id)in forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data asReplacementCandidate:(BOOL)candidate;
- (id)enumerateForEmojiCandidatesIn:(id)in forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data asReplacementCandidate:(BOOL)candidate matchedString:(id *)string;
- (id)randomShuffle:(id)shuffle;
- (id)extractTokensForEmojiComputation:(id)computation;
- (id)getSkinToneSensitiveEmojis:(id)emojis;
- (id)skinToneModifiedAdornmentEmojis:(id)emojis forLocale:(struct __EmojiLocaleDataWrapper *)locale forInput:(id)input;
- (id)emojiAppendCandidates:(id)candidates;
- (id)emojiAdornmentCandidates:(id)candidates;
- (id)generateEmojiAdornmentCandidates:(id)candidates;
- (void)updateForActiveInputModes:(id)modes;
- (void)updateEmojiStatusForKeyboardState:(id)state;
- (void)updateEmojiStatusForKeyboardType:(unsigned long long)type appIdentifier:(id)identifier;
- (id)emojiReplacementCandidates:(id)candidates;
- (id)emojiReplacementCandidates:(id)candidates matchedString:(id *)string;
- (id)emojiReplacementCandidatesForKeyboardState:(id)state;
- (id)emojiReplacementCandidatesForText:(id)text;
- (void)emojiAlternativesForText:(id)text completionHandler:(id /* block */)handler;
- (id)emojiAlternativesForText:(id)text matchedString:(id *)string;
- (id)enumerateForEmojiAlternativesInText:(id)text forEmojiLocaleData:(struct __EmojiLocaleDataWrapper *)data matchedString:(id *)string;
- (void)emojiReplacementCandidatesForText:(id)text completionHandler:(id /* block */)handler;
- (id)emojiAdornmentCandidatesForKeyboardState:(id)state;
@end

#endif /* TIEmojiCandidateGenerator_h */
