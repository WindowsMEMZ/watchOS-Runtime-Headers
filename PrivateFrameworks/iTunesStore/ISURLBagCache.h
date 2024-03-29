//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISURLBagCache_h
#define ISURLBagCache_h
@import Foundation;

@class SSLRUCache;
@protocol OS_dispatch_queue;

@interface ISURLBagCache : NSObject {
  /* instance variables */
  SSLRUCache *_cachedBags;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
}

/* class methods */
+ (id)sharedCache;
+ (id)URLWithBagContext:(id)context;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)addURLBag:(id)urlbag;
- (void)invalidateAllURLBags;
- (void)invalidateURLBagForContext:(id)context;
- (id)URLBagForContext:(id)context;
- (id)URLBagForContext:(id)context withOptions:(long long)options;
- (void)_storeFrontChangedNotification:(id)notification;
- (id)_newRequestWithURLBagContext:(id)context;
@end

#endif /* ISURLBagCache_h */
