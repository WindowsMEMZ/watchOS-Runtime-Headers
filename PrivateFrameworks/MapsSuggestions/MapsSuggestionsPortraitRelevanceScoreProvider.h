//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsPortraitRelevanceScoreProvider_h
#define MapsSuggestionsPortraitRelevanceScoreProvider_h
@import Foundation;

#include "MapsSuggestionsPortrait.h"
#include "MapsSuggestionsRelevanceScoreProvider-Protocol.h"

@class NSArray, NSDate, NSLocale, NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"};

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject<MapsSuggestionsRelevanceScoreProvider> {
  /* instance variables */
  NSDate *_fetchEntriesFromDate;
  NSArray *_portraitData;
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
  NSLocale *_currentLocale;
  NSString *_languageCode;
  NSString *_currentCountryCode;
  MapsSuggestionsPortrait *_portrait;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPortrait:(id)portrait;
- (char)relevanceScoreForNames:(id)names addresses:(id)addresses mapItems:(id)items completion:(id /* block */)completion;
- (void)preLoad;
@end

#endif /* MapsSuggestionsPortraitRelevanceScoreProvider_h */
