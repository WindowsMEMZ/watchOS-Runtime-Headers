//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _RERuleMLElementComparator_h
#define _RERuleMLElementComparator_h
@import Foundation;

#include "REMLElementComparator.h"

@class NSArray;

@interface _RERuleMLElementComparator : REMLElementComparator {
  /* instance variables */
  NSArray *_filteringRules;
  NSArray *_rankingRules;
  NSArray *_filteringEvaluators;
  NSArray *_leftRankingEvaluators;
  NSArray *_rightRankingEvaluators;
  NSArray *_comparisonRankingEvaluators;
}

/* class methods */
+ (id)comparatorWithFilteringRules:(id)rules rankingRules:(id)rules model:(id)model;

/* instance methods */
- (id)initWithFilteringRules:(id)rules rankingRules:(id)rules model:(id)model;
- (id)copyWithZone:(struct _NSZone *)zone;
- (float)_relevanceForElement:(id)element;
- (BOOL)shouldHideElement:(id)element;
- (unsigned long long)comparisonLevels;
- (long long)compareElement:(id)element toElement:(id)element level:(unsigned long long)level;
@end

#endif /* _RERuleMLElementComparator_h */
