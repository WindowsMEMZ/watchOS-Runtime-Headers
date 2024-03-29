//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 8.0.0.0.0
//
#ifndef IPGlobalInstallableStateSource_h
#define IPGlobalInstallableStateSource_h
@import Foundation;

#include "IPGlobalInstallableStateSourceBehavior-Protocol.h"
#include "IPGlobalInstallableStateSourceBehaviorUpdateObserver-Protocol.h"

@class NSHashTable, NSMutableSet, NSString;

@interface IPGlobalInstallableStateSource : NSObject<IPGlobalInstallableStateSourceBehaviorUpdateObserver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
  NSObject<IPGlobalInstallableStateSourceBehavior> *_behavior;
  NSHashTable *_observers;
  NSMutableSet *_knownIdentities;
  BOOL _isObservingBehavior;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedAllAppStateSource;

/* instance methods */
- (id)initWithBehavior:(id)behavior;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)makeAndEnumerateStateSourcesForExtantIdentities:(id /* block */)identities;
- (void)makeAndEnumerateStateSourcesForInstallingIdentities:(id /* block */)identities;
- (void)testingActionBarrier;
- (void)globalStateSourceBehavior:(id)behavior stateSourceAvailableForIdentity:(id)identity withGenerator:(id /* block */)generator;
@end

#endif /* IPGlobalInstallableStateSource_h */
