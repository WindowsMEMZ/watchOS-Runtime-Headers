//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSuggestionComputePayloadAdapter_h
#define PLSuggestionComputePayloadAdapter_h
@import Foundation;

#include "PLJournalEntryPayloadUpdateAdapter.h"

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter
/* instance methods */
- (id)suggestion;
- (BOOL)isValidForJournalPersistence;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)keys;
- (id)payloadIDForTombstone:(id)tombstone;
@end

#endif /* PLSuggestionComputePayloadAdapter_h */
