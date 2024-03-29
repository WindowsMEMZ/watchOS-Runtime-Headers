//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBProcessObserver_h
#define FBProcessObserver_h
@import Foundation;

#include "FBApplicationProcessObserver-Protocol.h"
#include "FBProcessObserver-Protocol.h"

@class NSString;

@interface FBProcessObserver : NSObject<FBProcessObserver, FBApplicationProcessObserver> {
  /* instance variables */
  unsigned long long _observerAddress;
  Class _observerClass;
  BOOL _supportsWillExit;
  BOOL _supportsDidExit;
  BOOL _supportsStateDidChange;
  BOOL _supportsApplicationDidExit;
  BOOL _supportsApplicationWillLaunch;
  BOOL _supportsApplicationDidLaunch;
  BOOL _supportsApplicationDebugState;
  int _invalidated;
  int _calledWillExit;
  int _calledDidExit;
  int _calledWillLaunch;
  int _calledDidLaunch;
}

@property (readonly, weak, nonatomic) NSObject<FBProcessObserver> *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)invalidate;
- (BOOL)isEqual:(id)equal;
- (void)processWillExit:(id)exit;
- (void)processDidExit:(id)exit;
- (void)process:(id)process stateDidChangeFromState:(id)state toState:(id)state;
- (void)applicationProcessWillLaunch:(id)launch;
- (void)applicationProcessDidLaunch:(id)launch;
- (void)applicationProcessDidExit:(id)exit withContext:(id)context;
- (void)applicationProcessDebuggingStateDidChange:(id)change;
@end

#endif /* FBProcessObserver_h */
