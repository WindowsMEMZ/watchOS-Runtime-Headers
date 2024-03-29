//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLIconPositionsStore_h
#define CSLIconPositionsStore_h
@import Foundation;

#include "CSLIconPostionsStoreDelegate-Protocol.h"

@class NPSManager;

@interface CSLIconPositionsStore : NSObject {
  /* instance variables */
  NPSManager *_syncManager;
  BOOL _initialSyncComplete;
}

@property (weak, nonatomic) NSObject<CSLIconPostionsStoreDelegate> *delegate;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)initialSyncComplete;
- (void)actionsOnInitialSyncComplete;
- (id)loadDefaultPositions;
- (id)defaultOrderingForConfiguration:(long long)configuration;
- (long long)deviceConfiguration;
- (id)loadDefaultVerticalOnlyPositions;
- (id)loadDefaultPositionsForConfiguration:(long long)configuration;
- (id)loadPositions;
- (id)loadTargetPositions;
- (void)savePositions:(id)positions;
- (void)saveTargetPositions:(id)positions;
- (void)resetIconPositions;
- (void)resetIconPositionsToConfiguration:(long long)configuration;
- (void)moveIconsToTopWithBundleIdentifiers:(id)identifiers;
- (id)orderedBundleIdentifiers;
- (id)_loadPositionsUsingKey:(id)key;
- (id)_loadLocalPositionsUsingKey:(id)key;
- (id)_loadPositionsFromObject:(id)object usingKey:(id)key;
- (void)_moveMRUToTopOfIconGraph:(id)graph;
- (void)_migrateFavoritesToIconGraph:(id)graph;
- (void)_savePositions:(id)positions usingKey:(id)key;
- (void)_saveLocalPositions:(id)positions usingKey:(id)key;
- (id)archivalPositionsObjectForGraph:(id)graph;
- (void)positionsChanged;
- (void)archivePositionsToDiagnostics:(id)diagnostics;
@end

#endif /* CSLIconPositionsStore_h */
