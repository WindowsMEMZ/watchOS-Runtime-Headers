//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCConfigurationManager_h
#define FCConfigurationManager_h
@import Foundation;

#include "FCAsyncSerialQueue.h"
#include "FCAudioFeedConfigManager-Protocol.h"
#include "FCContextConfiguration.h"
#include "FCCoreConfiguration-Protocol.h"
#include "FCCoreConfigurationManager-Protocol.h"
#include "FCFeldsparIDProvider-Protocol.h"
#include "FCFeldsparIDProviderObserving-Protocol.h"
#include "FCKeyValueStore.h"
#include "FCMagazinesConfigurationManager-Protocol.h"
#include "FCNetworkBehaviorMonitor.h"
#include "FCNewsAppConfig.h"
#include "FCNewsAppConfiguration-Protocol.h"
#include "FCNewsAppConfigurationManager-Protocol.h"
#include "FCTodayFeedConfigurationManager-Protocol.h"

@class NFUnfairLock, NSArray, NSData, NSDate, NSDictionary, NSHashTable, NSString, RCConfigurationManager;
@protocol FCNewsAppConfiguration><FCJSONEncodableObjectProviding, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject<FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager, FCTodayFeedConfigurationManager, FCAudioFeedConfigManager> {
  /* instance variables */
  BOOL _shouldIgnoreCache;
  BOOL _attemptedAppConfigFetch;
  BOOL _runningUnitTests;
  FCNewsAppConfig *_currentAppConfiguration;
  NSDate *_lastModificationDate;
  RCConfigurationManager *_remoteConfigurationManager;
  FCContextConfiguration *_contextConfiguration;
  NSObject<FCFeldsparIDProvider> *_feldsparIDProvider;
  NSString *_appShortVersionString;
  NSString *_buildNumberString;
  FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
  NFUnfairLock *_accessLock;
  NSObject<OS_dispatch_queue> *_workQueue;
  FCAsyncSerialQueue *_remoteAppConfigSerialQueue;
  FCAsyncSerialQueue *_remoteWidgetConfigSerialQueue;
  FCAsyncSerialQueue *_remoteTodayConfigSerialQueue;
  FCAsyncSerialQueue *_remoteMagazineConfigSerialQueue;
  FCAsyncSerialQueue *_remoteAudioConfigSerialQueue;
  FCKeyValueStore *_localStore;
  NSDictionary *_cachedWidgetConfigurationDict;
  NSData *_currentMagazinesConfiguration;
  NSData *_currentTodayFeedConfiguration;
  NSData *_currentAudioFeedConfiguration;
  NSHashTable *_appConfigObservers;
  NSHashTable *_coreConfigObservers;
}

@property (copy, nonatomic) NSArray *treatmentIDs;
@property (copy, nonatomic) NSArray *segmentSetIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *appConfiguration;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *possiblyUnfetchedAppConfiguration;
@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration> *fetchedAppConfiguration;
@property (readonly, nonatomic) NSObject<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> *jsonEncodableAppConfiguration;
@property (readonly, nonatomic) NSObject<FCCoreConfiguration> *configuration;
@property (readonly, nonatomic) NSData *magazinesConfigurationData;
@property (readonly, nonatomic) NSData *todayFeedConfigurationData;
@property (readonly, nonatomic) NSData *audioFeedConfigData;

/* instance methods */
- (id)init;
- (id)initForTesting;
- (id)initWithContextConfiguration:(id)configuration contentHostDirectoryFileURL:(id)url feldsparIDProvider:(id)idprovider;
- (id)initWithContextConfiguration:(id)configuration contentHostDirectoryFileURL:(id)url feldsparIDProvider:(id)idprovider networkBehaviorMonitor:(id)monitor;
- (id)initWithContextConfiguration:(id)configuration contentHostDirectoryFileURL:(id)url feldsparIDProvider:(id)idprovider appShortVersionString:(id)string networkBehaviorMonitor:(id)monitor;
- (id)initWithContextConfiguration:(id)configuration contentHostDirectoryFileURL:(id)url feldsparIDProvider:(id)idprovider appShortVersionString:(id)string buildNumberString:(id)string networkBehaviorMonitor:(id)monitor;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)completion;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)queue completion:(id /* block */)completion;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)queue refreshCompletion:(id /* block */)completion;
- (void)fetchAppWidgetConfigurationWithAdditionalFields:(id)fields completion:(id /* block */)completion;
- (void)addAppConfigObserver:(id)observer;
- (void)removeAppConfigObserver:(id)observer;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)completion;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)queue completion:(id /* block */)completion;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)queue formatVersion:(id)version completion:(id /* block */)completion;
- (void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(id)queue feedType:(unsigned long long)type formatVersion:(id)version completion:(id /* block */)completion;
- (void)fetchAudioFeedConfigIfNeededWithCompletionQueue:(id)queue formatVersion:(id)version completion:(id /* block */)completion;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)id;
@end

#endif /* FCConfigurationManager_h */
