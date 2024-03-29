//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTDAssetServiceProtocol_Protocol_h
#define _LTDAssetServiceProtocol_Protocol_h
@import Foundation;

@protocol _LTDAssetServiceProtocol 
/* class methods */
+ (unsigned long long)assetTypeForAssetIdentifier:(id)identifier;
+ (void)downloadAsset:(id)asset options:(unsigned long long)options progress:(id /* block */)progress completion:(id /* block */)completion;
+ (void)purgeAsset:(id)asset completion:(id /* block */)completion;
@end

#endif /* _LTDAssetServiceProtocol_Protocol_h */
