//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAnimatedImage_h
#define PHAnimatedImage_h
@import Foundation;

@class PFAnimatedImage;

@interface PHAnimatedImage : NSObject

@property (readonly, nonatomic) unsigned long long frameCount;
@property (readonly, nonatomic) unsigned long long loopCount;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) PFAnimatedImage *pf_animatedImage;

/* class methods */
+ (long long)requestAnimatedImageWithURL:(id)url completion:(id /* block */)completion;
+ (long long)requestAnimatedImageWithURL:(id)url options:(id)options completion:(id /* block */)completion;
+ (void)cancelAnimatedImageRequest:(long long)request;

/* instance methods */
- (id)init;
- (id)initWithURL:(id)url;
- (id)initWithURL:(id)url cachingStrategy:(long long)strategy useSharedDecoding:(BOOL)decoding;
- (void)_initializePropertiesWithAnimatedImage:(id)image;
@end

#endif /* PHAnimatedImage_h */
