//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2005.6.1.3.2
//
#ifndef VCTransportSessionLegacy_h
#define VCTransportSessionLegacy_h
@import Foundation;

#include "VCTransportSession.h"
#include "GKInterfaceListener.h"
#include "InterfaceListenerDelegate-Protocol.h"
#include "LoopbackSocketTunnel.h"
#include "LoopbackSocketTunnelDelegate-Protocol.h"
#include "TCPTunnelClient.h"
#include "VCConnectionManagerDelegate-Protocol.h"
#include "VCConnectionProtocol-Protocol.h"
#include "VCTransport.h"
#include "VCTransportSessionLegacyDelegate-Protocol.h"
#include "VideoConferenceRealTimeChannel-Protocol.h"

@class NSCondition, NSData, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_source;

@interface VCTransportSessionLegacy : VCTransportSession<LoopbackSocketTunnelDelegate, InterfaceListenerDelegate, VCConnectionManagerDelegate> {
  /* instance variables */
  unsigned char _localU8Version;
  long long relayState;
  float callerPreEmptiveTimeoutInSecs;
  unsigned int _connectionSetupRTTEstimate;
  BOOL requestedTimeoutRelay;
  BOOL _didReceivePiggybackBlob;
  BOOL _useLoopback;
  BOOL _isRemoteOSPreLion;
  BOOL _isStarted;
  NSObject<OS_dispatch_source> *relaySetupTimer;
  VCTransport *transport;
  unsigned int _callID;
  struct __SecIdentity * _identity;
  TCPTunnelClient *_tcpTunnelClient;
  NSObject<VideoConferenceRealTimeChannel> *rtChannel;
  LoopbackSocketTunnel *_tunnel;
  NSObject<VCConnectionProtocol> *_loopbackConnection;
  NSCondition *_connectionDataTimeoutCondVar;
  GKInterfaceListener *_interfaceListener;
}

