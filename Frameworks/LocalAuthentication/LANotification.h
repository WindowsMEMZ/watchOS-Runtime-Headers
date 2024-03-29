//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1394.60.57.0.0
//
#ifndef LANotification_h
#define LANotification_h
@import Foundation;

#include "LANotificationObserverXPC-Protocol.h"
#include "LANotificationProxy.h"

@class NSObject, NSString, NSXPCConnection;
@protocol LANotificationObserver, LANotificationXPC;

@interface LANotification : NSObject<LANotificationObserverXPC> {
  /* instance variables */
  BOOL _waitingForActivation;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<LANotificationXPC> *notification;
@property (readonly, nonatomic) LANotificationProxy *proxy;
@property (weak, nonatomic) NSObject<LANotificationObserver> *observer;
@property (nonatomic) BOOL notifyOnResume;
@property (nonatomic) BOOL appMustBeActive;
@property (readonly, nonatomic) NSObject *value;
@property (readonly, nonatomic) NSObject *oldValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)postNotificationWithNewValue:(id)value oldValue:(id)value;
+ (BOOL)isAppActive;

/* instance methods */
- (id)initWithObserver:(id)observer;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)postNewValue:(id)value oldValue:(id)value;
- (void)newValue:(id)value oldValue:(id)value completionHandler:(id /* block */)handler;
- (void)_notifyObserverWithAction:(id)action completionHandler:(id /* block */)handler;
- (id)darwinNotificationForValue:(id)value;
- (void)_observeAppActivity:(BOOL)activity;
- (id)_notificationNameWhenAppIsActive:(BOOL)active;
- (void)_appActivityChanged:(id)changed;
- (void)_checkWaiting;
@end

#endif /* LANotification_h */
