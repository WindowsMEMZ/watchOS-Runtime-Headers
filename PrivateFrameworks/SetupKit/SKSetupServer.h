//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef SKSetupServer_h
#define SKSetupServer_h
@import Foundation;

#include "SKSetupBase.h"
#include "CUActivatable-Protocol.h"
#include "CUAuthenticatableServer-Protocol.h"

@class CBAdvertiser, CBServer, CUNANPublisher, NSString;
@protocol OS_dispatch_queue;

@interface SKSetupServer : SKSetupBase<CUActivatable, CUAuthenticatableServer> {
  /* instance variables */
  unsigned short _bleAdvertisePSM;
  CBAdvertiser *_bleAdvertiser;
  CBServer *_bleServer;
  BOOL _completed;
  NSString *_nanEndpointID;
  CUNANPublisher *_nanPublisher;
}

@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)activateWithCompletion:(id /* block */)completion;
- (void)_activateWithCompletion:(id /* block */)completion;
- (void)_invalidate;
- (void)_invalidated;
- (void)reset;
- (void)_update;
- (void)_prepareSteps;
- (void)_prepareStepsOSRecovery;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_nanPublisherEnsureStarted;
- (void)_nanPublisherEnsureStopped;
- (void)_wifiKeepAliveEnsureStarted;
- (void)_wifiKeepAliveEnsureStopped;
- (void)_handleAcceptBLEConnection:(id)bleconnection;
- (void)_handleAcceptNANData:(id)nandata endpoint:(id)endpoint;
- (void)_handleAcceptCommon:(id)common;
@end

#endif /* SKSetupServer_h */
