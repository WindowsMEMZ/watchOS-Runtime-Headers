//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDAssetService_h
#define _LTDAssetService_h
@import Foundation;

#include "_LTDAssetServiceProtocol-Protocol.h"

@interface _LTDAssetService : NSObject<_LTDAssetServiceProtocol>
/* class methods */
+ (void)setAssetProviderFixture:(Class)fixture;
+ (Class)assetProviderFixture;
+ (Class)_serviceProviderForAssetType:(id)type;
+ (void)downloadCatalogForAssetType:(id)type completion:(id /* block */)completion;
+ (void)queryAssetType:(id)type filter:(unsigned long long)filter completion:(id /* block */)completion;
+ (void)downloadAsset:(id)asset options:(unsigned long long)options progress:(id /* block */)progress completion:(id /* block */)completion;
+ (void)downloadAssets:(id)assets options:(unsigned long long)options progress:(id /* block */)progress completion:(id /* block */)completion;
+ (void)purgeAsset:(id)asset completion:(id /* block */)completion;
+ (void)bootstrapWithCompletion:(id /* block */)completion;
+ (id)_libraryDirectory;
+ (id)assetDirectoryURL;
+ (long long)_catalogRefreshInterval;
+ (BOOL)_isCatalogRefreshWaitExpired;
+ (void)_forceOneTimeCatalogRefresh;
+ (void)_test_resetForceOneTimeCatalogRefresh;
+ (id)defaultCatalogTypeWithError:(id *)error;
+ (BOOL)_isObsoleteCatalogType:(id)type;
+ (void)setNeedsCatalogRefresh:(BOOL)refresh;
+ (BOOL)needsCatalogRefresh;
+ (void)refreshCatalogIfNeededWithCompletion:(id /* block */)completion;
+ (void)_refreshHotfixWithCompletion:(id /* block */)completion;
+ (void)configAssetWithCompletion:(id /* block */)completion;
+ (id)configAssetIfAvailableWithError:(id *)error;
+ (void)_installConfigAsset:(id)asset completion:(id /* block */)completion;
+ (void)catalogAssetsWithCompletion:(id /* block */)completion;
+ (id)catalogAssetsWithError:(id *)error;
+ (void)installedAssetsWithCompletion:(id /* block */)completion;
+ (id)installedAssetsWithError:(id *)error;
+ (id)queryAssetType:(id)type filter:(unsigned long long)filter error:(id *)error;
+ (id)filterConfigAssetFromAssets:(id)assets;
+ (id)_assetsSortedByVersion:(id)version;
+ (id)_assetsIdentifiersForPairNames:(id)names error:(id *)error;
+ (id)_pairNamesForLocales:(id)locales;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)identifier;
+ (id)assetsForLocales:(id)locales error:(id *)error;
+ (void)assetsForLocales:(id)locales completion:(id /* block */)completion;
+ (id)_ttsAssetsForLocales:(id)locales;
+ (id)filterAssets:(id)assets forLocales:(id)locales error:(id *)error;
+ (id)matchingASRAssetForLocale:(id)locale error:(id *)error;
+ (id)matchingASRAssetInAssets:(id)assets forLocale:(id)locale;
@end

#endif /* _LTDAssetService_h */
