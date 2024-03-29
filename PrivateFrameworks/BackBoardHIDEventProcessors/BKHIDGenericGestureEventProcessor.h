//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDGenericGestureEventProcessor_h
#define BKHIDGenericGestureEventProcessor_h
@import Foundation;

#include "BKHIDEventProcessor-Protocol.h"
#include "BKIOHIDServiceDisappearanceObserver-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol BKHIDEventDispatcher;

@interface BKHIDGenericGestureEventProcessor : NSObject<BKIOHIDServiceDisappearanceObserver, BKHIDEventProcessor> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *pendingDestinationsPerSenderID;
@property (retain, nonatomic) NSMutableDictionary *genericGestureTypePerSenderID;
@property (retain, nonatomic) NSObject<BKHIDEventDispatcher> *eventDispatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)processEvent:(inout struct __IOHIDEvent * *)event sender:(id)sender dispatcher:(id)dispatcher;
- (void)serviceDidDisappear:(id)disappear;
- (void)_postEvent:(struct __IOHIDEvent *)event toDestination:(id)destination usingDispatcher:(id)dispatcher;
@end

#endif /* BKHIDGenericGestureEventProcessor_h */
