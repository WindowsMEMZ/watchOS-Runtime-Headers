//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLCloudPhotoLibraryManager_h
#define PLCloudPhotoLibraryManager_h
@import Foundation;

#include "CPLLibraryManagerDelegate-Protocol.h"
#include "CPLResourceProgressDelegate-Protocol.h"
#include "PLBackgroundJobWorkerCoordinator.h"
#include "PLBackgroundJobWorkerCoordinatorDelegate-Protocol.h"
#include "PLCloudBatchDownloader.h"
#include "PLCloudBatchUploader.h"
#include "PLCloudInMemoryTaskManager.h"
#include "PLCloudPersistentHistoryChangeTracker.h"
#include "PLCloudPersistentHistoryChangeTrackerDelegate-Protocol.h"
#include "PLCloudPersistentHistoryMigratorContext-Protocol.h"
#include "PLCloudPhotoLibraryUploadTracker.h"
#include "PLCloudTaskManager.h"
#include "PLCloudUserSessionHandling-Protocol.h"
#include "PLForegroundMonitor.h"
#include "PLForegroundMonitorDelegate-Protocol.h"
#include "PLLibraryScopeChangeTracker.h"
#include "PLLibraryServicesManager.h"

@class CPLConfiguration, CPLLibraryManager, CPLStatus, NSMutableArray, NSNumber, NSString, PFCoalescer, PLLazyObject, PLPhotoLibraryPathManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PLCloudPhotoLibraryManager : NSObject<PLCloudPersistentHistoryChangeTrackerDelegate, PLCloudPersistentHistoryMigratorContext, PLBackgroundJobWorkerCoordinatorDelegate, CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundMonitorDelegate, PLCloudUserSessionHandling> {
  /* instance variables */
  PLCloudBatchUploader *_uploader;
  PLCloudBatchDownloader *_downloader;
  PLCloudPersistentHistoryChangeTracker *_syncChangeTracker;
  PLLibraryScopeChangeTracker *_rulesChangeTracker;
  BOOL _wasRebuild;
  BOOL _hasAttemptedMigration;
  NSObject<OS_dispatch_queue> *_isolationQueue;
  PLForegroundMonitor *_foregroundMonitor;
  unsigned long long _state;
  BOOL _checkEnableStateOnIdle;
  BOOL _icplEnabled;
  BOOL _pushOnIdle;
  BOOL _pullOnIdle;
  BOOL _stateChangePending;
  BOOL _hasSettledInitialBatch;
  long long _libraryMode;
  CPLLibraryManager *_unsafe_cplLibrary;
  CPLStatus *_unsafe_cplStatus;
  CPLConfiguration *_cplConfiguration;
  int _pauseRequest;
  short _pauseReason;
  PLCloudTaskManager *_taskManager;
  PLLazyObject *_lazyResourceManager;
  PLLazyObject *_lazyRecoveryManager;
  NSObject<OS_dispatch_source> *_unpauseDispatchTimer;
  NSObject<OS_dispatch_source> *_userUnpauseDispatchTimer;
  long long _pendingResetSyncType;
  BOOL _initializedMaster;
  PFCoalescer *_uploadDownloadCountCoalescer;
  NSObject<OS_dispatch_queue> *_uploadDownloadCountQueue;
  unsigned long long _boundForUploadingPhotos;
  unsigned long long _boundForUploadingVideos;
  unsigned long long _boundForUploadingOtherItems;
  NSObject<OS_dispatch_source> *_workInProgressTimer;
  BOOL _significantWork;
  PLCloudInMemoryTaskManager *_inMemoryTaskManager;
  PLCloudPhotoLibraryUploadTracker *_uploadTracker;
  NSObject<OS_dispatch_queue> *_serialQueue;
  PLLazyObject *_lazyCacheDeleteSupport;
  NSMutableArray *_pushAllChangesCompletionHandlers;
  PLBackgroundJobWorkerCoordinator *_backgroundJobWorkerCoordinator;
  BOOL _pushingAllChanges;
  BOOL _didCallBlocksWaitingForLibraryOpen;
  NSMutableArray *_blocksWaitingForLibraryOpen;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _waitForLibraryOpenLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cplLibraryLock;
  BOOL _isHandlingStatusChangesNotification;
  unsigned long long _statusChangesNotificationGeneration;
  BOOL _unsafe_readyForAnalysis;
  BOOL _opportunisticTasksWasDisabled;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _numbersOfItemsLock;
  NSNumber *_numberOfPhotosToPush;
  NSNumber *_numberOfVideosToPush;
  NSNumber *_numberOfOtherItemsToPush;
  NSNumber *_numberOfPhotosDownloaded;
  NSNumber *_numberOfVideosDownloaded;
  NSNumber *_numberOfOtherItemsDownloaded;
  NSObject<OS_dispatch_queue> *_libraryScopeSynchronizationQueue;
  long long _pendingDeviceLibraryConfiguration;
  NSMutableArray *_deviceLibraryConfigurationChangeCompletionHandlers;
  NSString *_scopeIdentifierToUnsharePendingAssetsFrom;
  BOOL _hasInitialSyncDate;
}

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, weak, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (copy, nonatomic) id /* block */ _idleStateTransitionOneTimeAction;
@property (readonly, nonatomic) BOOL cloudPhotoLibraryEnabled;
@property long long deviceLibraryConfiguration;
@property (readonly, nonatomic) unsigned long long totalNumberOfUnpushedMasters;
@property (readonly, nonatomic) unsigned long long totalNumberOfUploadedMasters;
@property (readonly, nonatomic) unsigned long long totalNumberOfDeferredAssets;
@property (readonly, nonatomic) unsigned long long totalSizeOfUnpushedOriginals;
@property (readonly, nonatomic) unsigned long long totalUploadedOriginalSize;
@property (readonly, nonatomic) long long currentResetSyncType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)descriptionForResourceType:(unsigned long long)type;
+ (BOOL)needResetSyncErrorType:(id)type;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager;
- (void)invalidate;
- (void)invalidateResourceManager;
- (void)invalidateCacheDeleteSupport;
- (void)invalidateRecoveryManager;
- (void)invalidateUploadDownloadCountCoalescer;
- (id)cplLibrary;
- (void)setCPLLibrary:(id)cpllibrary;
- (long long)sizeOfResourcesToUploadByCPL:(id *)cpl;
- (void)enableiCPLWithCompletionHandler:(id /* block */)handler;
- (void)_initCacheDeleteSupport;
- (id)cacheDeleteSupport;
- (void)_resetCacheDeleteSupport;
- (void)_initResourceManager;
- (id)resourceManager;
- (void)_resetResourceManager;
- (void)_initRecoveryManager;
- (void)_initCPLLibraryMode;
- (void)_initDeviceLibraryConfiguration;
- (id)recoveryManager;
- (BOOL)_hasItemToDownload;
- (void)_enableiCPL;
- (void)_openCPLLibrary;
- (void)_handleAccountFlagsChangeIfNecessary;
- (void)_promptForCameraCaptureSettingChangeWithReason:(int)reason;
- (void)_initializeMasterAndSizeCalculationinLibrary:(id)library;
- (void)_runOneTimeMigrationStepsWithoutiCPLIfNecessary;
- (void)_runOneTimeMigrationStepsIfNecessaryInLibrary:(id)library;
- (void)_createDeletionRecordsIfNecessary;
- (void)_migrateFromChangeHubToCoreDataIfNecessary;
- (void)beginsSignificantWorkWithResourcesSize:(unsigned long long)size;
- (void)endsSignificantWork;
- (void)cplHasBackgroundDownloadOperationsWithCompletionHandler:(id /* block */)handler;
- (void)_resetCPLLibrary;
- (void)dealloc;
- (void)_doUnpause;
- (void)setPause:(BOOL)pause reason:(short)reason;
- (void)_unpause;
- (void)_doPause;
- (void)_pause;
- (void)disableiCPLWithCompletionHandler:(id /* block */)handler;
- (void)disableiCPLSyncWillBecomeNonSystemPhotoLibrary;
- (void)_disableiCPLWillBecomeNonSystemPhotoLibrary:(BOOL)library configurationChanged:(BOOL)changed;
- (void)_handleStateTransistionAfterDisableiCPL;
- (void)_runSyncOnIsolationQueueWithBlock:(id /* block */)block;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)transaction block:(id /* block */)block;
- (void)_runAsyncOnIsolationQueueWithTransaction:(id)transaction afterDelay:(double)delay block:(id /* block */)block;
- (void)_runOnLibraryOpenWithTransaction:(id)transaction block:(id /* block */)block;
- (void)_callBlocksWaitingForLibraryOpen;
- (void)_resetDidCallBlocksWaitingForLibraryOpen;
- (BOOL)_canExternallyTransitionToNewLibraryStateIgnoringPause:(BOOL)pause;
- (void)_transitionToState:(unsigned long long)state;
- (void)_stopUnpauseTimer;
- (id)_calculateUnpauseTimeForPauseTime:(id)time;
- (void)_constructUnpauseTimerFrom:(id)from to:(id)to;
- (BOOL)_setupTimerForUnpause;
- (void)_updatePendingResetSyncDate;
- (void)reportMiscInformation:(id)information;
- (void)_reportOptimizeSettingChangeWithCompletionHandler:(id /* block */)handler;
- (void)_handleOptimizeSettingChange;
- (void)_handleOptimizeSettingChangeInLibrary:(id)library withCompletionHandler:(id /* block */)handler;
- (void)_repushVideoAssetsMetadata;
- (void)_repushMasterWithMissingMediaMetadata;
- (void)_repushAssetsWithImportedByBundleIdentifier;
- (void)clearPurgeableResourcesMatchingPredicate:(id)predicate inLibrary:(id)library completionHandler:(id /* block */)handler;
- (void)markPurgeableResourcesMatchingPredicate:(id)predicate urgency:(long long)urgency inLibrary:(id)library completionHandler:(id /* block */)handler;
- (void)_checkAndMarkPurgeableResourcesIfSafe:(id)safe checkServerIfNecessary:(BOOL)necessary urgency:(long long)urgency completionHandler:(id /* block */)handler;
- (void)_processNextTransaction;
- (void)_checkIfSharedLibraryDedupeIsDisabled;
- (BOOL)isCloudPhotoLibraryEnabled;
- (void)_checkEnableState;
- (void)_setupPLCPLPlistInLibrary:(id)library;
- (void)_callPushAllChangesCompletionHandlersIfNecessary;
- (void)saveLastKnownCloudChangeTrackerTokenToDisk;
- (id)readCloudTrackerTokenObject;
- (void)saveCloudTrackerTokenObject:(id)object;
- (BOOL)connectToCloudChangeTracker;
- (void)cloudChangeTrackerDidReceiveChangesWithTransaction:(id)transaction;
- (id)readRulesTrackerTokenObject;
- (void)saveRulesTrackerTokenObject:(id)object;
- (void)sync;
- (void)cancelResourceTransferTaskWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (BOOL)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)identifier;
- (void)fetchAdjustmentDataForAsset:(id)asset completionHandler:(id /* block */)handler;
- (void)fetchResourcesForAsset:(id)asset completionHandler:(id /* block */)handler;
- (void)getStreamingURLForAsset:(id)asset resourceType:(unsigned long long)type intent:(unsigned long long)intent hints:(id)hints timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })range clientBundleID:(id)id completionHandler:(id /* block */)handler;
- (id)_identifierForResource:(id)resource;
- (void)downloadResource:(id)resource highPriority:(BOOL)priority clientBundleID:(id)id proposedTaskIdentifier:(id)identifier taskDidBeginHandler:(id /* block */)handler progressBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)downloadResource:(id)resource options:(id)options clientBundleID:(id)id proposedTaskIdentifier:(id)identifier taskDidBeginHandler:(id /* block */)handler progressBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (id)_assetResourceForAsset:(id)asset resourceType:(unsigned long long)type masterResourceOnly:(BOOL)only isPhoto:(BOOL *)photo;
- (void)downloadAsset:(id)asset resourceType:(unsigned long long)type masterResourceOnly:(BOOL)only highPriority:(BOOL)priority clientBundleID:(id)id proposedTaskIdentifier:(id)identifier taskDidBeginHandler:(id /* block */)handler progressBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)downloadResourceInMemoryForAsset:(id)asset resourceType:(unsigned long long)type masterResourceOnly:(BOOL)only proposedTaskIdentifier:(id)identifier taskDidBeginHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)downloadResourceInMemory:(id)memory proposedTaskIdentifier:(id)identifier taskDidBeginHandler:(id /* block */)handler completionHandler:(id /* block */)handler;
- (void)deleteResources:(id)resources checkServerIfNecessary:(BOOL)necessary completionHandler:(id /* block */)handler;
- (void)_doResetSync:(long long)sync inLibrary:(id)library;
- (void)startAssetRecoveryWithTransaction:(id)transaction;
- (id)readMigrationMarker;
- (void)setMigrationMarker:(id)marker;
- (void)setMigratedLocalVersion:(id)version;
- (void)setLocalVersion:(id)version;
- (id)readLocalVersion;
- (void)resetSyncDueToMigrationMarker;
- (void)startLibraryScopeRulesChangeTracker;
- (void)_startLibraryScopeRulesChangeTrackerInQueue;
- (void)stopLibraryScopeRulesChangeTracker;
- (void)photosPreferencesChanged;
- (void)_processRulesEvaluationIfNeeded;
- (void)_fetchNewEventsFromCloudChangeTrackerInLibrary:(id)library;
- (id)_fetchEventsFromCloudChangeTrackerInLibrary:(id)library;
- (BOOL)isConnectedToCloudChangeTracker;
- (void)_fixMasterStatusIn:(id)in inLibrary:(id)library;
- (void)_checkForPushedMastersInLibrary:(id)library;
- (void)_uploadFullPhotoLibraryToCloud:(id)cloud;
- (void)_uploadToCloudForEventsResult:(id)result inLibrary:(id)library;
- (void)updateTransferCountsWithInsertedPhotoCount:(unsigned long long)count insertedVideoCount:(unsigned long long)count inLibrary:(id)library;
- (void)_processUploadBatchInLibrary:(id)library;
- (void)_handleFinalizeSessionError:(id)error commitError:(id)error uploadBatchContainer:(id)container needResetSync:(BOOL)sync forTransaction:(id)transaction inLibrary:(id)library;
- (void)_finishUploadWithNoBatchesToUploadInLibrary:(id)library;
- (void)_processUploadBatchWithStartupFailureCount:(unsigned long long)count inLibrary:(id)library;
- (id)lastKnownCloudVersionFromDisk;
- (void)startAutomaticPrefetchOrPrune;
- (void)getSystemBudgetsWithCompletionHandler:(id /* block */)handler;
- (BOOL)overrideSystemBudgetsForSyncSession:(BOOL)session pauseReason:(id)reason forSystemBudgets:(unsigned long long)budgets;
- (void)sendBudgetOverrideAnalytics:(BOOL)analytics pauseReason:(id)reason;
- (void)_downloadFromCloudInLibrary:(id)library;
- (void)_processDownloadBatchWithSession:(id)session inLibrary:(id)library;
- (void)_markResourceObjectIDsAsPurgeable:(id)purgeable urgency:(long long)urgency inLibrary:(id)library;
- (void)libraryManagerStatusDidChange:(id)change;
- (void)libraryManagerDidChangeConfiguration:(id)configuration;
- (void)libraryManagerDidStartSynchronization:(id)synchronization;
- (void)libraryManagerHasChangesToPull:(id)pull;
- (void)libraryManagerHasStatusChanges:(id)changes;
- (void)_getStatusChanges:(id)changes transaction:(id)transaction notificationGeneration:(unsigned long long)generation inLibrary:(id)library;
- (void)libraryManager:(id)manager provideLocalResource:(id)resource recordClass:(Class)class completionHandler:(id /* block */)handler;
- (void)libraryManager:(id)manager pushAllChangesWithCompletionHandler:(id /* block */)handler;
- (void)workerCoordinatorDidFinishAllSubmittedJobsOnBundle:(id)bundle;
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)manager;
- (void)libraryManager:(id)manager downloadDidProgress:(float)progress forResourceTransferTask:(id)task;
- (void)libraryManager:(id)manager downloadDidStartForResourceTransferTask:(id)task;
- (void)libraryManager:(id)manager downloadDidFinishForResourceTransferTask:(id)task finalResource:(id)resource withError:(id)error;
- (void)libraryManager:(id)manager backgroundDownloadDidFinishForResource:(id)resource;
- (void)libraryManager:(id)manager backgroundDownloadDidFailForResource:(id)resource;
- (void)libraryManager:(id)manager uploadDidStartForResourceTransferTask:(id)task;
- (void)libraryManager:(id)manager uploadDidFinishForResourceTransferTask:(id)task withError:(id)error;
- (void)libraryManager:(id)manager uploadDidProgress:(float)progress forResourceTransferTask:(id)task;
- (void)libraryManager:(id)manager inMemoryDownloadDidFinishForResourceTransferTask:(id)task data:(id)data withError:(id)error;
- (BOOL)_isAssetsdNotReadyToAnswer;
- (void)_linkFileFrom:(id)from to:(id)to;
- (struct CGSize { double x0; double x1; })_targetSizeForInputSize:(struct CGSize { double x0; double x1; })size maxPixelSize:(unsigned long long)size;
- (void)_updateLocalStaleResourceWithCPLResource:(id)cplresource inLibrary:(id)library;
- (void)_updateWithCPLResource:(id)cplresource isHighPriority:(BOOL)priority inLibrary:(id)library completionHandler:(id /* block */)handler;
- (short)_placeHolderKindFromCPLResourceType:(unsigned long long)type;
- (void)_updateThumbnailDataForAsset:(id)asset withImageFileURL:(id)url;
- (void)_updateAsset:(id)asset withImageFileURL:(id)url;
- (void)foregroundMonitor:(id)monitor changedStateToForeground:(BOOL)foreground forBundleIdentifier:(id)identifier;
- (BOOL)_isPausedForDownloadRequestHighPriority:(BOOL)priority;
- (void)getCPLStateForDebug:(BOOL)debug completionHandler:(id /* block */)handler;
- (id)cplStatus;
- (void)setCPLStatus:(id)cplstatus;
- (id)cplConfiguration;
- (void)setCPLConfiguration:(id)cplconfiguration;
- (void)cplConfigurationWithCompletionHandler:(id /* block */)handler;
- (BOOL)isReadyForAnalysis;
- (void)_setReadyForAnalysisWithCPLStatus:(id)cplstatus;
- (void)_enableOpportunisticTasks;
- (void)_disableOpportunisticTasks;
- (void)clearPrefetchState;
- (void)_updateTransferCountsInLibrary:(id)library;
- (void)_notifyComputeCacheManagerWithCPLStatus:(id)cplstatus andCPLConfiguration:(id)cplconfiguration;
- (unsigned long long)_inq_numberOfOtherItemsToUploadInLibrary:(id)library;
- (unsigned long long)_inq_numberOfPhotosToUploadInLibrary:(id)library;
- (unsigned long long)_inq_numberOfVideosToUploadInLibrary:(id)library;
- (unsigned long long)_inq_numberOfPhotosToDownloadInLibrary:(id)library;
- (unsigned long long)_inq_numberOfVideosToDownloadInLibrary:(id)library;
- (unsigned long long)_inq_numberOfOtherItemsToDownloadInLibrary:(id)library;
- (void)getCurrentTransferProgressWithBlock:(id /* block */)block;
- (void)endUserSessionWithCompletionHandler:(id /* block */)handler;
- (void)_startWorkInProgressTimer;
- (void)_stopWorkInProgressTimer;
- (void)_checkForWorkInProgress;
- (BOOL)_hasAvalancheIncomingWork;
- (BOOL)_hasIncomingWorkFileMarker;
- (void)_setToDownloadCountsForImages:(unsigned long long)images videos:(unsigned long long)videos;
- (void)statusDidChange:(id)change;
- (void)configurationDidChange:(id)change;
- (void)activateScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)deactivateScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)startExitFromLibraryScopeWithIdentifier:(id)identifier retentionPolicy:(long long)policy exitSource:(long long)source completionHandler:(id /* block */)handler;
- (void)removeParticipantsWithParticipantUUIDs:(id)uuids fromLibraryScopeWithIdentifier:(id)identifier retentionPolicy:(long long)policy exitSource:(long long)source completionHandler:(id /* block */)handler;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)handler;
- (void)publishLibraryScopeWithCPLShare:(id)cplshare title:(id)title completionHandler:(id /* block */)handler;
- (void)updateLibraryScopeWithCPLScopeChange:(id)change completionHandler:(id /* block */)handler;
- (void)refreshLibraryScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)identifier maximumCount:(unsigned long long)count completionHandler:(id /* block */)handler;
- (void)_finishedUnsharingPendingAssetsSharedToScopeWithTransaction:(id)transaction error:(id)error;
- (void)_unshareBatchOfPendingAssetsSharedToScopeWithTransaction:(id)transaction;
- (void)startUnsharingPendingAssetsSharedToScopeWithIdentifier:(id)identifier;
- (void)_callDeviceLibraryConfigurationChangeRequestCompletionHandlersWithError:(id)error;
- (void)requestDeviceLibraryConfigurationChange:(long long)change completionHandler:(id /* block */)handler;
- (void)performTransactionOnLibraryScopeSynchronizationQueue:(id /* block */)queue;
- (void)publishCPLScopeChange:(id)change completionHandler:(id /* block */)handler;
- (void)fetchShareFromShareURL:(id)url completionHandler:(id /* block */)handler;
- (void)acceptCPLShare:(id)cplshare completionHandler:(id /* block */)handler;
- (void)boostPriorityForMomentShareWithScopeIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)forceSyncMomentSharesWithScopeIdentifiers:(id)identifiers;
- (void)queryUserIdentitiesWithParticipants:(id)participants completionHandler:(id /* block */)handler;
- (void)resolveLocalIdentifiersForCloudIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)getCloudScopedIdentifiersForLocalIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (id)_convertToIdentifierMapFromCPLScopeIdentifierMap:(id)map;
- (id)_debugNameForState:(unsigned long long)state;
- (id)_inMemoryTrackerStateForDebug;
- (void)_setIdleStateTransitionOneTimeAction:(id /* block */)action;
@end

#endif /* PLCloudPhotoLibraryManager_h */
