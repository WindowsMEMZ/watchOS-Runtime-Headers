//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSStagedMigrationManager_h
#define NSStagedMigrationManager_h
@import Foundation;

#include "NSPersistentContainer.h"

@class NSArray;

@interface NSStagedMigrationManager : NSObject

@property (retain) NSPersistentContainer *container;
@property (readonly) NSArray *stages;

/* instance methods */
- (id)initWithMigrationStages:(id)stages;
- (long long)_findCurrentMigrationStageFromModelChecksum:(id)checksum;
- (BOOL)_shouldAttemptStagedMigrationWithStoreModelVersionChecksum:(id)checksum coordinatorModelVersionChecksum:(id)checksum error:(id *)error;
- (void)dealloc;
@end

#endif /* NSStagedMigrationManager_h */
