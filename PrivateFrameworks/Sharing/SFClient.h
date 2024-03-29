//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFClient_h
#define SFClient_h
@import Foundation;

#include "SFXPCInterface-Protocol.h"

@class NSMutableSet, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SFClient : NSObject<SFXPCInterface> {
  /* instance variables */
  NSMutableSet *_assertions;
  BOOL _enableEnhancedDiscovery;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  NSXPCConnection *_xpcCnx;
  NSXPCConnection *_syncXPCCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidate;
- (void)activateAssertionWithIdentifier:(id)identifier;
- (void)activityStateWithCompletion:(id /* block */)completion;
- (void)appleIDInfoWithCompletion:(id /* block */)completion;
- (void)clearXPCHelperImageCacheWithCompletion:(id /* block */)completion;
- (void)broadwayPresentCardWithCode:(id)code options:(id)options completion:(id /* block */)completion;
- (void)contactIDForEmailHash:(id)hash phoneHash:(id)hash completion:(id /* block */)completion;
- (void)displayNameForEmailHash:(id)hash phoneHash:(id)hash completion:(id /* block */)completion;
- (void)displayStringForContactIdentifier:(id)identifier deviceIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)displayStringForContactIdentifierSync:(id)sync deviceIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)ensureSyncXPCStarted;
- (void)findContact:(id)contact completion:(id /* block */)completion;
- (void)findContact:(id)contact skipIfContactBlocked:(BOOL)blocked completion:(id /* block */)completion;
- (void)getDeviceAssets:(id)assets completion:(id /* block */)completion;
- (void)getPeopleSuggestions:(id)suggestions completion:(id /* block */)completion;
- (void)hashManagerControl:(id)control completion:(id /* block */)completion;
- (void)openSetupURL:(id)url completion:(id /* block */)completion;
- (void)preventExitForLocaleReason:(id)reason;
- (void)reenableProxCardType:(unsigned char)type completion:(id /* block */)completion;
- (void)repairDevice:(id)device completion:(id /* block */)completion;
- (void)repairDevice:(id)device flags:(unsigned int)flags completion:(id /* block */)completion;
- (void)retriggerProximityPairing:(id /* block */)pairing;
- (void)retriggerProximitySetup:(id /* block */)setup;
- (void)setAudioRoutingScore:(int)score completion:(id /* block */)completion;
- (void)setupDevice:(id)device home:(id)home completion:(id /* block */)completion;
- (void)showDevicePickerWithInfo:(id)info completion:(id /* block */)completion;
- (id)syncRemoteProxyWithError:(id *)error;
- (void)testContinuityKeyboardBegin:(BOOL)begin;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)url completion:(id /* block */)completion;
- (void)triggerProximityAutoFillDetectedWithURL:(id)url completion:(id /* block */)completion;
- (void)wifiPasswordSharingAvailabilityWithCompletion:(id /* block */)completion;
- (void)startProxCardTransactionWithOptions:(unsigned long long)options completion:(id /* block */)completion;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidated;
@end

#endif /* SFClient_h */
