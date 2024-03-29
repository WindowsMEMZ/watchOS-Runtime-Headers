//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDocument_h
#define UIDocument_h
@import Foundation;

#include "NSDocumentDifferenceSize.h"
#include "NSFilePresenter-Protocol.h"
#include "NSProgressReporting-Protocol.h"
#include "UINavigationItemRenameDelegate-Protocol.h"

@class NSDate, NSLock, NSMutableArray, NSMutableSet, NSOperationQueue, NSProgress, NSSet, NSString, NSTimer, NSURL, NSUndoManager, NSUserActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface UIDocument : NSObject<UINavigationItemRenameDelegate, NSFilePresenter, NSProgressReporting> {
  /* instance variables */
  NSUserActivity *_currentUserActivity;
  NSLock *_activityContinuationLock;
  NSString *_fileBookmark;
  NSObject<OS_dispatch_queue> *_fileAccessQueue;
  NSObject<OS_dispatch_queue> *_openingQueue;
  NSObject<OS_dispatch_semaphore> *_fileAccessSemaphore;
  NSOperationQueue *_filePresenterQueue;
  NSTimer *_autosavingTimer;
  double _lastSaveTime;
  double _lastPreservationTime;
  id _versionWithoutRecentChanges;
  NSMutableArray *_versions;
  id _alertPresenter;
  id _progressSubscriber;
  NSMutableSet *_progresses;
  struct __docFlags { unsigned int x :1 inClose; unsigned int x :1 isOpen; unsigned int x :1 inOpen; unsigned int x :1 inRevert; unsigned int x :1 isAutosavingBecauseOfTimer; unsigned int x :1 versionWithoutRecentChangesIsNotLastOpened; unsigned int x :1 ignoreUndoAndRedoNotifications; unsigned int x :1 editingTemporarilyDisabled; unsigned int x :1 editingDisabledDueToPermissions; unsigned int x :1 isRegisteredAsFilePresenter; unsigned int x :1 movingFile; unsigned int x :1 savingError; unsigned int x :1 inConflict; unsigned int x :1 needToStopAccessingSecurityScopedResource; } _docFlags;
}

@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceDueToRecentChanges;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSincePreservingPreviousVersion;
@property (readonly, nonatomic) NSDocumentDifferenceSize *differenceSinceSaving;
@property (readonly) NSURL *fileURL;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *fileType;
@property (copy) NSDate *fileModificationDate;
@property (readonly) unsigned long long documentState;
@property (readonly) NSProgress *progress;
@property (retain) NSUndoManager *undoManager;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (readonly, nonatomic) NSString *savingFileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;

/* class methods */
+ (id)_documentWithContentsOfFileURL:(id)url;
+ (id)_fileModificationDateForURL:(id)url;
+ (id)_typeForContentsOfURL:(id)url error:(id *)error;
+ (id)_customizationOfError:(id)error withDescription:(id)description recoverySuggestion:(id)suggestion recoveryAttempter:(id)attempter;
+ (void)_finishWritingToURL:(id)url withTemporaryDirectoryURL:(id)url newContentsURL:(id)url afterSuccess:(BOOL)success;
+ (BOOL)_url:(id)_url matchesURL:(id)url;
+ (void)_autosavingTimerDidFireSoContinue:(id)continue;

