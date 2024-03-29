//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCAVAssetFactory_h
#define FCAVAssetFactory_h
@import Foundation;

#include "FCAVAssetCacheType-Protocol.h"
#include "FCAVAssetFactoryType-Protocol.h"
#include "FCAVAssetKeyCacheType-Protocol.h"
#include "FCAVAssetKeyManagerType-Protocol.h"
#include "FCAVAssetResourceLoaderType-Protocol.h"
#include "FCMapTable.h"

@class NFUnfairLock, NSString;

@interface FCAVAssetFactory : NSObject<FCAVAssetFactoryType> {
  /* instance variables */
  NSObject<FCAVAssetCacheType> *_assetCache;
  NSObject<FCAVAssetKeyCacheType> *_assetKeyCache;
  NSObject<FCAVAssetKeyManagerType> *_assetKeyManager;
  NSObject<FCAVAssetResourceLoaderType> *_assetResourceLoader;
  FCMapTable *_assets;
  NFUnfairLock *_assetsLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)assetWithIdentifier:(id)identifier remoteURL:(id)url overrideMIMEType:(id)mimetype;
@end

#endif /* FCAVAssetFactory_h */
