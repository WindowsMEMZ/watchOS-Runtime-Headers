//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsRealEventKitConnector_h
#define MapsSuggestionsRealEventKitConnector_h
@import Foundation;

#include "MapsSuggestionsEventKitConnector-Protocol.h"
#include "MapsSuggestionsEventKitConnectorDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsRealEventKitConnector : NSObject<MapsSuggestionsEventKitConnector> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) NSObject<MapsSuggestionsEventKitConnectorDelegate> *delegate;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)visibleCalendars;
- (id)calendarsForEntityType:(unsigned long long)type;
- (id)predicateForEventsWithStartDate:(id)date endDate:(id)date calendars:(id)calendars;
- (id)eventsMatchingPredicate:(id)predicate;
- (id)eventWithIdentifier:(id)identifier;
- (BOOL)removeEvent:(id)event span:(long long)span error:(id *)error;
- (void)startListeningForChanges;
- (void)stopListeningForChanges;
- (void)_eventStoreDidChange:(id)change;
@end

#endif /* MapsSuggestionsRealEventKitConnector_h */
