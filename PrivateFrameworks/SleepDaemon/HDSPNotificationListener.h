//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPNotificationListener_h
#define HDSPNotificationListener_h
@import Foundation;

#include "HDSPEnvironment.h"
#include "HDSPEnvironmentAware-Protocol.h"

@class HKSPObserverSet, NSMutableDictionary, NSString;

@interface HDSPNotificationListener : NSObject<HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSMutableDictionary *launchNotificationRegistrations;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } launchNotificationRegistrationLock;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithEnvironment:(id)environment;
- (void)_withLock:(id /* block */)lock;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)registerForLaunchNotificationWithName:(const char *)name key:(id)key;
- (void)unregisterForLaunchNotificationWithName:(const char *)name key:(id)key;
- (void)environmentDidBecomeReady:(id)ready;
- (void)startListening;
- (void)_registerForStream:(id)stream;
- (void)_handleNotificationWithName:(id)name completion:(id /* block */)completion;
@end

#endif /* HDSPNotificationListener_h */
