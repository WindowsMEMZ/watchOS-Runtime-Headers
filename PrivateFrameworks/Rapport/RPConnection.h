//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 524.1.0.0.0
//
#ifndef RPConnection_h
#define RPConnection_h
@import Foundation;

#include "RPAuthenticatable-Protocol.h"
#include "RPCompanionLinkDevice.h"
#include "RPIdentity.h"

@class CUBLEConnection, CUBluetoothScalablePipe, CUBonjourDevice, CUHomeKitManager, CUNetLinkManager, CUPairingSession, CUPairingStream, CUTCPConnection, NSArray, NSData, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, NSUUID, RPIdentityDaemon;
@protocol CUReadWriteRequestable, OS_dispatch_queue, OS_dispatch_source;

@interface RPConnection : NSObject<RPAuthenticatable> {
  /* instance variables */
  BOOL _activateCalled;
  unsigned long long _activatedTicks;
  NSString *_initiator;
  NSString *_selfAddrString;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  NSObject<OS_dispatch_source> *_idleTimer;
  NSObject<OS_dispatch_source> *_probeTimer;
  BOOL _retryFired;
  unsigned long long _retryTicks;
  NSObject<OS_dispatch_source> *_retryTimer;
  NSObject<OS_dispatch_source> *_startTimer;
  int _internalState;
  BOOL _stepDone;
  NSError *_stepError;
  unsigned long long _highPriorityAuthTagLength;
  CUPairingStream *_highPriorityStream;
  NSString *_homeKitIdentityIdentifier;
  NSData *_homeKitIdentitySignature;
  unsigned long long _mainAuthTagLength;
  CUPairingStream *_mainStream;
  int _pairSetupAuthType;
  CUPairingSession *_pairSetupSession;
  BOOL _pairVerifyCompleted;
  BOOL _pairVerifyFailed;
  int _pairVerifyIdentityType;
  CUPairingSession *_pairVerifySession;
  BOOL _pairVerifyUsedIdentity;
  struct { struct { unsigned char frameType; unsigned char x[3] frameLen; } header; BOOL receivingHeader; BOOL readRequested; } _readFrame;
  struct { struct { unsigned char frameType; unsigned char x[3] frameLen; } header; BOOL receivingHeader; BOOL readRequested; } _readFrameBTPipeHighPriority;
  NSObject<CUReadWriteRequestable> *_requestable;
  NSMutableDictionary *_requests;
  int _retryCount;
  NSMutableArray *_sendArray;
  BOOL _showPasswordCalled;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
  unsigned int _xidLast;
  unsigned long long _receivedFrameCountCurrent;
  unsigned long long _receivedFrameCountLast;
}

