//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSDownloadFileManifest_h
#define SSDownloadFileManifest_h
@import Foundation;

#include "SSXPCConnection.h"

@interface SSDownloadFileManifest : NSObject {
  /* instance variables */
  SSXPCConnection *_connection;
}

@property (readonly) long long manifestType;

/* instance methods */
- (id)init;
- (id)initWithManifestType:(long long)type;
- (void)dealloc;
- (void)getPathsForFilesWithClass:(long long)class completionBlock:(id /* block */)block;
- (void)rebuildManifestWithCompletionBlock:(id /* block */)block;
- (void)removeItemWithAssetPath:(id)path completionBlock:(id /* block */)block;
- (void)removeItemsWithAssetPaths:(id)paths completionBlock:(id /* block */)block;
- (void)_removeItemsWithAssetPaths:(id)paths completionBlock:(id /* block */)block;
@end

#endif /* SSDownloadFileManifest_h */
