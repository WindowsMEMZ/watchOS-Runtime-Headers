//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLSequenceModelDataInstance_h
#define NLSequenceModelDataInstance_h
@import Foundation;

#include "NLDataInstance.h"

@class NSArray;

@interface NLSequenceModelDataInstance : NLDataInstance {
  /* instance variables */
  NSArray *_tokens;
  NSArray *_labels;
}

/* class methods */
+ (id)readInstancesFromString:(id)string tokenizer:(struct __CFStringTokenizer *)tokenizer;

/* instance methods */
- (id)initWithTokens:(id)tokens labels:(id)labels;
- (id)initWithLine:(id)line tokenizer:(struct __CFStringTokenizer *)tokenizer;
- (id)string;
- (id)tokens;
- (id)label;
- (id)labels;
- (id)formattedLineWithLabelMap:(id)map vocabularyMap:(id)map;
- (struct __CFDictionary *)instanceDictionary;
- (id)locatorsWithIndex:(unsigned long long)index parameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })parameters tagger:(id)tagger tokenizer:(struct __CFStringTokenizer *)tokenizer;
- (id)subInstanceWithLocator:(id)locator tokenizer:(struct __CFStringTokenizer *)tokenizer;
@end

#endif /* NLSequenceModelDataInstance_h */
