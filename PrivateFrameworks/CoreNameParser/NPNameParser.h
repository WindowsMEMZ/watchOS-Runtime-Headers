//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 12.1.0.0.0
//
#ifndef NPNameParser_h
#define NPNameParser_h
@import Foundation;

#include "NPHMMClassifier.h"
#include "NPNameComponentsData.h"

@interface NPNameParser : NSObject {
  /* instance variables */
  double _confidenceThreshold;
  NPNameComponentsData *_nameComponentsData;
}

@property (retain) NPHMMClassifier *classifier;

/* instance methods */
- (id)init;
- (void)dealloc;
- (unsigned long long)namingTraditionForName:(id)name;
- (id)personNameComponentsFromString:(id)string;
- (id)parseLatinName:(id)name score:(double *)score;
- (id)parseFullnameWithDefaultHMMClassifier:(id)hmmclassifier;
- (id)parseFullnameWithDefaultHMMClassifier:(id)hmmclassifier normalize:(BOOL)normalize score:(double *)score;
- (id)personNameCompomentsFromPrefix:(id)prefix suffix:(id)suffix givenNames:(id)names middleNames:(id)names familyNames:(id)names;
- (id)parseChineseName:(id)name;
- (id)parseChineseName:(id)name normalize:(BOOL)normalize;
- (id)parseJapaneseName:(id)name;
- (id)parseJapaneseName:(id)name normalize:(BOOL)normalize;
- (id)parseKoreanName:(id)name;
- (id)parseKoreanName:(id)name normalize:(BOOL)normalize;
- (id)normalizeFullname:(id)fullname;
- (BOOL)isPrefix:(id)prefix;
- (BOOL)isSuffix:(id)suffix;
- (id)normalizedAffix:(id)affix;
- (struct _CFBurstTrie *)sharedNameFrequencyTrieRef;
- (unsigned long long)frequencyOfLatinFamilyName:(id)name;
- (unsigned long long)frequencyOfLatinGivenName:(id)name;
- (unsigned long long)genderMajorityForGivenName:(id)name;
@end

#endif /* NPNameParser_h */
