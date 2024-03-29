//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoLibrary_h
#define PLPhotoLibrary_h
@import Foundation;

#include "PLAlbumProtocol-Protocol.h"
#include "PLGenericAlbum.h"
#include "PLGlobalValues.h"
#include "PLKeywordManager.h"
#include "PLLibraryServicesManager.h"
#include "PLManagedObjectContext.h"
#include "PLPhotoLibraryBundle.h"
#include "PLPhotoLibraryOptions.h"
#include "PLThumbnailIndexes.h"
#include "PLThumbnailManager.h"

@class NSArray, NSMutableArray, NSPersistentStore, NSSet, NSString, PLPhotoLibraryPathManager;

@interface PLPhotoLibrary : NSObject {
  /* instance variables */
  NSMutableArray *_transactionCompletionHandlers;
  PLGenericAlbum *_allImportedPhotosAlbum;
  PLGenericAlbum *_lastImportedPhotosAlbum;
  NSSet *_imageFileExtensions;
  NSSet *_rawImageFileExtensions;
  NSSet *_audioFileExtensions;
  NSSet *_extraVideoExtensions;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _managedObjectContextLock;
  NSPersistentStore *_loadedPersistentStore;
}

@property (nonatomic) unsigned long long pendingTransactions;
@property (readonly) BOOL isUnitTesting;
@property (readonly) PLPhotoLibraryBundle *libraryBundle;
@property (readonly) PLKeywordManager *keywordManager;
@property (readonly, retain, nonatomic) NSArray *syncedAlbums;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *syncProgressAlbum;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *otaRestoreProgressAlbum;
@property (readonly, retain, nonatomic) NSObject<PLAlbumProtocol> *filesystemImportProgressAlbum;
@property (readonly, nonatomic) PLPhotoLibraryOptions *options;
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly, weak, nonatomic) PLLibraryServicesManager *libraryServicesManager;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) BOOL cloudPhotoLibraryEnabled;
@property (readonly, nonatomic) PLThumbnailManager *thumbnailManager;
@property (readonly, nonatomic) PLThumbnailIndexes *thumbnailIndexes;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbums;
@property (readonly, copy, nonatomic) NSArray *photoStreamAlbumsForPreferences;
@property (readonly, nonatomic) PLGlobalValues *globalValues;

