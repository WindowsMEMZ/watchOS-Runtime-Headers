//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 26.0.0.0.0
//
#ifndef XAMHandlerRecord_h
#define XAMHandlerRecord_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface XAMHandlerRecord : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _block;
}

/* instance methods */
@end

#endif /* XAMHandlerRecord_h */
