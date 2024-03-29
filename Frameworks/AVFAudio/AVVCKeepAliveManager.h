//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 629.3.4.0.0
//
#ifndef AVVCKeepAliveManager_h
#define AVVCKeepAliveManager_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface AVVCKeepAliveManager : NSObject {
  /* instance variables */
  struct AVVCKeepAliveImpl { undefined * * x0; } * _impl;
  NSObject<OS_dispatch_queue> *mKeepAliveDispatchQueue;
}

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)getDispatchQueue;
- (void)createWithCompletion:(id /* block */)completion;
- (void)startWithCompletion:(id /* block */)completion;
- (void)stopWithCompletion:(id /* block */)completion;
- (void)destroyWithCompletion:(id /* block */)completion;
- (void)dealloc;
@end

#endif /* AVVCKeepAliveManager_h */
