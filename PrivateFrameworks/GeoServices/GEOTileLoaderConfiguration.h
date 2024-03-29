//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTileLoaderConfiguration_h
#define GEOTileLoaderConfiguration_h
@import Foundation;

#include "GEOResourceManifestConfiguration.h"
#include "NSCopying-Protocol.h"

@class NSLocale, NSString;

@interface GEOTileLoaderConfiguration : NSObject<NSCopying>

@property (nonatomic) Class serverProxyClass;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (nonatomic) unsigned long long backpressureControlCountLimit;
@property (copy, nonatomic) NSString *diskCacheLocation;
@property (retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration;
@property (retain, nonatomic) NSLocale *locale;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GEOTileLoaderConfiguration_h */
