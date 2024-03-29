//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAudioStreamInterface_h
#define HMDAudioStreamInterface_h
@import Foundation;

#include "HMDStreamInterface.h"
#include "HMDAVCAudioStream-Protocol.h"
#include "HMDAVCAudioStreamDelegate-Protocol.h"
#include "HMDAudioStreamInterfaceDataSource-Protocol.h"
#include "HMDAudioStreamInterfaceDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSNumber, NSString;

@interface HMDAudioStreamInterface : HMDStreamInterface<HMFLogging, HMDAVCAudioStreamDelegate>

@property (readonly) NSObject<HMDAVCAudioStream> *audioStream;
@property (readonly) NSObject<HMDAudioStreamInterfaceDataSource> *dataSource;
@property BOOL streamStarted;
@property unsigned long long audioStreamSetting;
@property BOOL muted;
@property BOOL rtcpEnabled;
@property BOOL rtpTimeOutEnabled;
@property BOOL rtcpTimeOutEnabled;
@property double rtpTimeOutIntervalSec;
@property double rtcpTimeOutIntervalSec;
@property double rtcpSendIntervalSec;
@property (copy) id /* block */ stopStreamCompletionHandler;
@property (readonly, copy) NSNumber *syncSource;
@property (weak) NSObject<HMDAudioStreamInterfaceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue delegate:(id)delegate delegateQueue:(id)queue sessionHandler:(id)handler localNetworkConfig:(id)config;
- (id)initWithSessionID:(id)id workQueue:(id)queue delegate:(id)delegate delegateQueue:(id)queue sessionHandler:(id)handler audioStream:(id)stream localRTPSocket:(int)rtpsocket dataSource:(id)source;
- (void)dealloc;
- (id)_createAudioStreamWithSessionHandler:(id)handler localNetworkConfig:(id)config localRTPSocket:(int *)rtpsocket;
- (id)_createStreamWithRemoteDestinationReceiver:(id)receiver;
- (id)_createStreamWithRemoteSocketReceiver:(id)receiver;
- (int)_createLocalRTPSocketWithRemoteSender:(id)sender localNetworkConfig:(id)config;
- (id)_createLocalStreamAndRTPSocket:(int *)rtpsocket localNetworkConfig:(id)config;
- (void)startStreamWithConfig:(id)config;
- (void)_startStreamWithConfig:(id)config;
- (void)updateAudioSetting:(unsigned long long)setting;
- (void)_updateAudioSetting:(unsigned long long)setting;
- (void)updateAudioVolume:(id)volume callback:(id /* block */)callback;
- (void)stopStream;
- (void)_stopStreamWithCompletion:(id /* block */)completion;
- (void)_pauseStream;
- (void)_resumeStream;
- (void)startSynchronizationWithVideoStreamToken:(long long)token;
- (BOOL)isMuted;
- (void)_callStarted:(id)started;
- (void)_callPaused:(id)paused;
- (void)_callResumed:(id)resumed;
- (void)_callStopped:(id)stopped;
- (void)startPHASEEngineAndControllerForStream:(id)stream;
- (BOOL)isRTCPEnabled;
- (BOOL)isRTPTimeOutEnabled;
- (BOOL)isRTCPTimeOutEnabled;
- (void)stream:(id)stream didStart:(BOOL)start error:(id)error;
- (void)streamDidStop:(id)stop;
- (void)stream:(id)stream didPause:(BOOL)pause error:(id)error;
- (void)stream:(id)stream didResume:(BOOL)resume error:(id)error;
- (void)streamDidServerDie:(id)die;
- (void)streamDidRTPTimeOut:(id)out;
- (void)streamDidRTCPTimeOut:(id)out;
- (id)logIdentifier;
@end

#endif /* HMDAudioStreamInterface_h */
