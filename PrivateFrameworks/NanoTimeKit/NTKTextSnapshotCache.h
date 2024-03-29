//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKTextSnapshotCache_h
#define NTKTextSnapshotCache_h
@import Foundation;

@class BSUIMappedImageCache;
@protocol OS_dispatch_queue;

@interface NTKTextSnapshotCache : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_renderQueue;
  BSUIMappedImageCache *_cache;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)requestTextSnapshotForText:(id)text textAttributes:(id)attributes textBoundsSize:(struct CGSize { double x0; double x1; })size withCompletion:(id /* block */)completion;
- (id)_cachedTextImageForKey:(id)key;
- (void)_setCachedTextImage:(id)image forKey:(id)key;
@end

#endif /* NTKTextSnapshotCache_h */
