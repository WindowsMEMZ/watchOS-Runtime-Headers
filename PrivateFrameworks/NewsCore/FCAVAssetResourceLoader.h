//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAVAssetResourceLoader_h
#define FCAVAssetResourceLoader_h
@import Foundation;

#include "AVAssetResourceLoaderDelegate-Protocol.h"
#include "FCAVAssetResourceLoaderType-Protocol.h"
#include "FCAssetManager.h"
#include "FCThreadSafeMutableSet.h"

@class NSString;

@interface FCAVAssetResourceLoader : NSObject<AVAssetResourceLoaderDelegate, FCAVAssetResourceLoaderType>

@property (readonly, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) FCThreadSafeMutableSet *whitelistedMasterPlaylistURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithCacheDirectory:(id)directory;
- (void)registerAVURLAssetForAutomaticResourceManagement:(id)management;
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (void)prefetchMasterPlaylistForAssetURL:(id)url completionHandler:(id /* block */)handler;
- (BOOL)_isHLSURL:(id)hlsurl;
@end

#endif /* FCAVAssetResourceLoader_h */
