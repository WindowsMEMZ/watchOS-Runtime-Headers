//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXTTSResourceAssetPolicy_h
#define AXTTSResourceAssetPolicy_h
@import Foundation;

#include "AXAssetPolicy.h"

@interface AXTTSResourceAssetPolicy : AXAssetPolicy
/* instance methods */
- (id)assetType;
- (id)launchActivityIdentifier;
- (BOOL)daemonShouldDownloadInBackgroundIfNeeded;
- (BOOL)shouldDownloadAsset:(id)asset withInstalledAssets:(id)assets;
- (id)downloadOptionsForOperation:(unsigned long long)operation userInitiated:(BOOL)initiated;
- (id)assetsToPurgeFromInstalledAssets:(id)assets withRefreshedAssets:(id)assets;
- (id)_voiceIdentifierForAsset:(id)asset;
- (id)compatibilityVersion;
@end

#endif /* AXTTSResourceAssetPolicy_h */
