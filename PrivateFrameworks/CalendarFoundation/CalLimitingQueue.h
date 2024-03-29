//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalLimitingQueue_h
#define CalLimitingQueue_h
@import Foundation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CalLimitingQueue : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_source;
}

/* instance methods */
- (id)initWithQueue:(id)queue andBlock:(id /* block */)block;
- (void)executeBlock;
- (id)queue;
@end

#endif /* CalLimitingQueue_h */
