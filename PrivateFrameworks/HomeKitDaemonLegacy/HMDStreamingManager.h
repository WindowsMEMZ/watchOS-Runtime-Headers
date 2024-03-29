//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDStreamingManager_h
#define HMDStreamingManager_h
@import Foundation;

#include "HMFObject.h"
#include "AVCRemoteVideoClientDelegate-Protocol.h"
#include "HMDAudioStreamInterface.h"
#include "HMDAudioStreamInterfaceDelegate-Protocol.h"
#include "HMDCameraStreamSessionID.h"
#include "HMDCameraStreamSnapshotHandler.h"
#include "HMDStreamingManagerDelegate-Protocol.h"
#include "HMDVideoStreamInterface.h"
#include "HMDVideoStreamInterfaceDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class AVCRemoteVideoClient, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface HMDStreamingManager : HMFObject<HMDVideoStreamInterfaceDelegate, HMDAudioStreamInterfaceDelegate, AVCRemoteVideoClientDelegate, HMFLogging>

@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) NSObject<HMDStreamingManagerDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler;
@property (copy) NSNumber *slotIdentifier;
@property (copy) NSNumber *aspectRatio;
@property (retain) AVCRemoteVideoClient *avcRemoteVideo;
@property (readonly) unsigned long long audioStreamSetting;
@property (readonly) HMDVideoStreamInterface *videoStreamInterface;
@property (readonly) HMDAudioStreamInterface *audioStreamInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id streamSnapshotHandler:(id)handler workQueue:(id)queue delegate:(id)delegate delegateQueue:(id)queue localVideoNetworkConfig:(id)config localAudioNetworkConfig:(id)config sessionHandler:(id)handler;
- (void)dealloc;
- (id)logIdentifier;
- (void)startStreamWithVideoConfig:(id)config audioConfig:(id)config;
- (void)_startStreamWithVideoConfig:(id)config audioConfig:(id)config;
- (void)updateReconfigurationMode:(BOOL)mode;
- (void)updateStreamConfiguration:(id)configuration;
- (void)_stopStream;
- (void)updateAudioSetting:(unsigned long long)setting;
- (void)updateAudioVolume:(id)volume callback:(id /* block */)callback;
- (void)_callStreamStarted:(id)started;
- (void)_callReceivedFirstFrame;
- (void)_callRelayStarted;
- (void)_callStreamStoppedWithError:(id)error;
- (void)_callNetworkImproved;
- (void)_callNetworkDeteriorated;
- (void)_callConfigurationUpdated;
- (void)audioStream:(id)stream didStart:(id)start;
- (void)audioStream:(id)stream didPause:(id)pause;
- (void)audioStream:(id)stream didResume:(id)resume;
- (void)audioStream:(id)stream didStop:(id)stop;
- (void)videoStream:(id)stream didStart:(id)start;
- (void)videoStream:(id)stream didStop:(id)stop;
- (void)videoStreamDidNetworkImprove:(id)improve;
- (void)videoStreamDidNetworkDeteriorate:(id)deteriorate;
- (void)videoStreamDidUpdateConfiguration:(id)configuration;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)frame;
- (void)remoteVideoClient:(id)client remoteVideoAttributesDidChange:(id)change;
- (void)remoteVideoClientDidReceiveLastFrame:(id)frame;
- (void)remoteVideoServerDidDie:(id)die;
@end

#endif /* HMDStreamingManager_h */
