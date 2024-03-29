//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLRoutineServiceResult_h
#define PLRoutineServiceResult_h
@import Foundation;

@class NSError;
@protocol OS_dispatch_semaphore;

@interface PLRoutineServiceResult : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (readonly) id result;
@property (readonly, copy) NSError *error;

/* instance methods */
- (id)init;
- (void)receivedReplyWithResult:(id)result error:(id)error;
- (BOOL)waitForReplyWithTimeout:(unsigned long long)timeout;
@end

#endif /* PLRoutineServiceResult_h */
