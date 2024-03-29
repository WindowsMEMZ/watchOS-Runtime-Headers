//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef _EAREmojiRecognition_h
#define _EAREmojiRecognition_h
@import Foundation;

@class EMFEmojiLocaleData, EMFEmojiPreferencesClient, NSArray;

@interface _EAREmojiRecognition : NSObject {
  /* instance variables */
  EMFEmojiPreferencesClient *_preferences;
  EMFEmojiLocaleData *_localeData;
  NSArray *_frequentEmojis;
  struct __EmojiLocaleDataWrapper * _cemlocaleRef;
}

@property (readonly, nonatomic) BOOL isEmojiPersonalizationUsed;
@property (readonly, nonatomic) BOOL isEmojiDisambiguationUsed;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithLanguage:(id)language;
- (void)dealloc;
- (id)formatEmojiStrings:(id)strings;
- (id)formatEmojiStrings:(id)strings isLogging:(BOOL)logging;
- (void)didUseEmoji:(id)emoji replacementContext:(id)context;
- (void)resetEmojiPreferences;
- (void)resetEmojiMetrics;
- (id)baseStringForEmojiString:(id)string;
- (BOOL)isEmojiRecognitionCapable;
- (BOOL)isValidEmoji:(id)emoji;
- (id)searchEmojiAlternativesForSpokenEmoji:(id)emoji count:(long long)count emojiCharacter:(id)character;
- (void)recognizeEmojisInInputString:(id)string enumerateUsingBlock:(id /* block */)block;
@end

#endif /* _EAREmojiRecognition_h */
