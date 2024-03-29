//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSRemoteAssetManager_h
#define CSRemoteAssetManager_h
@import Foundation;

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSRemoteAssetManager : NSObject {
  /* instance variables */
  NSString *_currentLanguageCode;
  NSString *_resourcePath;
  NSString *_configVersion;
  NSString *_assetHash;
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_observers;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (BOOL)_loadPreinstalledAssetMetaIfNeeded;
- (id)_remoteAssetMetaPath;
- (id)assetForCurrentLanguageOfType:(unsigned long long)type;
- (BOOL)_writeToJsonFile:(id)file;
- (BOOL)_loadFromJsonFile:(id)file;
- (void)_setAssetsInfoFromMetaData:(id)data;
- (id)_loadJsonDataFromFile:(id)file;
- (void)setLanguageCode:(id)code resourcePath:(id)path configVersion:(id)version assetHash:(id)hash assetType:(unsigned long long)type;
- (id)languageCode;
- (id)assetConfigVersionForAssetType:(unsigned long long)type;
- (id)assetHashForAssetType:(unsigned long long)type;
- (id)resourcePathForAssetType:(unsigned long long)type;
- (void)addObserver:(id)observer forAssetType:(unsigned long long)type;
- (void)removeObserver:(id)observer forAssetType:(unsigned long long)type;
@end

#endif /* CSRemoteAssetManager_h */
