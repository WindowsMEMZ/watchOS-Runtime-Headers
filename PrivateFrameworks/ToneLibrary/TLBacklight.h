//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 600.0.0.0.0
//
#ifndef TLBacklight_h
#define TLBacklight_h
@import Foundation;

#include "CSLSBacklightObserver-Protocol.h"

@class NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface TLBacklight : NSObject<CSLSBacklightObserver> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  NSString *_accessQueueLabel;
  NSHashTable *_observers;
  BOOL _isObservingBacklight;
}

@property (readonly) long long backlightStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedBacklight;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_setBacklightStatus:(long long)status;
- (void)_setObservingBacklight:(BOOL)backlight;
- (void)backlightDidChange:(id)change from:(long long)from to:(long long)to;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)_notifyObservers:(id)observers ofUpdatedBacklightStatus:(long long)status;
- (void)_performBlockOnAccessQueue:(id /* block */)queue;
- (void)_assertRunningOnAccessQueue;
- (void)_assertNotRunningOnAccessQueue;
@end

#endif /* TLBacklight_h */
