//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMPurgableObject_h
#define IMPurgableObject_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface IMPurgableObject : NSObject {
  /* instance variables */
  id _instanceObject;
  id /* block */ _setupBlock;
  id /* block */ _cleanupBlock;
  NSObject<OS_dispatch_queue> *_queue;
}

/* instance methods */
- (id)initWithSetupBlock:(id /* block */)block cleanupBlock:(id /* block */)block queue:(id)queue;
- (void)dealloc;
- (void)_setupInstance;
- (void)_cleanupInstance;
- (id)instance;
- (void)_receivedMemoryWarning:(id)warning;
@end

#endif /* IMPurgableObject_h */
