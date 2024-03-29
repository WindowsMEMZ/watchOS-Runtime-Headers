//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DEDImageResourceManager_h
#define DEDImageResourceManager_h
@import Foundation;

#include "ResourceLoader.h"

@class NSMutableDictionary;

@interface DEDImageResourceManager : NSObject

@property (retain) ResourceLoader *loader;
@property (retain) NSMutableDictionary *imageCache;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)asynchronousDataFromURL:(id)url key:(id)key completionBlock:(id /* block */)block;
- (id)cachedImageFromKey:(id)key;
@end

#endif /* DEDImageResourceManager_h */
