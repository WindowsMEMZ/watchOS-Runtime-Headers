//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsShortcutManager_h
#define MapsSuggestionsShortcutManager_h
@import Foundation;

#include "MapsSuggestionsContacts.h"
#include "MapsSuggestionsMeCard.h"
#include "MapsSuggestionsMeCardObserver-Protocol.h"
#include "MapsSuggestionsMeCardReader-Protocol.h"
#include "MapsSuggestionsObservers.h"
#include "MapsSuggestionsRoutine.h"
#include "MapsSuggestionsShortcutStorage-Protocol.h"
#include "MapsSuggestionsShortcutSuggestor-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol {Queue="_innerQueue"@"NSObject<OS_dispatch_queue>""_name"@"NSString"};

@interface MapsSuggestionsShortcutManager : NSObject<MapsSuggestionsMeCardObserver, MapsSuggestionsMeCardReader> {
  /* instance variables */
  struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
  NSObject<MapsSuggestionsShortcutStorage> *_storage;
  NSObject<MapsSuggestionsShortcutSuggestor> *_suggestor;
  MapsSuggestionsRoutine *_routine;
  MapsSuggestionsContacts *_contacts;
  NSMutableArray *_hiddenShortcuts;
  MapsSuggestionsMeCard *_rawMeCard;
  MapsSuggestionsObservers *_meCardObservers;
  MapsSuggestionsMeCard *_currCorrectedMeCard;
  NSArray *_rawHomeAddressStrings;
  NSArray *_rawWorkAddressStrings;
  NSArray *_rawSchoolAddressStrings;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initFromResourceDepot:(id)depot;
- (id)initWithStorage:(id)storage suggestor:(id)suggestor contacts:(id)contacts routine:(id)routine;
- (id)test_setUpPlaceholdersIfNeeded:(id)needed overlays:(id)overlays;
- (void)test_sortMapsSuggestionsShortcuts:(id)shortcuts;
- (char)loadAllShortcutsWithHandler:(id /* block */)handler;
- (char)addOrUpdateShortcuts:(id)shortcuts handler:(id /* block */)handler;
- (char)removeShortcuts:(id)shortcuts handler:(id /* block */)handler;
- (char)moveShortcut:(id)shortcut toIndex:(long long)index withSnapshot:(id)snapshot handler:(id /* block */)handler;
- (char)moveShortcut:(id)shortcut beforeShortcut:(id)shortcut handler:(id /* block */)handler;
- (char)moveShortcut:(id)shortcut afterShortcut:(id)shortcut handler:(id /* block */)handler;
- (char)moveShortcutToFront:(id)front handler:(id /* block */)handler;
- (char)moveShortcutToBack:(id)back handler:(id /* block */)handler;
- (char)proposeAdditionalShortcutsOfType:(long long)type handler:(id /* block */)handler;
- (void)meCardReader:(id)reader didUpdateMeCard:(id)card;
- (char)readMeCardWithHandler:(id /* block */)handler;
- (void)registerMeCardObserver:(id)observer;
- (void)unregisterMeCardObserver:(id)observer;
- (id)storage;
- (id)suggestor;
- (id)routine;
@end

#endif /* MapsSuggestionsShortcutManager_h */
