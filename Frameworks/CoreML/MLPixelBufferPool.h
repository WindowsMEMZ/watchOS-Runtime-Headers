//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLPixelBufferPool_h
#define MLPixelBufferPool_h
@import Foundation;

@class NSMutableDictionary;

@interface MLPixelBufferPool : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

@property (readonly, nonatomic) NSMutableDictionary *pixelBufferPoolCache;

/* instance methods */
- (id)init;
- (struct __CVPixelBufferPool *)_pixelBufferPoolWithSize:(struct CGSize { double x0; double x1; })size pixelFormatType:(unsigned int)type error:(id *)error;
- (struct __CVBuffer *)createPixelBufferWithSize:(struct CGSize { double x0; double x1; })size pixelFormatType:(unsigned int)type error:(id *)error;
@end

#endif /* MLPixelBufferPool_h */
