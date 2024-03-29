//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCMRLegacyRemoteArtworkDataSource_h
#define MPCMRLegacyRemoteArtworkDataSource_h
@import Foundation;

#include "MPAbstractNetworkArtworkDataSource.h"

@interface MPCMRLegacyRemoteArtworkDataSource : MPAbstractNetworkArtworkDataSource
/* class methods */
+ (id)sharedDataSource;
+ (id)bestArtworkSizes;

/* instance methods */
- (BOOL)areRepresentationsAvailableForCatalog:(id)catalog;
- (id)supportedSizesForCatalog:(id)catalog;
- (id)_urlForCatalog:(id)catalog size:(struct CGSize { double x0; double x1; })size;
- (id)requestForCatalog:(id)catalog size:(struct CGSize { double x0; double x1; })size;
- (BOOL)hasExportableArtworkPropertiesForCatalog:(id)catalog;
- (void)getExportableArtworkPropertiesForCatalog:(id)catalog completionHandler:(id /* block */)handler;
- (id)cacheKeyForCatalog:(id)catalog size:(struct CGSize { double x0; double x1; })size;
@end

#endif /* MPCMRLegacyRemoteArtworkDataSource_h */
