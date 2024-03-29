//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsEngineRunner_h
#define MapsSuggestionsEngineRunner_h
@import Foundation;

#include "MapsSuggestionsCircuit-Protocol.h"
#include "MapsSuggestionsEngine.h"
#include "MapsSuggestionsSink-Protocol.h"
#include "MapsSuggestionsTimer-Protocol.h"
#include "MapsSuggestionsTriggerObserver-Protocol.h"

@class NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"}, {_State="minSilenceDate"@"NSDate""earliestRunDate"@"NSDate""firedTriggerName"@"NSString""failedConditionName"@"NSString""stopRunTimer"@"<MapsSuggestionsTimer>""wakeUpTimer"@"<MapsSuggestionsTimer>""entries"@"NSArray"};

@interface MapsSuggestionsEngineRunner : NSObject<MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsCircuit> {
  /* instance variables */
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
  struct _Config { NSString *name; MapsSuggestionsEngineBuilder *engineBuilder; MapsSuggestionsObservers *observers; GEOAutomobileOptions *automobileOptions; double minRunTime; double maxRunTime; double minSleepTime; double maxSleepTime; double leewayRunTime; double leewaySleepTime; NSMutableArray *triggers; NSMutableArray *conditions; NSMutableSet *filters; unsigned long long maxEntries; BOOL nilledWhenAsleep; } _config;
  struct _State { NSDate *minSilenceDate; NSDate *earliestRunDate; NSString *firedTriggerName; NSString *failedConditionName; <MapsSuggestionsTimer> *stopRunTimer; <MapsSuggestionsTimer> *wakeUpTimer; NSArray *entries; } _state;
}

@property (readonly, weak, nonatomic) MapsSuggestionsEngine *engine;
@property (readonly, nonatomic) NSObject<MapsSuggestionsTimer> *wakeUpTimer;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEngineBuilder:(id)builder name:(id)name minRunTime:(double)time maxRunTime:(double)time minSleepTime:(double)time maxSleepTime:(double)time runTimeLeeway:(double)leeway sleepTimeLeeway:(double)leeway maxEntries:(unsigned long long)entries nilledWhenAsleep:(BOOL)asleep wakeUpTimerClass:(Class)class stopRunTimerClass:(Class)class;
- (id)initWithEngineBuilder:(id)builder name:(id)name minRunTime:(double)time maxRunTime:(double)time minSleepTime:(double)time maxSleepTime:(double)time runTimeLeeway:(double)leeway sleepTimeLeeway:(double)leeway maxEntries:(unsigned long long)entries nilledWhenAsleep:(BOOL)asleep wakeUpTimerClass:(Class)class;
- (id)initWithEngineBuilder:(id)builder name:(id)name minRunTime:(double)time maxRunTime:(double)time minSleepTime:(double)time maxSleepTime:(double)time runTimeLeeway:(double)leeway sleepTimeLeeway:(double)leeway maxEntries:(unsigned long long)entries nilledWhenAsleep:(BOOL)asleep;
- (id)initWithEngineBuilder:(id)builder name:(id)name minRunTime:(double)time maxRunTime:(double)time minSleepTime:(double)time maxSleepTime:(double)time maxEntries:(unsigned long long)entries;
- (void)registerObserver:(id)observer;
- (void)addTrigger:(id)trigger;
- (void)addTriggers:(id)triggers;
- (void)removeTrigger:(id)trigger;
- (void)removeTriggers:(id)triggers;
- (void)addCondition:(id)condition;
- (void)addConditions:(id)conditions;
- (void)addPostFilter:(id)filter;
- (void)removeCondition:(id)condition;
- (void)removeConditions:(id)conditions;
- (void)scheduleNextRun;
- (void)runASAP;
- (void)triggerFired:(id)fired;
- (void)invalidateForMapsSuggestionsManager:(id)manager;
- (id)nameForJSON;
- (id)objectForJSON;
@end

#endif /* MapsSuggestionsEngineRunner_h */
