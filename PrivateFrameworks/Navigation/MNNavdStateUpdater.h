//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavdStateUpdater_h
#define MNNavdStateUpdater_h
@import Foundation;

#include "MNNavigationStateObserver-Protocol.h"
#include "MNObserverHashTable.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface MNNavdStateUpdater : NSObject<MNNavigationStateObserver> {
  /* instance variables */
  MNObserverHashTable *_innerObservers;
  BOOL _hasObservers;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedUpdater;

/* instance methods */
- (id)initPrivate;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (BOOL)isNavigatingOrPredictingDestination;
- (BOOL)isNavigatingWithETA;
- (void)stateManager:(id)manager didChangeFromState:(unsigned long long)state toState:(unsigned long long)state;
@end

#endif /* MNNavdStateUpdater_h */
