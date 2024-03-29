//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASCachedResult_h
#define _PASCachedResult_h
@import Foundation;

@interface _PASCachedResult : NSObject {
  /* instance variables */
  atomic BOOL _done;
  id _data;
  struct _opaque_pthread_mutex_t { long long __sig; char x[56] __opaque; } _lock;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)resultWithBlock:(id /* block */)block;
- (id)resultNonnullWithBlock:(id /* block */)block;
@end

#endif /* _PASCachedResult_h */
