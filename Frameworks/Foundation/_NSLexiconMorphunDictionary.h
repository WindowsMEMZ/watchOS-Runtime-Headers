//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _NSLexiconMorphunDictionary_h
#define _NSLexiconMorphunDictionary_h
@import Foundation;

#include "NSString.h"

@class NSLocale;

@interface _NSLexiconMorphunDictionary : NSObject {
  /* instance variables */
  NSLocale *_appropriateLocale;
  struct MANAConfigurableAnalyzer * _analyzer;
  struct MTokenizer * _tokenizer;
  const struct MDDictionaryMetaData * _dictionary;
}

@property (readonly, copy, nonatomic) NSString *languageCode;

/* instance methods */
- (id)initWithLanguage:(id)language;
- (void)dealloc;
- (id)allPossibleWordAttributesForWord:(id)word;
- (id)preferredPronoun:(id)pronoun forTermOfAddress:(id)address morphology:(id)morphology dependency:(id)dependency;
- (void)_iterateFormsOfWord:(id)word usingBlock:(id /* block */)block;
@end

#endif /* _NSLexiconMorphunDictionary_h */
