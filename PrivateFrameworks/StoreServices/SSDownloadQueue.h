//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadQueue_h
#define SSDownloadQueue_h
@import Foundation;

#include "SSDownloadManager.h"
#include "SSDownloadManagerObserverPrivate-Protocol.h"

@class NSArray, NSSet, NSString;

@interface SSDownloadQueue : NSObject<SSDownloadManagerObserverPrivate> {
  /* instance variables */
  BOOL _autoFinishDownloads;
  struct __CFSet * _observers;
}

@property (readonly, nonatomic) NSArray *placeholderDownloads;
@property (readonly, nonatomic) NSArray *preorders;
@property (readonly) NSSet *downloadKinds;
@property (readonly) SSDownloadManager *downloadManager;
@property (readonly, nonatomic) NSArray *downloads;
@property (nonatomic) BOOL shouldAutomaticallyFinishDownloads;
@property (readonly) BOOL usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)mediaDownloadKinds;
+ (id)softwareApplicationDownloadKinds;

/* instance methods */
- (id)_initWithDownloadManagerOptions:(id)options;
- (id)init;
- (id)initWithDownloadKinds:(id)kinds;
- (id)initWithDownloadManagerOptions:(id)options;
- (void)dealloc;
- (BOOL)addDownload:(id)download;
- (void)addObserver:(id)observer;
- (BOOL)cancelDownload:(id)download;
- (BOOL)canCancelDownload:(id)download;
- (void)getDownloadsUsingBlock:(id /* block */)block;
- (BOOL)isUsingNetwork;
- (BOOL)reloadFromServer;
- (void)removeObserver:(id)observer;
- (void)addPlaceholderDownloads:(id)downloads;
- (id)downloadForItemIdentifier:(unsigned long long)identifier;
- (void)removePlaceholderDownload:(id)download;
- (BOOL)startPreOrderDownload:(id)download;
- (void)downloadManager:(id)manager downloadsDidChange:(id)change;
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)change;
- (void)downloadManagerDownloadsDidChange:(id)change;
- (void)downloadManagerNetworkUsageDidChange:(id)change;
- (void)_messageObserversWithFunction:(undefined *)function context:(void *)context;
- (void)_sendDownloadStatusChangedAtIndex:(long long)index;
- (void)_sendQueueChangedWithRemovals:(id)removals;
- (void)_sendQueueNetworkUsageChanged;
- (void)_sendQueuePreOrdersChanged;
- (void)_handleDownloadsDidChange:(id)change;
- (void)_handleDownloadsRemoved:(id)removed;
@end

#endif /* SSDownloadQueue_h */
