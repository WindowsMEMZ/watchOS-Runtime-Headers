//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXCharacterVoiceLoader_h
#define AXCharacterVoiceLoader_h
@import Foundation;

#include "AXAssetUpdateObserver-Protocol.h"
#include "PSYSyncStateObserver-Protocol.h"

@class AXAssetUpdateMonitor, AXCharacterVoiceAssetPolicy, NSArray, NSHashTable, NSMutableDictionary, NSString;

@interface AXCharacterVoiceLoader : NSObject<PSYSyncStateObserver, AXAssetUpdateObserver> {
  /* instance variables */
  NSArray *_characterVoices;
  NSMutableDictionary *_inProgressAssets;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _inProgressAssetsLock;
  NSHashTable *_observers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (nonatomic) BOOL syncComplete;
@property (nonatomic) BOOL isRegisteredForSyncStateChanges;
@property (copy, nonatomic) NSString *queuedLanguage;
@property (retain) AXCharacterVoiceAssetPolicy *assetPolicy;
@property (retain) AXAssetUpdateMonitor *assetUpdateMonitor;
@property (nonatomic) BOOL userInitiated;
@property (readonly, nonatomic) NSString *localizedStatusMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedVoiceLoader;
+ (id)newVoiceLoader;

/* instance methods */
- (id)_init;
- (void)dealloc;
- (void)loadCharacterVoicesIfNecessary;
- (id)localizedStalledStatusMessage;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)informObserversOfStatusChange;
- (void)_registerForSyncStateNotifications;
- (void)_deregisterForSyncStateNotifications;
- (void)syncClientStateDidChange:(id)change;
- (BOOL)isDoneSyncingForSyncClientState:(id)state;
- (void)assetController:(id)controller asset:(id)asset downloadProgressTotalWritten:(long long)written totalExpected:(long long)expected isStalled:(BOOL)stalled expectedTimeRemaining:(double)remaining;
- (void)assetController:(id)controller didFinishDownloadingAsset:(id)asset wasSuccessful:(BOOL)successful error:(id)error hasRemainingDownloads:(BOOL)downloads;
- (void)assetUpdateMonitor:(id)monitor installedAssetsDidChange:(id)change;
@end

#endif /* AXCharacterVoiceLoader_h */
