//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMPreviewDispatchCacheProtocol_Protocol_h
#define IMPreviewDispatchCacheProtocol_Protocol_h
@import Foundation;

@protocol IMPreviewDispatchCacheProtocol <NSObject>
/* class methods */
+ (id)stickerPreviewCache;
/* instance methods */
- (id)cachedPreviewForKey:(id)key;
- (void)setCachedPreview:(id)preview key:(id)key;
- (BOOL)isGeneratingPreviewForKey:(id)key;
- (void)resume;
- (void)enqueueSaveBlock:(id /* block */)block withPriority:(long long)priority;
- (void)enqueueGenerationBlock:(id /* block */)block completion:(id /* block */)completion withPriority:(long long)priority forKey:(id)key;
@end

#endif /* IMPreviewDispatchCacheProtocol_Protocol_h */
