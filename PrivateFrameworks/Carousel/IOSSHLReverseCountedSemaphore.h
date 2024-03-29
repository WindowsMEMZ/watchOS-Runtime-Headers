//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLReverseCountedSemaphore_h
#define IOSSHLReverseCountedSemaphore_h
@import Foundation;

@protocol OS_dispatch_group;

@interface IOSSHLReverseCountedSemaphore : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_group> *_group;
}

/* instance methods */
- (id)init;
- (void)increment;
- (void)decrement;
- (void)wait;
@end

#endif /* IOSSHLReverseCountedSemaphore_h */
