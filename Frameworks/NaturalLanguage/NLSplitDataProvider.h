//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLSplitDataProvider_h
#define NLSplitDataProvider_h
@import Foundation;

#include "NLDataProvider.h"
#include "NLDataProvider.h"

@class NSArray;

@interface NLSplitDataProvider : NLDataProvider {
  /* instance variables */
  NLDataProvider *_dataProvider;
  NSArray *_indexes;
}

/* instance methods */
- (id)initWithDataProvider:(id)provider indexes:(id)indexes;
- (id)configuration;
- (unsigned long long)numberOfInstances;
- (id)instanceAtIndex:(unsigned long long)index;
- (void)_generateMaps;
- (struct __CFStringTokenizer *)tokenizer;
- (id)labelMap;
- (id)inverseLabelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (unsigned long long)numberOfLabels;
- (unsigned long long)numberOfVocabularyEntries;
@end

#endif /* NLSplitDataProvider_h */
