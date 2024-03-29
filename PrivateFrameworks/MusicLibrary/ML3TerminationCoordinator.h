//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef ML3TerminationCoordinator_h
#define ML3TerminationCoordinator_h
@import Foundation;

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface ML3TerminationCoordinator : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  NSMutableSet *_signatures;
  int _notifyToken;
}

@property (readonly, nonatomic) BOOL isSigned;

/* class methods */
+ (id)sharedCoordinator;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)signForReason:(long long)reason;
- (void)secedeForReason:(long long)reason;
- (BOOL)isSignedForReason:(long long)reason;
- (void)execute;
- (void)_performTermination;
@end

#endif /* ML3TerminationCoordinator_h */
