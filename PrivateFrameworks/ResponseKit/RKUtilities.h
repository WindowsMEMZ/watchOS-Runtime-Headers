//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKUtilities_h
#define RKUtilities_h
@import Foundation;

@interface RKUtilities : NSObject
/* class methods */
+ (id)stripPunctuations:(id)punctuations;
+ (id)removeMultipleWhitespaces:(id)whitespaces;
+ (id)stripEmojiSkinTones:(id)tones;
+ (id)normalizeForPersonalization:(id)personalization;
+ (id)stripDiacritics:(id)diacritics;
+ (BOOL)isLanguageSupportedByNSLinguisticTaggerForLanguageIdentification:(id)identification;
+ (BOOL)isLanguageSupportedForLemmatization:(id)lemmatization;
+ (BOOL)isLanguageSupportedForPartOfSpeech:(id)speech;
+ (BOOL)isLanguageSupportedBySmartPunctuation:(id)punctuation;
+ (id)removeEmoji:(id)emoji;
+ (BOOL)tokenInArray:(id)array withArray:(id)array;
+ (BOOL)prefixInArray:(id)array withArray:(id)array;
+ (BOOL)suffixInArray:(id)array withArray:(id)array;
+ (id)getDeviceModel;
+ (BOOL)isDeviceSupportedForLSTMBasedLanguageIdentification:(id)identification;
+ (id)addLikelySubtagsForLocaleIdentifier:(id)identifier;
+ (id)canonicalLanguageAndScriptCodeIdentifierForIdentifier:(id)identifier;
+ (BOOL)RKRepairStringNeeded:(id)needed;
@end

#endif /* RKUtilities_h */
