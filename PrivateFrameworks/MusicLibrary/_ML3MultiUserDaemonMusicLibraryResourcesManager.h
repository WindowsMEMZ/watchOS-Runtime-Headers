//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef _ML3MultiUserDaemonMusicLibraryResourcesManager_h
#define _ML3MultiUserDaemonMusicLibraryResourcesManager_h
@import Foundation;

#include "_ML3BaseMusicLibraryResourcesManager.h"
#include "MLMediaLibraryAccountChangeObserver-Protocol.h"
#include "_ML3MultiUserDaemonAccountChangeOperationDelegate-Protocol.h"
#include "_MSVAccountInformationProviding-Protocol.h"

@class ACAccountStore, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager<_ML3MultiUserDaemonAccountChangeOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) NSObject<_MSVAccountInformationProviding> *accountInfo;
@property (weak, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccountInfo:(id)info accountChangeObserver:(id)observer;
- (void)dealloc;
- (id)musicAssetsContainerPath;
- (id)libraryContainerPath;
- (id)_blockingCurrentActiveAccountDSID;
- (id)_libraryContainerPathForDSID:(id)dsid;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)_accountStoreDidChangeNotification:(id)notification;
- (void)_processAccountChangeNotification;
- (void)_notifyClients:(id)clients;
- (BOOL)shouldExecuteAccountChangeOperation:(id)operation reason:(id *)reason;
- (id)databasePathForDSID:(id)dsid;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)change newDatabasePath:(id)path;
@end

#endif /* _ML3MultiUserDaemonMusicLibraryResourcesManager_h */
