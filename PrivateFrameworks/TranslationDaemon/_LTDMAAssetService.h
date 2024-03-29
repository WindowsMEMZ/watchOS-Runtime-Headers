//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDMAAssetService_h
#define _LTDMAAssetService_h
@import Foundation;

#include "_LTDAssetServiceProtocol-Protocol.h"

@interface _LTDMAAssetService : NSObject<_LTDAssetServiceProtocol>
/* class methods */
+ (id)_queue;
+ (BOOL)isInvalidPallasCatalog:(id)catalog;
+ (unsigned long long)assetTypeForAssetIdentifier:(id)identifier;
+ (id)_errorFromQueryResult:(long long)result;
+ (long long)_returnTypeForFilter:(unsigned long long)filter;
+ (void)queryAssetType:(id)type filter:(unsigned long long)filter completion:(id /* block */)completion;
+ (id)queryAssetType:(id)type filter:(unsigned long long)filter error:(id *)error;
+ (id)_errorFromDownloadResult:(long long)result;
+ (id)maDownloadOptionsFrom:(unsigned long long)from;
+ (void)downloadCatalogForAssetType:(id)type completion:(id /* block */)completion;
+ (void)downloadAsset:(id)asset options:(unsigned long long)options progress:(id /* block */)progress completion:(id /* block */)completion;
+ (void)purgeAsset:(id)asset completion:(id /* block */)completion;
@end

#endif /* _LTDMAAssetService_h */
