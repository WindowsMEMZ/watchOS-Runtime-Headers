//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsRoutineRelevanceScoreProvider_h
#define MapsSuggestionsRoutineRelevanceScoreProvider_h
@import Foundation;

#include "MapsSuggestionsRelevanceScoreProvider-Protocol.h"
#include "MapsSuggestionsRoutine.h"

@class NSArray, NSDate, NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"};

@interface MapsSuggestionsRoutineRelevanceScoreProvider : NSObject<MapsSuggestionsRelevanceScoreProvider> {
  /* instance variables */
  NSDate *_fetchEntriesFromDate;
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
  MapsSuggestionsRoutine *_routine;
  NSArray *_routineLocations;
  NSArray *_routineVisits;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRoutine:(id)routine;
- (char)relevanceScoreForNames:(id)names addresses:(id)addresses mapItems:(id)items completion:(id /* block */)completion;
- (void)preLoad;
@end

#endif /* MapsSuggestionsRoutineRelevanceScoreProvider_h */
