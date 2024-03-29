//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKFaceBundleLoader_h
#define NTKFaceBundleLoader_h
@import Foundation;

#include "NTKBundleLoader.h"

@class NSArray, NSSet;

@interface NTKFaceBundleLoader : NSObject {
  /* instance variables */
  NSArray *_cachedFaceBundles;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
  NTKBundleLoader *_loader;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _loaderLock;
  NSSet *_urls;
}

/* class methods */
+ (id)faceBundleLoaderWithDirectories:(id)directories;

/* instance methods */
- (id)initWithURLs:(id)urls;
- (void)_enumerateBundles:(id /* block */)bundles;
- (void)_loadClassesUsingBlock:(id /* block */)block;
- (id)loadFaceBundleWithIdentifier:(id)identifier;
- (id)loadLegacyFaceBundleForStyle:(long long)style;
- (void)enumerateFaceBundleClassesIgnoringCache:(BOOL)cache withBlock:(id /* block */)block;
@end

#endif /* NTKFaceBundleLoader_h */
