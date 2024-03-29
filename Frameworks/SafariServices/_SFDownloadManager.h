//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFDownloadManager_h
#define _SFDownloadManager_h
@import Foundation;

#include "_SFDownloadDelegate-Protocol.h"
#include "_SFDownloadIconCache.h"

@class NSArray, NSDate, NSMapTable, NSMutableArray, NSString, NSTimer, NSURL, WBSCoalescedAsynchronousWriter;

@interface _SFDownloadManager : NSObject<_SFDownloadDelegate> {
  /* instance variables */
  NSURL *_downloadHistoryURL;
  WBSCoalescedAsynchronousWriter *_historyWriter;
  BOOL _loadedDownloadHistory;
  id /* block */ _blockToExecuteWhenDownloadHistoryIsLoaded;
  NSMapTable *_downloadsToDeferAdding;
  NSTimer *_removeDownloadsTimer;
  NSTimer *_updateTotalProgressTimer;
  long long _viewingDownloadsCount;
}

@property (retain, nonatomic) NSDate *_lastUnviewedDownloadDate;
@property (readonly, nonatomic) NSURL *downloadsRootURL;
@property (weak, nonatomic) NSObject<_SFDownloadDelegate> *extraDownloadDelegate;
@property (readonly, copy, nonatomic) NSArray *downloads;
@property (readonly, nonatomic) _SFDownloadIconCache *iconCache;
@property (readonly, nonatomic) double totalProgress;
@property (readonly, nonatomic) BOOL hasUnviewedDownloads;
@property (readonly, nonatomic) unsigned long long runningDownloadsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultDownloadsHistoryURL;
+ (id)downloadRepresentationsAtURL:(id)url;
+ (id)sharedManager;

/* instance methods */
- (id)initAsReadonly:(BOOL)readonly;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_applicationDidEnterBackground:(id)background;
- (id)_dataForPersistingToHistory;
- (void)reloadDownloadsSynchronously;
- (void)_loadDownloadHistory;
- (void)_loadDownloadHistoryAsynchronous:(BOOL)asynchronous;
- (void)savePendingChangesBeforeTermination;
- (void)getDownloadsWithCompletionHandler:(id /* block */)handler;
- (void)_noteDownloadsChanged;
- (void)removeDownloads:(id)downloads;
- (void)removeDownloadsStartedAfterDate:(id)date;
- (void)_addDownload:(id)download;
- (void)deferAddingDownloadWhenStarted:(id)started;
- (void)_removeDeletedDownloads;
- (void)_removeOldDownloadsAndUpdateTimerIfNeeded;
- (BOOL)shouldExcludeDownloadFromFileSystem:(id)system;
- (BOOL)shouldExcludeDownloadFromList:(id)list;
- (id)_busyDownloads;
- (void)_startUpdateTotalProgressTimerIfNeeded;
- (void)_updateTotalProgress:(id)progress;
- (double)_calculateTotalProgress;
- (BOOL)_canExpireDownloadOnCompletion:(id)completion;
- (void)_setLastUnviewedDownloadDate:(id)date;
- (void)_setHasUnviewedDownloadsIfNeeded;
- (void)didBeginViewingDownloads;
- (void)didEndViewingDownloads;
- (void)downloadDidFinish:(id)finish;
- (void)downloadDidFail:(id)fail;
- (void)downloadDidStart:(id)start;
- (BOOL)downloadShouldImportPlaceholderToDownloadsFolder:(id)folder;
- (void)downloadDidImportFileToDownloadsFolder:(id)folder;
- (void)downloadDidReceiveResponse:(id)response;
- (void)downloadDidResume:(id)resume;
- (id)_containerDirectoryForDownload:(id)download;
- (void)createDirectoryForDownload:(id)download completionHandler:(id /* block */)handler;
- (void)downloadShouldContinueAfterReceivingResponse:(id)response decisionHandler:(id /* block */)handler;
- (void)downloadContentsDidChange:(id)change;
- (void)downloadWillBeDeleted:(id)deleted;
@end

#endif /* _SFDownloadManager_h */
