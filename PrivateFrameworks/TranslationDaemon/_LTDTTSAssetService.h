//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDTTSAssetService_h
#define _LTDTTSAssetService_h
@import Foundation;

#include "_LTDAssetServiceProtocol-Protocol.h"

@interface _LTDTTSAssetService : NSObject<_LTDAssetServiceProtocol>
/* class methods */
+ (id)_queue;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)identifier;
+ (long long)_preferredGender;
+ (id)_preferredName;
+ (long long)preferredVoiceType;
+ (long long)_genderForLocaleIdentifier:(id)identifier;
+ (id)_ttsAssetForLanguage:(id)language name:(id)name gender:(long long)gender;
+ (id)ttsAssetForLocaleIdentifier:(id)identifier;
+ (id)voiceForLocaleIdentifier:(id)identifier;
+ (id)_siriVoiceForTTSAsset:(id)ttsasset;
+ (id)_availableTTSAssets;
+ (id)_availableTTSAssetsByLanguage;
+ (id)installedAssetIdentifiers;
+ (void)setAutoDownloadedAssets:(id)assets;
+ (void)setSiriTTSSession:(id)ttssession;
+ (id)siriTTSSession;
+ (void)setSubscribedVoices:(id)voices;
+ (id)subscribedVoices;
+ (void)downloadVoiceAssetsForLanguagePair:(id)pair;
+ (void)downloadAsset:(id)asset options:(unsigned long long)options progress:(id /* block */)progress completion:(id /* block */)completion;
+ (void)purgeAsset:(id)asset completion:(id /* block */)completion;
@end

#endif /* _LTDTTSAssetService_h */
