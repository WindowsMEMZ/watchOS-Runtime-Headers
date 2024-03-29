//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSOnWristMonitor_h
#define CSLSOnWristMonitor_h
@import Foundation;

#include "CSLOnWristClientExportedInterface-Protocol.h"
#include "CSLOnWristClientExportedObject.h"
#include "CSLSOnWristState.h"

@class NSString, NSXPCConnection;
@protocol CSLSOnWristMonitorDelegate, OS_dispatch_queue;

@interface CSLSOnWristMonitor : NSObject<CSLOnWristClientExportedInterface>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) CSLOnWristClientExportedObject *exportedObject;
@property (retain) CSLSOnWristState *lastState;
@property BOOL activated;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (weak, nonatomic) NSObject<CSLSOnWristMonitorDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)CSLOnWristServerExportedInterface;
+ (id)CSLOnWristClientExportedInterface;

/* instance methods */
- (id)init;
- (id)initWithListenerEndpoint:(id)endpoint;
- (id)initWithConnection:(id)connection;
- (void)dealloc;
- (void)getWristState:(id /* block */)state;
- (void)forceOnWristUpdate;
- (void)forceOnWristUpdateForReason:(long long)reason;
- (void)requestWristDetectionDisabledStatusWithCompletion:(id /* block */)completion;
- (void)activate;
- (void)_activate;
- (void)onWristStateChanged:(id)changed;
- (void)_queue_updateState:(id)state notify:(BOOL)notify;
- (void)_getCSLSWristState:(id /* block */)state notify:(BOOL)notify;
- (void)_queue_didGetOnWristState:(id)state notify:(BOOL)notify completion:(id /* block */)completion;
- (void)_queue_onWristStateChanged:(id)changed;
- (BOOL)isActivated;
@end

#endif /* CSLSOnWristMonitor_h */