/* instance methods */
- (id)_fileOpeningQueue;
- (void)_performBlock:(id /* block */)block synchronouslyOnQueue:(id)queue;
- (void)_performBlockSynchronouslyOnMainThread:(id /* block */)thread;
- (id)init;
- (id)initWithFileURL:(id)url;
- (void)dealloc;
- (void)_registerAsFilePresenterIfNecessary;
- (void)_unregisterAsFilePresenterIfNecessary;
- (id)_userInfoForActivityContinuation;
- (id)_titleForActivityContinuation;
- (id)_userActivityWithActivityType:(id)type;
- (BOOL)_documentIsUbiquitous;
- (void)_invalidateCurrentUserActivity;
- (id)_activityTypeIdentifierForCloudDocument:(BOOL *)document;
- (void)_reallyManageUserActivity;
- (void)_manageUserActivity;
- (void)_clearUserActivity;
- (void)_setUserActivity:(id)activity;
- (void)setUserActivity:(id)activity;
- (id)userActivity;
- (void)updateUserActivityState:(id)state;
- (void)restoreUserActivityState:(id)state;
- (void)openWithCompletionHandler:(id /* block */)handler;
- (void)_setFileURL:(id)url;
- (void)_updateLastUsedDate;
- (void)_setEditingTemporarilyDisabled:(BOOL)disabled;
- (BOOL)_isEditingTemporarilyDisabled;
- (void)_setEditingDisabledDueToPermissions:(BOOL)permissions;
- (BOOL)_isEditingDisabledDueToPermissions;
- (void)_setOpen:(BOOL)open;
- (BOOL)_isOpen;
- (void)_setInOpen:(BOOL)open;
- (BOOL)_isInOpen;
- (void)_setHasSavingError:(BOOL)error;
- (BOOL)_hasSavingError;
- (void)_setInConflict:(BOOL)conflict;
- (BOOL)_isInConflict;
- (void)_sendStateChangedNotification;
- (void)performAsynchronousFileAccessUsingBlock:(id /* block */)block;
- (void)_lockFileAccessQueueAndPerformBlock:(id /* block */)block;
- (void)_unlockFileAccessQueue;
- (void)_progressPublished:(id)published;
- (void)_progressUnpublished:(id)unpublished;
- (void)revertToContentsOfURL:(id)url completionHandler:(id /* block */)handler;
- (BOOL)readFromURL:(id)url error:(id *)error;
- (BOOL)loadFromContents:(id)contents ofType:(id)type error:(id *)error;
- (id)_presentableFileNameForSaveOperation:(long long)operation url:(id)url;
- (id)_writingProgressForURL:(id)url indeterminate:(BOOL)indeterminate;
- (BOOL)writeContents:(id)contents andAttributes:(id)attributes safelyToURL:(id)url forSaveOperation:(long long)operation error:(id *)error;
- (BOOL)writeContents:(id)contents toURL:(id)url forSaveOperation:(long long)operation originalContentsURL:(id)url error:(id *)error;
- (id)fileAttributesToWriteToURL:(id)url forSaveOperation:(long long)operation error:(id *)error;
- (BOOL)_coordinateWritingItemAtURL:(id)url error:(id *)error byAccessor:(id /* block */)accessor;
- (id)contentsForType:(id)type error:(id *)error;
- (void)saveToURL:(id)url forSaveOperation:(long long)operation completionHandler:(id /* block */)handler;
- (void)_finishSavingToURL:(id)url forSaveOperation:(long long)operation changeCount:(id)count;
- (double)_autosavingDelay;
- (void)_autosavingCompletedSuccessfully:(BOOL)successfully;
- (void)_rescheduleAutosaving;
- (void)_scheduleAutosavingAfterDelay:(double)delay reset:(BOOL)reset;
- (void)_scheduleAutosaving;
- (void)_saveUnsavedChangesWithCompletionHandler:(id /* block */)handler;
- (void)_autosaveWithCompletionHandler:(id /* block */)handler;
- (void)autosaveWithCompletionHandler:(id /* block */)handler;
- (void)closeWithCompletionHandler:(id /* block */)handler;
- (BOOL)_hasUnsavedChanges;
- (void)updateChangeCount:(long long)count;
- (id)changeCountTokenForSaveOperation:(long long)operation;
- (void)updateChangeCountWithToken:(id)token forSaveOperation:(long long)operation;
- (void)_changeWasDone:(id)done;
- (void)_changeWasUndone:(id)undone;
- (void)_changeWasRedone:(id)redone;
- (void)_releaseUndoManager;
- (void)handleError:(id)error userInteractionPermitted:(BOOL)permitted;
- (void)finishedHandlingError:(id)error recovered:(BOOL)recovered;
- (void)userInteractionNoLongerPermittedForError:(id)error;
- (void)_updateLocalizedName;
- (id)fileNameExtensionForType:(id)type saveOperation:(long long)operation;
- (void)relinquishPresentedItemToReader:(id /* block */)reader;
- (BOOL)_shouldAllowWritingInResponseToPresenterMessage;
- (void)_updatePermissionsState:(BOOL)state;
- (void)relinquishPresentedItemToWriter:(id /* block */)writer;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)handler;
- (void)_applicationWillResignActive:(id)active;
- (void)_applicationDidBecomeActive:(id)active;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)handler;
- (void)presentedItemDidMoveToURL:(id)url;
- (void)presentedItemDidChange;
- (void)_updateConflictState;
- (void)presentedItemDidGainVersion:(id)version;
- (void)presentedItemDidLoseVersion:(id)version;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)url completionHandler:(id /* block */)handler;
- (void)presentedSubitemDidAppearAtURL:(id)url;
- (void)presentedSubitemDidChangeAtURL:(id)url;
- (void)presentedSubitemAtURL:(id)url didMoveToURL:(id)url;
- (void)presentedSubitemAtURL:(id)url didGainVersion:(id)version;
- (void)presentedSubitemAtURL:(id)url didLoseVersion:(id)version;
- (void)presentedItemDidResolveConflictVersion:(id)version;
- (void)presentedSubitemAtURL:(id)url didResolveConflictVersion:(id)version;
- (void)presentedItemHasUnsavedChangesWithCompletionHandler:(id /* block */)handler;
- (void)enableEditing;
- (void)disableEditing;
@end

#endif /* UIDocument_h */
