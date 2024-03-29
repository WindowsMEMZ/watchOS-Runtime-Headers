//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CMCatherineFeederInternal_h
#define CMCatherineFeederInternal_h
@import Foundation;

@protocol OS_dispatch_queue;

@interface CMCatherineFeederInternal : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *fInternalQueue;
  void * fLocationdConnection;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_startDaemonConnection;
- (void)_feedCatherine:(double)catherine confidence:(double)confidence timestamp:(double)timestamp;
@end

#endif /* CMCatherineFeederInternal_h */
