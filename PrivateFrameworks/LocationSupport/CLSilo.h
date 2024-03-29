//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef CLSilo_h
#define CLSilo_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSMutableSet, NSString;

@interface CLSilo : NSObject<NSCopying> {
  /* instance variables */
  BOOL _isIdle;
  double _lastIdleCheck;
  NSMutableSet *_idleHandlers;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _idleHandlersLock;
  double _currentLatchedAbsoluteTimestamp;
}

@property (readonly, nonatomic) NSString *identifier;

/* class methods */
+ (id)main;
+ (void)setGlobalConfiguration:(id)configuration;
+ (id)globalConfiguration;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
- (void)assertInside;
- (void)assertOutside;
- (void)suspend;
- (void)resume;
- (BOOL)isSuspended;
- (double)currentLatchedAbsoluteTimestamp;
- (void)prepareAndRunBlock:(id /* block */)block;
- (id)newTimer;
- (void)async:(id /* block */)async;
- (void)sync:(id /* block */)sync;
- (void)intendToSync;
- (void)afterInterval:(double)interval async:(id /* block */)async;
- (void)heartBeat:(id)beat;
- (BOOL)shouldBeIdled;
- (id)registerForIdleNotifications:(id /* block */)notifications onResume:(id /* block */)resume;
- (void)unregisterForIdleNotifications:(id)notifications;
- (void)runIdleHandlers;
- (void)runResumeHandlers;
@end

#endif /* CLSilo_h */
