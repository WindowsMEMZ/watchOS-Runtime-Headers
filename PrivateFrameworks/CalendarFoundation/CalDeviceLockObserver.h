//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1547.1.1.3.0
//
#ifndef CalDeviceLockObserver_h
#define CalDeviceLockObserver_h
@import Foundation;

#include "CalDarwinNotificationListener.h"
#include "CalDeviceLockObservable-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CalDeviceLockObserver : NSObject<CalDeviceLockObservable>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) CalDarwinNotificationListener *notificationListener;
@property (copy, nonatomic) id /* block */ stateChangedCallback;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)hasBeenUnlockedSinceBoot;
+ (id)stateChangedNotificationName;

/* instance methods */
- (id)init;
- (id)initWithStateChangedCallback:(id /* block */)callback;
- (void)_notificationReceived;
@end

#endif /* CalDeviceLockObserver_h */
