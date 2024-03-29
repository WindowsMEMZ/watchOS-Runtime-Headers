//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSiriActivationListener_h
#define AFSiriActivationListener_h
@import Foundation;

#include "AFInvalidating-Protocol.h"
#include "AFNotifyObserverDelegate-Protocol.h"
#include "AFSiriActivationListenerDelegate-Protocol.h"
#include "AFSiriActivationService-Protocol.h"
#include "NSXPCListenerDelegate-Protocol.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AFSiriActivationListener : NSObject<AFNotifyObserverDelegate, AFSiriActivationService, NSXPCListenerDelegate, AFInvalidating> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSXPCListener *_xpcListener;
  NSObject<AFSiriActivationListenerDelegate> *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithServicePort:(long long)port;
- (void)dealloc;
- (void)startWithDelegate:(id)delegate;
- (void)stop;
- (void)invalidate;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)notifyObserver:(id)observer didChangeStateFrom:(unsigned long long)from to:(unsigned long long)to;
- (void)prewarmWithRequestInfo:(id)info context:(id)context completion:(id /* block */)completion;
- (void)activateWithRequestInfo:(id)info context:(id)context completion:(id /* block */)completion;
- (void)deactivateForReason:(long long)reason options:(unsigned long long)options context:(id)context completion:(id /* block */)completion;
- (void)handleContext:(id)context completion:(id /* block */)completion;
- (void)handleIntent:(id)intent inBackgroundAppWithBundleId:(id)id reply:(id /* block */)reply;
- (void)handleIntentForwardingAction:(id)action inBackgroundApplicationWithBundleIdentifier:(id)identifier completionHandler:(id /* block */)handler;
- (void)_startWithDelegate:(id)delegate;
- (void)_stop;
- (void)_invalidate;
- (void)_prewarmWithRequestInfo:(id)info context:(id)context completion:(id /* block */)completion;
- (void)_activateWithRequestInfo:(id)info context:(id)context completion:(id /* block */)completion;
- (void)_deactivateForReason:(long long)reason options:(unsigned long long)options context:(id)context completion:(id /* block */)completion;
- (void)_deliverButtonEventFromContext:(id)context completion:(id /* block */)completion;
- (void)_myriadEventWithRequestInfo:(id)info context:(id)context completion:(id /* block */)completion;
@end

#endif /* AFSiriActivationListener_h */
