//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UINewCGImageDecompressor_h
#define _UINewCGImageDecompressor_h
@import Foundation;

#include "_UICGImageDecompressor.h"

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface _UINewCGImageDecompressor : _UICGImageDecompressor {
  /* instance variables */
  struct CMPhotoDecompressionContainer * _container;
  id _imageOrError;
  NSObject<OS_dispatch_queue> *_replyQueue;
  NSObject<OS_dispatch_semaphore> *_sema;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
  struct { unsigned int x :1 started; unsigned int x :1 finished; unsigned int x :1 error; } _flags;
}

/* class methods */
+ (struct CMPhotoDecompressionSession *)_sharedDecompressionSession;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_finishDecompressingWithImage:(struct CGImage *)image error:(id)error;
- (struct CGImage *)waitForImageRef;
@end

#endif /* _UINewCGImageDecompressor_h */