/* class methods */
+ (id)_stateDictionary;
+ (struct os_state_data_s { unsigned int x0; union { unsigned int x0 :32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64] char x1[64] } x2; char x3[64] unsigned char x4[0] } *)_stateDataWithHints:(struct os_state_hints_s { unsigned int x0; char * x1; unsigned int x2; unsigned int x3; } *)hints;
+ (id)_debugStatisticsDescription;
+ (void)_activateStatusTimer;
+ (void)_registerStateHandler;
+ (void)_withDispatchGroup:(id)group onContext:(id)context synchronously:(BOOL)synchronously shouldSave:(BOOL)save refreshAfterSave:(BOOL)save performTransaction:(id /* block */)transaction completionHandler:(id /* block */)handler;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_ABORT_4_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_AUTH_23_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_BUSY_5_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_CANTOPEN_14_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_CONSTRAINT_19_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_CORRUPT_11_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_DONE_101_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_EMPTY_16_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_FORMAT_24_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_FULL_13_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_INTERNAL_2_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_INTERRUPT_9_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_IOERR_10_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_LOCKED_6_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_MISMATCH_20_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_MISUSE_21_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_NOLFS_22_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_NOMEM_7_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_NOTADB_26_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_NOTFOUND_12_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_NOTICE_27_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_PERM_3_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_PROTOCOL_15_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_RANGE_25_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_READONLY_8_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_ROW_100_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_SCHEMA_17_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_TOOBIG_18_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_WARNING_28_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_OTHER_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_ERROR_1_withCode:(int)code;
+ (void)_abortFromMocExecFail_NSMOC_SQLITE_ERROR_1_SQLITE_ERROR_SNAPSHOT_769_withCode:(int)code;
+ (void)contextExecuteFailedWithSQLiteResultCode:(int)code;
+ (void)_contextSaveFailedWithNSManagedObjectValidationError:(id)error;
+ (void)_contextSaveFailedWithNSManagedObjectConstraintValidationError:(id)error;
+ (void)_contextSaveFailedWithNSValidationMultipleErrorsError:(id)error;
+ (void)_contextSaveFailedWithNSValidationMissingMandatoryPropertyError:(id)error;
+ (void)_contextSaveFailedWithNSValidationRelationshipLacksMinimumCountError:(id)error;
+ (void)_contextSaveFailedWithNSValidationRelationshipExceedsMaximumCountError:(id)error;
+ (void)_contextSaveFailedWithNSValidationRelationshipDeniedDeleteError:(id)error;
+ (void)_contextSaveFailedWithNSValidationNumberTooLargeError:(id)error;
+ (void)_contextSaveFailedWithNSValidationNumberTooSmallError:(id)error;
+ (void)_contextSaveFailedWithNSValidationDateTooLateError:(id)error;
+ (void)_contextSaveFailedWithNSValidationDateTooSoonError:(id)error;
+ (void)_contextSaveFailedWithNSValidationInvalidDateError:(id)error;
+ (void)_contextSaveFailedWithNSValidationStringTooLongError:(id)error;
+ (void)_contextSaveFailedWithNSValidationStringTooShortError:(id)error;
+ (void)_contextSaveFailedWithNSValidationStringPatternMatchingError:(id)error;
+ (void)_contextSaveFailedWithNSValidationInvalidURIError:(id)urierror;
+ (void)_contextSaveFailedWithNSManagedObjectContextRecursiveSaveError:(id)error;
+ (void)_contextSaveFailedWithNSPersistentStoreSaveError:(id)error;
+ (void)_contextSaveFailedWithNSPersistentStoreTimeoutError:(id)error;
+ (void)_contextSaveFailedWithOtherCocoaError:(id)error;
+ (void)_contextSaveFailedWithCocoaError:(id)error message:(id)message;
+ (void)_contextSaveFailedWithTimeoutError:(id)error;
+ (void)_contextSaveFailedWithError:(id)error;
+ (void)_contextSaveFailedWithNoPersistentStores:(id)stores;
+ (void)_contextSaveFailedDueToChangingSPL:(id)spl;
+ (void)_contextSaveFailedDueToClientRequestedShutdown:(id)shutdown;
+ (void)_context:(id)_context saveFailedWithError:(id)error;
+ (id)queueStatusDescription;
+ (void)reportLibraryDidInit:(id)init;
+ (void)reportLibraryDidDealloc:(id)dealloc;
+ (void)initialize;
+ (id)sharedPhotoLibrary;
+ (id)systemPhotoLibrary;
+ (id)systemMainQueuePhotoLibrary;
+ (id)_internalSystemPhotoLibrary;
+ (id)cameraPhotoLibrary;
+ (id)cplPhotoLibrary;
+ (id)cmmPhotoLibrary;
+ (id)cloudSharingPhotoLibrary;
+ (id)diagnosticsPhotoLibrary;
+ (id)unitTestPhotoLibrary;
+ (id)assetsLibraryPhotoLibrary;
+ (id)opportunisticTaskIsolationQueue;
+ (BOOL)areOpportunisticTasksDisabled;
+ (id)newPhotoLibraryWithName:(const char *)name loadedFromURL:(id)url options:(id)options error:(id *)error;
+ (id)newPhotoLibraryWithName:(const char *)name loadedFromBundle:(id)bundle options:(id)options error:(id *)error;
+ (void)setPhotoStreamEnabled:(BOOL)enabled;
+ (void)setCloudAlbumSharingEnabled:(BOOL)enabled;
+ (BOOL)systemPhotoLibraryIsObtainable;
+ (BOOL)shouldTryFastPathWithLibraryBundle:(id)bundle;
+ (void)postGlobalPhotoLibraryAvailableIfNecessary;
+ (id)fileReservationForFileAtPath:(id)path exclusive:(BOOL)exclusive;
+ (BOOL)removeFaceMetadataAtURL:(id)url includingPeople:(BOOL)people;
+ (id)photoOutboundSharingTmpDirectoryURL;
+ (id)masterURLFromSidecarURLs:(id)urls;
+ (void)_loadFileExtensionInformation;
+ (BOOL)isImageFileExtension:(id)extension;
+ (BOOL)isRawImageFileExtension:(id)extension;
+ (BOOL)isNonRawImageFileExtension:(id)extension;
+ (BOOL)isVideoFileExtension:(id)extension;
+ (BOOL)isAudioFileExtension:(id)extension;
+ (BOOL)isAdjustmentEnvelopeExtension:(id)extension;
+ (int)priorityForFileExtension:(id)extension;
+ (void)_getResourceData:(id)data nonDerivativeSizeOut:(atomic  *)out derivativesSizeOut:(unsigned long long)out fileBackedThumbnailsSizeOut:(atomic  *)out tableThumbnailsSizeOut:(unsigned long long)out;
+ (id)savedPhotosOriginalsSizeWithSizeDataRef:(id)ref;
+ (id)savedPhotosReferenceMediaSizeWithSizeDataRef:(id)ref;
+ (id)librarySummarySizeDataRefWithManagedObjectContext:(id)context;
+ (void)configureEnumeratorForLibrarySizeInfo:(id)info completion:(id /* block */)completion;
+ (id)_resourcesInfoFromMoc:(id)moc;
+ (BOOL)canSaveVideoToLibrary:(id)library;
+ (void)refreshCachedCountsOnAllAssetContainersInContext:(id)context;
+ (void)refreshCachedCountsAndDates:(BOOL)dates onAssetsContainerClass:(Class)class inContext:(id)context withPredicate:(id)predicate;
+ (id)requestIdentifierFromDeferredIdentifier:(id)identifier;
+ (void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+ (BOOL)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+ (unsigned long long)CloudPhotoLibrarySize;

/* instance methods */
- (void)performTransaction:(id /* block */)transaction withPriority:(long long)priority;
- (void)performTransaction:(id /* block */)transaction;
- (void)performTransactionAndWait:(id /* block */)wait;
- (void)performTransaction:(id /* block */)transaction completionHandler:(id /* block */)handler withPriority:(long long)priority;
- (void)performTransaction:(id /* block */)transaction completionHandler:(id /* block */)handler;
- (void)performTransactionAndWait:(id /* block */)wait completionHandler:(id /* block */)handler;
- (void)performBlock:(id /* block */)block;
- (void)performBlock:(id /* block */)block withPriority:(long long)priority;
- (void)performBlock:(id /* block */)block completionHandler:(id /* block */)handler;
- (void)performBlock:(id /* block */)block completionHandler:(id /* block */)handler withPriority:(long long)priority;
- (void)performBlockAndWait:(id /* block */)wait;
- (void)performBlockAndWait:(id /* block */)wait forceSave:(BOOL)save;
- (void)performBlockAndWait:(id /* block */)wait completionHandler:(id /* block */)handler;
- (void)withDispatchGroup:(id)group performTransaction:(id /* block */)transaction;
- (void)withDispatchGroup:(id)group performTransaction:(id /* block */)transaction completionHandler:(id /* block */)handler;
- (void)withDispatchGroup:(id)group performBlock:(id /* block */)block;
- (id)shortLivedLibraryCopyByAppendingName:(const char *)name;
- (id)libraryID;
- (void)handlePossibleCoreDataError:(id)error;
- (id)description;
- (void)enableOpportunisticTasks;
- (void)_reallyEnableOpportunisticTasks;
- (void)_resumeSearchIndexing;
- (void)_resumeChangeHandlingNotifications;
- (void)_cancelAllDeferredPrewarming;
- (void)disableOpportunisticTasks;
- (void)_reallyDisableOpportunisticTasks;
- (void)_pauseSearchIndexing;
- (void)_pauseChangeHandlingNotifications;
- (id)init;
- (id)_initWithPathManager:(id)manager;
- (id)initWithName:(const char *)name libraryBundle:(id)bundle options:(id)options;
- (void)dealloc;
- (void)_setManagedObjectContext:(id)context;
- (BOOL)unloadDatabase:(id *)database;
- (BOOL)loadDatabaseWithOptions:(id)options error:(id *)error;
- (void)handlePersistentStoreRemoval:(id)removal;
- (void)clientApplicationWillEnterForeground;
- (id)photoAnalysisClient;
- (id)constraintsDirector;
- (void)_photoLibraryCorruptNotification;
- (void)_photoLibraryForceClientExitNotification;
- (BOOL)_hasIncompleteAsset;
- (BOOL)hasITunesSyncedContent;
- (id)iTunesSyncedContentInfo;
- (void)deleteITunesSyncedContentForEnablingiCPL;
- (void)addCompletionHandlerToCurrentTransaction:(id /* block */)transaction;
- (void)clearTransactionCompletionHandlers;
- (id)transactionCompletionHandlers;
- (id)eventWithName:(id)name andImportSessionIdentifier:(id)identifier;
- (id)albumWithUuid:(id)uuid;
- (void)_userDeleteAlbums:(id)albums;
- (void)_filterAlbums:(id)albums toTrashableAlbums:(id *)albums deletableAlbums:(id *)albums otherAlbums:(id *)albums;
- (void)_userApplyTrashedState:(short)state toAlbums:(id)albums;
- (void)userTrashAlbums:(id)albums;
- (void)userUntrashAlbums:(id)albums;
- (void)userExpungeAlbums:(id)albums;
- (id)albumListForAlbumOfKind:(int)kind;
- (id)eventAlbumContainingPhoto:(id)photo;
- (unsigned long long)countOfLocalAlbumsContainingAssets:(id)assets assetsInSomeAlbumCount:(long long *)count;
- (id)objectWithObjectID:(id)id;
- (id)assetWithUUID:(id)uuid;
- (id)assetWithUUID:(id)uuid inContainer:(id)container;
- (void)_userDeleteAssets:(id)assets withReason:(id)reason localOnlyDelete:(BOOL)delete;
- (void)_filterAssets:(id)assets toTrashableAssets:(id *)assets deletableAssets:(id *)assets otherAssets:(id *)assets;
- (void)_userApplyTrashedState:(short)state toAssets:(id)assets localOnlyDelete:(BOOL)delete trashedReason:(unsigned short)reason expungeReasonFromClient:(id)client;
- (void)userTrashAssets:(id)assets withTrashedReason:(unsigned short)reason;
- (void)userUntrashAssets:(id)assets;
- (void)userExpungeAssets:(id)assets localOnlyDelete:(BOOL)delete expungeReasonFromClient:(id)client;
- (void)_inq_createPhotoStreamAlbumStreamID:(id)id;
- (void)createPhotoStreamAlbumWithStreamID:(id)id;
- (id)assetURLForPhoto:(id)photo extension:(id)extension;
- (id)assetURLForPhoto:(id)photo;
- (id)photoFromAssetURL:(id)url;
- (id)albumFromGroupURL:(id)url;
- (BOOL)deleteAllDiagnosticFiles:(id *)files;
- (void)_deleteObsoleteMetadataFiles;
- (void)cleanupAfterImportAllDCIMAssets;
- (void)_safeSave:(id)save;
- (BOOL)safeSave:(id)save error:(id *)error;
- (void)batchDeleteAssets:(id)assets withReason:(id)reason;
- (id)_fetchedObjectsForDeleteWithEntity:(id)entity predicate:(id)predicate batchSize:(unsigned long long)size error:(id *)error;
- (BOOL)batchDeleteAssetsWithPredicate:(id)predicate reason:(id)reason error:(id *)error;
- (BOOL)batchDeleteObjectsWithEntity:(id)entity predicate:(id)predicate error:(id *)error;
- (id)_fetchCompleteAssetIDsWithValidatedSavedAssetTypeMask:(unsigned short)mask context:(id)context;
- (void)dataMigratorSupportCleanupModelForDataMigrationPurgeMissingSharedAndSynced;
- (void)cleanupIncompleteAssetsAfterOTARestore;
- (id)_loadClientDatabaseContextFastPath;
- (id)_loadClientDatabaseContextWithOptions:(id)options error:(id *)error;
- (id)_loadServerDatabaseContextWithOptions:(id)options error:(id *)error;
- (id)_loadDatabaseContextWithOptions:(id)options error:(id *)error;
- (void)repairSingletonObjects;
- (id)managedObjectContextStoreUUID;
- (void)invalidateWithReason:(id)reason;
- (void)recreateAlbumsAndPersonsFromMetadata;
- (void)recreateMemoriesAndPersonsFromMetadata;
- (void)recreatePersonsFromMetadata;
- (void)_deleteEmptyImportAlbumsWithAddedAlbums:(id)albums;
- (void)_recreateItemsFromMetadataAtDirectoryURLs:(id)urls includeAlbums:(BOOL)albums;
- (void)_enumerateFilesAtURLs:(id)urls withBlock:(id /* block */)block;
- (void)_enumerateFilesAtURL:(id)url withBlock:(id /* block */)block;
- (void)_removeOldFaceMetadataAsync;
- (id)allImportedPhotosAlbum;
- (id)allImportedPhotosAlbumCreateIfNeeded:(BOOL)needed;
- (id)lastImportedPhotosAlbum;
- (id)lastImportedPhotosAlbumCreateIfNeeded:(BOOL)needed;
- (void)resetCachedImportAlbumsIfNeededForAlbum:(id)album;
- (id)imageForFormat:(unsigned short)format forAsset:(id)asset;
- (id)newImageForPhoto:(id)photo format:(unsigned short)format allowPlaceholder:(BOOL)placeholder outImageProperties:(const struct __CFDictionary * *)properties outDeliveredPlaceholder:(BOOL *)placeholder;
- (id)newImageForPhoto:(id)photo format:(unsigned short)format;
- (id)photoOutboundSharingTmpDirectoryURL;
- (void)modifyDCIMEntryForPhoto:(id)photo;
- (id)addDCIMEntryAtFileURL:(id)url mainFileMetadata:(id)metadata progress:(id)progress previewImage:(id)image thumbnailImage:(id)image savedAssetType:(short)type replacementUUID:(id)uuid publicGlobalUUID:(id)uuid extendedInfo:(id)info withUUID:(id)uuid isPlaceholder:(BOOL)placeholder placeholderFileURL:(id)url;
- (void)_applyAdjustmentFileInfo:(id)info renderedContentFileInfo:(id)info renderedVideoComplementFileInfo:(id)info toAsset:(id)asset withMainFileURL:(id)url mainFileMetadata:(id)metadata;
- (void)_processPhotoIrisSidecarIfNecessary:(id)necessary forAsset:(id)asset mainFileMetadata:(id)metadata;
- (id)assetsdClient;
- (id)albumListForContentMode:(int)mode;
- (BOOL)getPhotoCount:(unsigned long long *)count videoCount:(unsigned long long *)count excludeTrashed:(BOOL)trashed excludeInvisible:(BOOL)invisible excludeCloudShared:(BOOL)shared;
- (BOOL)getPhotoCount:(unsigned long long *)count videoCount:(unsigned long long *)count;
- (void)countOfReferencedMediaWithCompletionHandler:(id /* block */)handler;
- (id)librarySizesFromDB;
- (unsigned long long)_fileSizeAtPath:(id)path;
- (unsigned long long)_dbFileSizes;
- (id)estimatedLibrarySizes;
- (id)librarySizes;
- (id)syncProgressAlbumsIgnoreiTunes:(BOOL)tunes;
- (BOOL)hasPendingAssetsIgnoreiTunes:(BOOL)tunes;
- (BOOL)hasCompletedRestorePostProcessing;
- (BOOL)isReadyForCloudPhotoLibrary;
- (id)incompleteRestoreProcesses;
- (BOOL)hasCompletedMomentAnalysis;
- (id)syncedAlbumSubtitleStringFormat;
- (BOOL)isAlbumSynced:(id)synced;
- (void)old_refreshCachedCountsOnAllAssetContainersInContext:(id)context;
- (void)updateAssetPlayShareViewCountsInContext:(id)context;
- (void)_updateAssetCountKeyPath:(id)path withPendingCountKeyPath:(id)path inContext:(id)context;
- (void)updateMemoryPlayShareViewCountsInContext:(id)context;
- (void)_updateMemoryCountKeyPath:(id)path withPendingCountKeyPath:(id)path inContext:(id)context;
- (void)updateAlbumKeyAssetsInContext:(id)context withPredicate:(id)predicate;
- (void)deleteExpiredTrashedResources;
- (void)deleteExpiredTrashedAssetsAndAlbums;
- (unsigned long long)sharedStreamsSize;
- (BOOL)isCloudPhotoLibraryEnabled;
- (unsigned long long)numberOfCPLSupportedAssetsOfKind:(short)kind includingTrashedSinceDate:(id)date;
- (unsigned long long)numberOfUnpushedAssetsOfKind:(short)kind;
- (id)personInfoManager;
- (id)cplStatus;
- (BOOL)isWalrusEnabled;
@end

#endif /* PLPhotoLibrary_h */
