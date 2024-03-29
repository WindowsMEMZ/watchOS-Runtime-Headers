//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadManager_h
#define SSDownloadManager_h
@import Foundation;

#include "SSDownloadManagerOptions.h"
#include "SSXPCConnection.h"

@class NSArray, NSHashTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface SSDownloadManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  BOOL _activeDownloadsChanged;
  NSObject<OS_dispatch_queue> *_backgroundQueue;
  SSXPCConnection *_connection;
  BOOL _downloadsChanged;
  BOOL _isUsingNetwork;
  SSXPCConnection *_observerConnection;
  NSObject<OS_dispatch_queue> *_observerQueue;
  NSHashTable *_observers;
  SSDownloadManagerOptions *_options;
  NSMutableSet *_removedDownloads;
  int _launchNotificationToken;
}

@property (readonly) SSDownloadManagerOptions *managerOptions;
@property (readonly) NSArray *activeDownloads;
@property (readonly) NSArray *downloads;
@property (readonly) BOOL usingNetwork;

/* class methods */
+ (void)reconnectToLSApplicationWorkspace;
+ (void)removePersistenceIdentifier:(id)identifier;
+ (void)setDownloadHandler:(id)handler;
+ (id)EBookDownloadManager;
+ (id)IPodDownloadManager;
+ (id)softwareDownloadManager;
+ (id)allStoreDownloadKinds;
+ (id)EBookDownloadKinds;
+ (id)IPodDownloadKinds;
+ (id)ITunesDownloadKinds;
+ (void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)identifiers;
+ (void)retryAllRestoreDownloads;
+ (id)softwareDownloadKinds;
+ (void)_triggerDownloads;
+ (void)_sendGlobalHandler:(id)handler;

/* instance methods */
- (id)_initSSDownloadManagerWithOptions:(id)options;
- (id)initWithDownloadKinds:(id)kinds;
- (id)initWithManagerOptions:(id)options;
- (void)dealloc;
- (void)addDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)addObserver:(id)observer;
- (BOOL)canCancelDownload:(id)download;
- (void)cancelAllDownloadsWithCompletionBlock:(id /* block */)block;
- (void)cancelDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)finishDownloads:(id)downloads;
- (void)getDownloadsUsingBlock:(id /* block */)block;
- (void)insertDownloads:(id)downloads afterDownload:(id)download completionBlock:(id /* block */)block;
- (void)insertDownloads:(id)downloads beforeDownload:(id)download completionBlock:(id /* block */)block;
- (BOOL)isUsingNetwork;
- (void)moveDownload:(id)download afterDownload:(id)download completionBlock:(id /* block */)block;
- (void)moveDownload:(id)download beforeDownload:(id)download completionBlock:(id /* block */)block;
- (void)pauseDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)resumeDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)restartDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)removeObserver:(id)observer;
- (void)setDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)_pauseDownloads:(id)downloads completionBlock:(id /* block */)block;
- (void)reloadFromServer;
- (void)setDownloads:(id)downloads forKinds:(id)kinds completionBlock:(id /* block */)block;
- (void)_finishDownloads:(id)downloads;
- (void)_willFinishDownloads:(id)downloads;
- (id)_XPCConnection;
- (void)_connectAfterDaemonLaunch;
- (void)_connectAsObserver;
- (id)_copyDownloadKindsUsingNetwork;
- (id)_copyDownloads;
- (id)_copyDownloadsForMessage:(long long)message downloadIDs:(id)ids;
- (BOOL)_supportsSoftwareKind;
- (void)_handleDownloadKindsUsingNetworkChanged:(id)changed;
- (void)_handleDownloadsChanged:(id)changed;
- (void)_handleDownloadsRemoved:(id)removed;
- (void)_handleDownloadStatesChanged:(id)changed;
- (void)_handleMessage:(id)message fromServerConnection:(id)connection;
- (void)_handleReply:(id)reply forDownloads:(id)downloads message:(id)message isRetry:(BOOL)retry block:(id /* block */)block;
- (void)_insertDownloads:(id)downloads before:(id)before after:(id)after completionBlock:(id /* block */)block;
- (void)_loadDownloadKindsUsingNetwork;
- (void)_moveDownload:(id)download before:(id)before after:(id)after completionBlock:(id /* block */)block;
- (id)_newOptionsDictionary;
- (void)_pauseDownloads:(id)downloads forced:(BOOL)forced completionBlock:(id /* block */)block;
- (void)_reloadIsUsingNetworkWithDownloadKinds:(id)kinds;
- (void)_resetAllDownloads;
- (void)_sendDownloadsChanged:(id)changed;
- (void)_sendMessage:(id)message withCompletionBlock:(id /* block */)block;
- (void)_sendMessageToObservers:(SEL)observers;
- (void)_sendObserverConnection;
@end

#endif /* SSDownloadManager_h */
