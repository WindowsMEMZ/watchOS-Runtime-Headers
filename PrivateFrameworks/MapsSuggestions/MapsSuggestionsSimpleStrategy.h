//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsSimpleStrategy_h
#define MapsSuggestionsSimpleStrategy_h
@import Foundation;

#include "MapsSuggestionsManager.h"
#include "MapsSuggestionsStrategy-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString;

@interface MapsSuggestionsSimpleStrategy : NSObject<MapsSuggestionsStrategy> {
  /* instance variables */
  NSMutableSet *_preFilters;
  NSMutableArray *_improvers;
  NSMutableArray *_dedupers;
  NSMutableSet *_postFilters;
  NSMutableArray *_previousResults;
}

@property (weak, nonatomic) MapsSuggestionsManager *manager;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)clearData;
- (BOOL)preFiltersKept:(id)kept;
- (BOOL)postFiltersKept:(id)kept;
- (id)topSuggestionsWithSourceEntries:(id)entries error:(id *)error;
- (void)addPreFilter:(id)filter;
- (void)addPostFilter:(id)filter;
- (void)removeFilter:(id)filter;
- (void)removeAllFilters;
- (void)addImprover:(id)improver;
- (void)removeAllImprovers;
- (void)addDeduper:(id)deduper;
- (void)removeAllDedupers;
@end

#endif /* MapsSuggestionsSimpleStrategy_h */
