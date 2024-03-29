//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 503.2.0.0.0
//
#ifndef STBlueprintBackedDowntimeOverrideModifier_h
#define STBlueprintBackedDowntimeOverrideModifier_h
@import Foundation;

#include "STBlueprint.h"
#include "STDowntimeOverride.h"
#include "STDowntimeOverrideModifier-Protocol.h"

@interface STBlueprintBackedDowntimeOverrideModifier : NSObject<STDowntimeOverrideModifier>

@property (readonly) STBlueprint *downtimeBlueprint;
@property (readonly, copy) STDowntimeOverride *activeOverride;

/* instance methods */
- (id)initWithDowntimeBlueprint:(id)blueprint;
- (BOOL)applyDowntimeOverride:(id)override error:(id *)error;
- (BOOL)removeDowntimeOverrideWithError:(id *)error;
- (BOOL)_saveWithError:(id *)error;
- (void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)context;
- (void)_tombstoneDowntimeOverride;
@end

#endif /* STBlueprintBackedDowntimeOverrideModifier_h */
