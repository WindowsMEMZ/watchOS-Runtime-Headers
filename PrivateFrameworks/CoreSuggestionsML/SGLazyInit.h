//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGLazyInit_h
#define SGLazyInit_h
@import Foundation;

@interface SGLazyInit : NSObject {
  /* instance variables */
  id /* block */ _initializer;
  id /* block */ _destructor;
  id _cachedObject;
}

/* instance methods */
- (id)initWithInitializer:(id /* block */)initializer destructor:(id /* block */)destructor;
- (id)getObject;
- (id)peekAtCachedObject;
- (void)destroyCachedObject;
- (void)dealloc;
@end

#endif /* SGLazyInit_h */
