//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsMapsAppVisibleChangedTrigger_h
#define MapsSuggestionsMapsAppVisibleChangedTrigger_h
@import Foundation;

#include "MapsSuggestionsBaseTrigger.h"
#include "MapsSuggestionsCondition-Protocol.h"

@class NSString, RBSProcessMonitor;

@interface MapsSuggestionsMapsAppVisibleChangedTrigger : MapsSuggestionsBaseTrigger<MapsSuggestionsCondition> {
  /* instance variables */
  RBSProcessMonitor *_processMonitor;
  BOOL _isVisible;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)didAddFirstObserver;
- (void)didRemoveLastObserver;
- (BOOL)isTrue;
- (id)objectForJSON;
@end

#endif /* MapsSuggestionsMapsAppVisibleChangedTrigger_h */
