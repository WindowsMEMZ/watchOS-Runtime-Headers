//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotIDSRelayReceiver_h
#define HMDCameraSnapshotIDSRelayReceiver_h
@import Foundation;

#include "HMDCameraSnapshotIDSRelay.h"
#include "HMDCameraIDSSessionInviterDeviceVerifier.h"
#include "HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"
#include "IDSServiceDelegate-Protocol.h"
#include "IDSSessionDelegate-Protocol.h"

@class HMFActivity, IDSSession, NSMutableData, NSString, NSUUID;
@protocol OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay<IDSServiceDelegate, IDSSessionDelegate, HMFLogging> {
  /* instance variables */
  HMFActivity *_activity;
}

@property (retain) IDSSession *idsSession;
@property (readonly, weak) NSObject<HMDCameraSnapshotIDSRelayReceiverDelegate> *delegate;
@property (readonly) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier;
@property (readonly) NSUUID *machOUUID;
@property (readonly) NSMutableData *relayData;
@property (readonly) NSMutableData *expectedByteCountData;
@property unsigned long long expectedByteCount;
@property unsigned long long receivedByteCount;
@property (retain) NSObject<OS_dispatch_source> *socketSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id logIdentifier:(id)identifier machOUUID:(id)ouuid workQueue:(id)queue sessionInviterDeviceVerifier:(id)verifier delegate:(id)delegate;
- (id)logIdentifier;
- (void)_startDataReceive;
- (void)_handleDataFromSocket:(id)socket;
- (void)dealloc;
- (void)_didReceiveData:(id)data error:(id)error;
- (void)service:(id)service account:(id)account inviteReceivedForSession:(id)session fromID:(id)id withContext:(id)context;
- (void)sessionStarted:(id)started;
- (void)sessionEnded:(id)ended withReason:(unsigned int)reason error:(id)error;
@end

#endif /* HMDCameraSnapshotIDSRelayReceiver_h */
