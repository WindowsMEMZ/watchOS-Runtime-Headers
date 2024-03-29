//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3505.0.0.0.0
//
#ifndef CNUIImageProvider_h
#define CNUIImageProvider_h
@import Foundation;

@interface CNUIImageProvider : NSObject
/* class methods */
+ (id)imageForResource:(id)resource;
+ (id)imageForResource:(id)resource template:(BOOL)template onCacheMiss:(id /* block */)miss;
+ (id)imageForResource:(id)resource template:(BOOL)template;
+ (id)uncachedImageForResource:(id)resource template:(BOOL)template;
+ (id)cacheKeyForImageResourceName:(id)name template:(BOOL)template;
@end

#endif /* CNUIImageProvider_h */
