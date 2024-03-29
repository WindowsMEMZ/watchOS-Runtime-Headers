//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef CLKUIResourceManager_h
#define CLKUIResourceManager_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface CLKUIResourceManager : NSObject {
  /* instance variables */
  NSMutableDictionary *_recentProvidersForUuid;
  NSMutableDictionary *_atlasesByUuid;
  NSMutableDictionary *_providersByKey;
  NSMutableArray *_streamedAtlases;
  unsigned long long _memoryUsed;
  unsigned long long _memoryLimit;
  NSMutableArray *_textureLoaderQueues;
}

@property (nonatomic) unsigned long long explicitMemoryLimit;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)nullAtlas2D;
- (id)nullAtlasCube;
- (id)textureForUuid:(id)uuid delegate:(id)delegate rect:(id)rect nullTexture:(BOOL)texture;
- (void)purge:(id)purge;
- (unsigned long long)_memoryLimit;
- (unsigned long long)_computeMemoryAvailable;
- (id)_fetchOldestAtlas;
- (id)borrowTextureLoadingQueue;
- (void)returnTextureLoadingQueue:(id)queue;
- (BOOL)memoryIsAvailable:(unsigned long long)available;
- (BOOL)ensureMemoryAvailable:(unsigned long long)available;
- (void)purgeAllUnused;
- (void)updateTextureStreaming;
- (void)notifyAtlas:(id)atlas willChangeToMemoryCost:(unsigned long long)cost;
- (id)delegateForUuid:(id)uuid;
- (void)_purgeAllUnconditionally;
- (id)_newAtlasForUuid:(id)uuid nullTexture:(id)texture streaming:(BOOL)streaming;
- (void)_purgeAtlases:(id)atlases;
- (void)_updateTextureStreamingForAtlas:(id)atlas;
@end

#endif /* CLKUIResourceManager_h */
