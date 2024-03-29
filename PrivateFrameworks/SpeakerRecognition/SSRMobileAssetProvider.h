//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRMobileAssetProvider_h
#define SSRMobileAssetProvider_h
@import Foundation;

#include "SSRAssetProviding-Protocol.h"

@class NSString;

@interface SSRMobileAssetProvider : NSObject<SSRAssetProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)installedAssetOfType:(unsigned long long)type forLanguageCode:(id)code;
- (id)allInstalledAssetsOfType:(unsigned long long)type forLanguage:(id)language;
- (unsigned long long)getAssetProviderType;
- (id)_getVoiceTriggerAssetTypeString;
- (unsigned long long)_getVoiceTriggerAssetCurrentCompatibilityVersion;
- (unsigned long long)_getSSRAssetCurrentCompatibilityVersion;
- (id)_getSSRAssetTypeString;
- (id)_getEndpointAssetTypeString;
- (unsigned long long)_getEndpointAssetCurrentCompatibilityVersion;
- (id)_buildAssetQueryForAssetType:(unsigned long long)type;
- (id)_installedMobileAssetOfType:(unsigned long long)type forLanguage:(id)language;
- (id)_findLatestInstalledAsset:(id)asset;
- (id)_filteredAssets:(id)assets forLanguage:(id)language;
@end

#endif /* SSRMobileAssetProvider_h */