@property (retain, nonatomic) NSMutableArray *proxyDevices;
@property (retain, nonatomic) CUBluetoothScalablePipe *btPipeHighPriority;
@property (copy, nonatomic) NSString *appID;
@property (readonly, copy, nonatomic) NSDictionary *appInfoPeer;
@property (copy, nonatomic) NSDictionary *appInfoSelf;
@property (nonatomic) long long bleClientUseCase;
@property (retain, nonatomic) CUBLEConnection *bleConnection;
@property (copy, nonatomic) NSUUID *blePeerIdentifier;
@property (retain, nonatomic) CUBonjourDevice *bonjourPeerDevice;
@property (retain, nonatomic) CUBluetoothScalablePipe *btPipe;
@property (retain, nonatomic) id client;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) BOOL clientMode;
@property (copy, nonatomic) id /* block */ configurePairingHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (copy, nonatomic) NSString *destinationString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL flowControlReadEnabled;
@property (copy, nonatomic) id /* block */ flowControlWriteChangedHandler;
@property (readonly, nonatomic) int flowControlWriteState;
@property (retain, nonatomic) RPIdentity *forcedPeerIdentity;
@property (retain, nonatomic) RPIdentity *forcedSelfIdentity;
@property (retain, nonatomic) CUHomeKitManager *homeKitManager;
@property (copy, nonatomic) id /* block */ homeKitUserIdentifierHandler;
@property (copy, nonatomic) NSString *identifierOverride;
@property (retain, nonatomic) RPIdentityDaemon *identityDaemon;
@property (retain, nonatomic) RPIdentity *identityResolved;
@property (readonly, nonatomic) RPIdentity *identityVerified;
@property (nonatomic) BOOL invalidationHandled;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) int keepAliveSeconds;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) int linkType;
@property (retain, nonatomic) RPCompanionLinkDevice *localDeviceInfo;
@property (retain, nonatomic) CUNetLinkManager *netLinkManager;
@property (readonly, nonatomic) int pairVerifyAuthType;
@property (copy, nonatomic) id /* block */ pairVerifyCompletion;
@property (readonly, nonatomic) NSString *peerAddrString;
@property (readonly, nonatomic) RPCompanionLinkDevice *peerDeviceInfo;
@property (readonly, nonatomic) NSString *peerHomeKitUserIdentifier;
@property (copy, nonatomic) NSString *peerIdentifier;
@property (copy, nonatomic) id /* block */ peerUpdatedHandler;
@property (nonatomic) BOOL preAuthEnabled;
@property (nonatomic) int preferredIdentityType;
@property (nonatomic) BOOL present;
@property (copy, nonatomic) id /* block */ proxyDeviceUpdateHandler;
@property (copy, nonatomic) NSData *pskData;
@property (copy, nonatomic) id /* block */ readErrorHandler;
@property (copy, nonatomic) id /* block */ receivedEventHandler;
@property (copy, nonatomic) id /* block */ receivedRequestHandler;
@property (copy, nonatomic) NSMutableArray *receivedMessages;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) id /* block */ sessionStartHandler;
@property (nonatomic) int state;
@property (copy, nonatomic) id /* block */ stateChangedHandler;
@property (readonly, nonatomic) unsigned long long statusFlags;
@property (retain, nonatomic) CUTCPConnection *tcpConnection;
@property (nonatomic) unsigned int trafficFlags;
@property (retain, nonatomic) NSArray *allowedMACAddresses;
@property (copy, nonatomic) NSData *pairingInfo;
@property (retain, nonatomic) NSArray *pairSetupACL;
@property (nonatomic) unsigned int pairSetupFlags;
@property (nonatomic) unsigned int pairVerifyFlags;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly, nonatomic) int passwordTypeActual;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ showPasswordHandler;
@property (copy, nonatomic) id /* block */ hidePasswordHandler;
@property (copy, nonatomic) id /* block */ promptForPasswordHandler;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)description;
- (id)descriptionWithLevel:(int)level;
- (id)_getCurrentProcessName;
- (void)activate;
- (void)invalidate;
- (void)invalidateWithError:(id)error;
- (void)_invalidateWithError:(id)error;
- (void)_invalidate;
- (void)_invalidateCore:(id)core;
- (void)_invalidated;
- (void)homeKitIdentityUpdated;
- (void)_logConnectionInvalidatedWithError:(id)error;
- (void)_pairSetupInvalidate;
- (void)_pairVerifyInvalidate;
- (id)_pairVerifySignData:(id)data flags:(unsigned int)flags error:(id *)error;
- (BOOL)_pairVerifyVerifySignature:(id)signature data:(id)data flags:(unsigned int)flags error:(id *)error;
- (void)_pskPrepare:(BOOL)prepare;
- (void)_run;
- (void)sessionStopped:(id)stopped;
- (void)tryPassword:(id)password;
- (void)_updateExternalState;
- (void)_updateLinkInfo;
- (void)_clientRun;
- (void)_clientConnectStart;
- (void)_clientConnectStartBLE;
- (void)_clientConnectStartBTPipe;
- (void)_clientConnectStartTCP;
- (void)_clientConnectCompleted:(id)completed;
- (BOOL)_clientError:(id)error;
- (void)_clientNetworkError:(id)error label:(const char *)label;
- (void)_clientPreAuthStart;
- (void)_clientPreAuthResponseWithData:(id)data;
- (void)_clientPairSetupStart;
- (void)_clientPairSetupWithData:(id)data;
- (void)_clientPairSetupPromptWithFlags:(unsigned int)flags throttleSeconds:(int)seconds handler:(id /* block */)handler;
- (void)_clientPairSetupCompleted:(id)completed;
- (void)_clientPairVerifyStart;
- (void)_clientPairVerifyWithData:(id)data;
- (void)_clientPairVerifyCompleted:(id)completed;
- (void)_clientStartSession;
- (void)_clientRetryStart;
- (void)_clientRetryFired;
- (void)_clientStarted;
- (void)_serverRun;
- (void)_serverAccept;
- (void)_serverAcceptBLE;
- (void)_serverAcceptBTPipe;
- (void)_serverAcceptTCP;
- (void)_serverError:(id)error;
- (void)_serverNetworkError:(id)error label:(const char *)label;
- (void)_serverPreAuthRequestWithData:(id)data;
- (BOOL)_serverPairingAllowed;
- (void)_serverPairSetupWithData:(id)data start:(BOOL)start;
- (void)_serverPairSetupCompleted:(id)completed;
- (void)_serverPairVerifyWithData:(id)data start:(BOOL)start;
- (void)_serverPairVerifyCompleted:(id)completed;
- (void)_serverStarted;
- (void)_processSends;
- (void)sendEncryptedEventID:(id)id data:(id)data xid:(unsigned int)xid options:(id)options completion:(id /* block */)completion;
- (void)sendEncryptedEventID:(id)id event:(id)event options:(id)options completion:(id /* block */)completion;
- (void)_sendEncryptedEventID:(id)id data:(id)data xid:(unsigned int)xid options:(id)options completion:(id /* block */)completion;
- (void)sendEncryptedRequestID:(id)id request:(id)request xpcID:(unsigned int)id options:(id)options responseHandler:(id /* block */)handler;
- (void)_sendEncryptedRequestID:(id)id request:(id)request xpcID:(unsigned int)id options:(id)options sendEntry:(id)entry responseHandler:(id /* block */)handler;
- (void)_sendEncryptedResponse:(id)response error:(id)error xid:(id)xid requestID:(id)id highPriority:(BOOL)priority isChatty:(BOOL)chatty;
- (void)_sendFrameType:(unsigned char)type body:(id)body;
- (void)_sendFrameType:(unsigned char)type unencryptedObject:(id)object;
- (void)sendReachabilityProbe:(const char *)probe;
- (void)processSendsUsingConnection:(id)connection;
- (void)_receiveStart:(id)start readFrame:(struct { struct { unsigned char x0; unsigned char x1[3] } x0; BOOL x1; BOOL x2; } *)frame requestable:(id)requestable;
- (void)_receiveCompletion:(id)completion readFrame:(struct { struct { unsigned char x0; unsigned char x1[3] } x0; BOOL x1; BOOL x2; } *)frame requestable:(id)requestable;
- (void)_receivedHeader:(const struct { unsigned char x0; unsigned char x1[3] } *)header body:(id)body ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_receivedHeader:(const struct { unsigned char x0; unsigned char x1[3] } *)header encryptedObjectData:(id)data ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_receivedObject:(id)object ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_receivedEvent:(id)event ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_receivedRequest:(id)request ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_receivedResponse:(id)response ctx:(struct { unsigned long long x0; BOOL x1; } *)ctx;
- (void)_abortRequestsWithError:(id)error;
- (void)_timeoutForSendEntry:(id)entry;
- (void)_timeoutForXID:(id)xid;
- (id)_identityProofDataClient;
- (id)_identityProofDataServer;
- (void)_identityProofsAdd:(id)add update:(BOOL)update;
- (void)_identityProofsVerify:(id)verify;
- (void)_identityProofsVerifyHomeKitSignature:(id)signature identifier:(id)identifier;
- (void)_idleTimerStart:(unsigned int)start repeat:(unsigned int)repeat;
- (void)_idleTimerFired;
- (void)_receivedSystemInfo:(id)info xid:(id)xid;
- (id)_systeminfo;
- (id)_allowedMACAddressesForMCFeature:(id)mcfeature;
@end

#endif /* RPConnection_h */
