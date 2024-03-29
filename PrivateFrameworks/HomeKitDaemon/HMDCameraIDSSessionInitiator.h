//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraIDSSessionInitiator_h
#define HMDCameraIDSSessionInitiator_h
@import Foundation;

#include "HMDCameraIDSSessionHandler.h"
#include "AVCPacketRelayDelegate-Protocol.h"
#include "HMDCameraIDSSessionInitiatorDelegate-Protocol.h"
#include "HMDCameraNetworkConfig.h"
#include "HMDCameraRemoteStreamSenderProtocol-Protocol.h"
#include "HMDDevice.h"
#include "IDSSessionDelegate-Protocol.h"

@class AVCPacketRelay, HMFOSTransaction, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler<AVCPacketRelayDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol>

@property (retain) AVCPacketRelay *packetRelay;
@property (retain) HMFOSTransaction *packetRelayTransaction;
@property (weak) NSObject<HMDCameraIDSSessionInitiatorDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HMDDevice *device;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *mtu;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue device:(id)device localNetworkConfig:(id)config delegate:(id)delegate delegateQueue:(id)queue;
- (void)dealloc;
- (void)openRelaySession;
- (void)_sendInvitation;
- (void)startPacketRelayWithVideoSocket:(int)socket videoNetworkConfig:(id)config cameraVideoSSRC:(unsigned int)ssrc audioSocket:(int)socket audioNetworkConfig:(id)config cameraAudioSSRC:(unsigned int)ssrc;
- (void)_startPacketRelayWithVideoSocket:(int)socket videoNetworkConfig:(id)config cameraVideoSSRC:(unsigned int)ssrc audioSocket:(int)socket audioNetworkConfig:(id)config cameraAudioSSRC:(unsigned int)ssrc;
- (void)packetRelay:(id)relay didStart:(BOOL)start error:(id)error;
- (void)packetRelay:(id)relay didStop:(BOOL)stop error:(id)error;
- (void)session:(id)session receivedInvitationAcceptFromID:(id)id;
- (void)session:(id)session receivedInvitationDeclineFromID:(id)id;
- (void)session:(id)session receivedInvitationCancelFromID:(id)id;
- (void)sessionStarted:(id)started;
- (void)sessionEnded:(id)ended withReason:(unsigned int)reason error:(id)error;
- (void)_callSessionStarted;
- (void)_callSessionEndedWithError:(id)error;
- (id)logIdentifier;
@end

#endif /* HMDCameraIDSSessionInitiator_h */
