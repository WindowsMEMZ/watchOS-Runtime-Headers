//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKSentenceClassifier_h
#define RKSentenceClassifier_h
@import Foundation;

@class NSArray, NSMutableDictionary, NSString, NSValue;

@interface RKSentenceClassifier : NSObject

@property (readonly) NSString *languageIdentifier;
@property (retain) NSMutableDictionary *partofSpeechAvailabilityByLanguage;
@property (retain) NSMutableDictionary *lemmaAvailabilityByLanguage;
@property (retain) NSString *sentenceStringOriginal;
@property (retain) NSString *sentenceString;
@property BOOL sentenceIsTerminated;
@property BOOL sentenceIsAllSymbols;
@property BOOL sentenceHasQuestionTerminator;
@property BOOL sentenceHasAlternativeConjunction;
@property (retain) NSValue *sentenceTag;
@property (retain) NSArray *inversions;
@property (retain) NSArray *interrogatives;
@property (retain) NSArray *choiceDelimiters;
@property (retain) NSArray *alternatives;
@property (retain) NSArray *appreciations;
@property (retain) NSArray *dataDetected;
@property (retain) NSString *RKLinguisticTagDataDetected;
@property (readonly) NSArray *alternativeConjunctions;
@property (retain) NSArray *sentenceEntities;
@property (retain) NSArray *matchedRanges;

/* class methods */
+ (id)languageIdentifierFromClassName;
+ (Class)subclassForLanguageIdentifier:(id)identifier;
+ (Class)subclassForLocale:(id)locale;
+ (BOOL)canClassifyLanguageIdentifier:(id)identifier;
+ (id)categoryKeywordMapForLanguage:(id)language;
+ (id)sensitiveSubjectRegularExpressionForLanguage:(id)language;
+ (id)polarTagRegularExpressionForLanguage:(id)language;
+ (id)alternativeInversionsForLanguage:(id)language;
+ (id)appreciationKeywordsForLanguage:(id)language;
+ (id)preProcessTextMessageForLinguisticTagger:(id)tagger withLocale:(id)locale;
+ (id)stringFromLexicalEntities:(id)entities;
+ (id)sentenceClassification:(id)classification withLanguageIdentifier:(id)identifier options:(unsigned long long)options;

/* instance methods */
- (id)init;
- (id)lexicalEntitiesFromString:(id)string;
- (id)sentenceClassification:(id)classification options:(unsigned long long)options;
- (id)addSentenceTerminatorQuestion:(id)question;
- (void)analyzeSentence;
- (id)classifySentence;
@end

#endif /* RKSentenceClassifier_h */
