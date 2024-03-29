//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLBackgroundJobGuestAssetSyncWorker_h
#define PLBackgroundJobGuestAssetSyncWorker_h
@import Foundation;

#include "PLBackgroundJobWorker.h"

@class NSPersistentHistoryToken;

@interface PLBackgroundJobGuestAssetSyncWorker : PLBackgroundJobWorker

@property (copy) NSPersistentHistoryToken *cancelledWorkItem;

/* class methods */
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)identifier;
+ (BOOL)usesMultipleLibrariesConcurrently;

/* instance methods */
- (id)workItemsNeedingProcessingInLibrary:(id)library;
- (void)performWorkOnItem:(id)item inLibrary:(id)library completion:(id /* block */)completion;
- (BOOL)isInterruptible;
- (void)stopWorkingOnItem:(id)item;
@end

#endif /* PLBackgroundJobGuestAssetSyncWorker_h */