@property (nonatomic) int pendingRelayCount;
@property (nonatomic) BOOL initialSecondaryRelaySetupDone;
@property (retain, nonatomic) NSDictionary *localRelayUpdate;
@property (retain, nonatomic) NSDictionary *remoteRelayUpdate;
@property (retain, nonatomic) NSMutableDictionary *remoteRelayRequestResponse;
@property (retain, nonatomic) NSData *remoteRelayConnectionData;
@property (retain) NSMutableDictionary *localRelayRequestResponse;
@property (retain) NSData *localConnectionData;
@property (retain) NSData *localRelayConnectionData;
@property BOOL allowsRelay;
@property BOOL isCaller;
@property unsigned int remoteCallID;
@property NSObject<VCTransportSessionLegacyDelegate> *delegate;
@property (copy) NSString *localParticipantID;
@property (copy) NSString *remoteParticipantID;
@property (copy) NSString *sessionID;
@property (retain) NSData *remoteConnectionData;
@property int NATType;
@property int operatingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCallID:(unsigned int)id reportingAgent:(id)agent;
- (void)dealloc;
- (void)start;
- (BOOL)startConnectionWithBlob:(id)blob useRelay:(BOOL)relay isInitialRelay:(BOOL)relay error:(id *)error;
- (void)stop;
- (void)setForceRelay;
- (void)processRelayRequestResponse:(id)response didOriginateRequest:(BOOL)request;
- (void)processRelayUpdate:(id)update didOriginateRequest:(BOOL)request;
- (void)createSecondaryRelayDispatchTimer:(float)timer callID:(unsigned int)id callerRequired:(BOOL)required;
- (void)destroySecondaryRelayDispatchTimer;
- (void)setupPendingSecondaryRelayWithNewPrimary:(id)primary;
- (void)notifyDelegateToCancelRelay;
- (void)setupSecondaryRelayForCall:(unsigned int)call callerRequired:(BOOL)required;
- (void)setupInitialSecondaryRelayWithCallbackRelayFlag:(BOOL)flag callID:(unsigned int)id connectionId:(int)id;
- (void)initiateRelayRequest;
- (void)handleConnectionSetupDataChangeMessageDelivered;
- (BOOL)isHandoverSupported;
- (void)triggerInterfaceChange;
- (void)networkStateDidChange;
- (void)handleNewCandidates:(id)candidates version:(unsigned short)version;
- (void)processRemoteIPChange:(char *)ipchange dataLength:(int)length remoteCandidateVersion:(unsigned short)version;
- (void)processRemoteIPChange:(id)ipchange;
- (void)connectionResultCallback:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT * x23; int x24; } *)callback didReceiveICEPacket:(BOOL)icepacket didUseRelay:(BOOL)relay secretKey:(id)key skeResult:(int)result;
- (BOOL)handleExchangedKey:(id)key result:(int)result;
- (void)primaryConnectionChanged:(id)changed oldPrimaryConnection:(id)connection activeConnection:(id)connection;
- (void)connectionCallback:(id)callback isInitialConnection:(BOOL)connection;
- (void)didEnableDuplication:(BOOL)duplication activeConnection:(id)connection;
- (void)didUpdatePreferredInterfaceForDuplication:(unsigned char)duplication notifyPeer:(BOOL)peer enableDuplication:(BOOL)duplication isMediaUnrecoverableSignal:(BOOL)signal;
- (void)updateParticipantGenerationCounter:(unsigned char)counter;
- (void)handleRATChanged:(id)ratchanged;
- (void)didMediaQualityDegrade:(BOOL)degrade;
- (BOOL)createTCPTunnelForParticipantID:(id)id relayDictionary:(id)dictionary didOriginateRequest:(BOOL)request relayType:(unsigned char)type error:(id *)error;
- (void)deleteTCPTunnel;
- (void)loopbackSocketTunnel:(id)tunnel receivedData:(id)data from:(struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } *)from;
- (void)resetLoopback;
- (void)setupLoopbackWithConnectionType:(unsigned int)type;
- (void)receivedRealTimeData:(id)data fromParticipantID:(id)id;
- (void)stopLoopback;
- (void)stopLoopbackProc:(id)proc;
- (id)createInitiateRelayDictionary;
- (id)createInitiateRelayDictionaryForCall:(unsigned int)call primaryConnection:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT * x23; int x24; } *)connection;
- (id)createRelayUpdateDictionary:(id)dictionary;
- (BOOL)getConnectionSetupData:(id *)data withOptions:(id)options error:(id *)error;
- (void)getConnectionDataUsingRelay:(BOOL)relay isInitialRelay:(BOOL)relay nonCellularCandidateTimeout:(double)timeout queue:(id)queue completionHandler:(id /* block */)handler;
- (id)connectionData:(char *)data connectionDataSizeInBytes:(int)bytes shouldUseRelay:(BOOL)relay;
- (id)connectionDataUsingRelay:(BOOL)relay isInitialRelay:(BOOL)relay nonCellularCandidateTimeout:(double)timeout error:(id *)error;
- (int)generateConnectionData:(char * *)data forCallID:(unsigned int)id connectionDataSize:(int *)size nonCellularCandidateTimeout:(double)timeout;
- (void)setupTransport;
- (void)resetICETimeoutToLongTimeout;
- (double)iceTimeoutInSeconds:(BOOL)seconds;
- (struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; })IPPortForPrimaryConnectionOnLocalInterface:(BOOL)interface;
- (unsigned int)connectionTypeForConnectionResult:(struct tagCONNRESULT { unsigned int x0; int x1; int x2; unsigned int x3; int x4; int x5; unsigned short x6; unsigned short x7; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x8; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x9; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x10; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x11; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x12; struct tagIPPORT { int x0; char x1[16] union { unsigned int x0; unsigned char x1[16] } x2; unsigned short x3; } x13; unsigned int x14; int x15; int x16; int x17; int x18; unsigned short x19; int x20; int x21; int x22; struct tagCONNRESULT * x23; int x24; } *)result;
- (BOOL)isConnectedAndAllowAdditionalConnection;
- (int)detailedErrorCode;
- (void)reportNetworkConditionsDegraded;
- (void)handleMediaReceivedOverPeerToPeerLinkWithConnectionId:(int)id;
- (void)handleMediaReceivedOverRelayLinkWithConnectionId:(int)id;
- (void)setIdentity:(struct __SecIdentity *)identity;
- (void)startActiveProbingWithOptions:(id)options;
- (void)stopActiveProbingWithOptions:(id)options;
- (void)queryProbingResultsWithOptions:(id)options;
- (void)flushLinkProbingStatusWithOptions:(id)options;
- (unsigned int)connectionSetupRTTEstimate;
- (BOOL)isRemoteOSPreLion;
@end

#endif /* VCTransportSessionLegacy_h */
