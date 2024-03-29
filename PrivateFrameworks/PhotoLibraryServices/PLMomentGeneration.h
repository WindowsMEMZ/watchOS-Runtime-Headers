//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLMomentGeneration_h
#define PLMomentGeneration_h
@import Foundation;

#include "PLDateRangeTitleGenerator.h"
#include "PLMomentGenerationThrottle.h"
#include "PLPhotoLibraryBundle.h"

@class NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, PLLazyObject;
@protocol OS_dispatch_queue, PLMomentGenerationDataManagement><PLHighlightItemModelReader;

@interface PLMomentGeneration : NSObject {
  /* instance variables */
  unsigned long long _inProgressCount;
  NSMutableOrderedSet *_pendingInsertsAndUpdates;
  NSMutableDictionary *_pendingDeletes;
  NSMutableOrderedSet *_pendingUpdatesForHighlights;
  NSMutableOrderedSet *_pendingMomentUpdatesForHighlights;
  NSMutableDictionary *_pendingSharedAssetContainerIncrementalChanges;
  NSMutableArray *_pendingCompletionBlocks;
  NSObject<OS_dispatch_queue> *_incrementalGenerationStateQueue;
  PLLazyObject *_lazyFrequentLocationManager;
  PLLazyObject *_lazyLocalCreationDateCreator;
  PLMomentGenerationThrottle *_incrementalMomentGenThrottle;
  PLPhotoLibraryBundle *_libraryBundle;
  PLDateRangeTitleGenerator *_dateRangeTitleGenerator;
}

@property (readonly, weak, nonatomic) NSObject<PLMomentGenerationDataManagement><PLHighlightItemModelReader> *momentGenerationDataManager;

/* class methods */
+ (id)dateIntervalsAroundSortedDates:(id)dates minimumIntervalDuration:(double)duration;

/* instance methods */
- (id)initWithMomentGenerationDataManager:(id)manager bundle:(id)bundle;
- (id)initWithMomentGenerationDataManager:(id)manager bundle:(id)bundle locale:(id)locale;
- (BOOL)isGenerationPassInProgress;
- (void)_updateIncrementalMomentGeneration;
- (BOOL)_hasWorkWorkRemainingWithCompletionBlocks:(id *)blocks;
- (void)releaseMemoryIntensiveObjects;
- (void)_runIncrementalMomentGenerationIfItemsArePendingWithCompletion:(id /* block */)completion;
- (id)_newPublicGlobalUUIDsToAssetsMappingWithAssets:(id)assets;
- (BOOL)_isAsset:(id)asset identicalToAssetForMoments:(id)moments;
- (void)saveChangesForAssetInsertsAndUpdates:(id)updates assetDeletes:(id)deletes assetUpdatesForHighlights:(id)highlights momentUpdatesForHighlights:(id)highlights sharedAssetContainerIncrementalChangesByAssetID:(id)id;
- (void)generateWithAssetInsertsAndUpdates:(id)updates assetDeletes:(id)deletes assetUpdatesForHighlights:(id)highlights momentUpdatesForHighlights:(id)highlights completionHandler:(id /* block */)handler;
- (void)generateWithIncrementalDataCompletionHandler:(id /* block */)handler;
- (void)_runIncrementalGenerationPassWithCompletionHandler:(id /* block */)handler;
- (id)localCreationDateCreator;
- (id)newLocalCreationDateCreator;
- (id)frequentLocationManager;
- (id)newFrequentLocationManager;
- (id)_highlightGenerator;
- (void)_runMomentAndHighlightGenerationForAssets:(id)assets hiddenAssets:(id)assets updatedAssetIDsForHighlights:(id)highlights updatedMomentIDsForHighlights:(id)highlights affectedMoments:(id)moments highlightsWithDeletedMoments:(id)moments sharedAssetContainerIncrementalChanges:(id)changes insertedOrUpdatedMoments:(id *)moments;
- (void)rebuildAllMomentsWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)rebuildAllHighlightsWithOptions:(id)options completionHandler:(id /* block */)handler;
- (void)processRecentHighlightsWithCompletionBlock:(id /* block */)block;
- (void)processUnprocessedMomentLocationsWithCompletionBlock:(id /* block */)block;
- (void)updateHighlightTitlesWithCompletionBlock:(id /* block */)block;
- (void)cleanupEmptyHighlightsWithCompletionBlock:(id /* block */)block;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithCompletionBlock:(id /* block */)block;
- (void)invalidateHighlightSubtitlesAndRegenerateHighlightTitlesWithForceUpdateLocale:(BOOL)locale completionBlock:(id /* block */)block;
- (id)momentGenerationStatus;
- (BOOL)_writeDetails:(id)details toFilepath:(id)filepath withDefaultFilename:(id)filename;
- (id)_detailsForAsset:(id)asset simpleOnly:(BOOL)only;
- (void)_clearReplayLog;
- (void)_appendAssetsToReplayLog:(id)log forBatchUpdate:(BOOL)update;
- (id)_logEntryForAssets:(id)assets isBatchUpdate:(BOOL)update;
- (id)allAssetMetadataWriteToFile:(id)file;
- (id)_detailsForMoment:(id)moment;
- (id)allMomentsMetadataWriteToFile:(id)file;
- (void)validateLibraryWithCompletionBlock:(id /* block */)block;
- (BOOL)regenerateMonthHighlightTitlesWithManager:(id)manager error:(id *)error;
@end

#endif /* PLMomentGeneration_h */
