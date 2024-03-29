//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraSnapshotRemoteStreamSender_h
#define HMDCameraSnapshotRemoteStreamSender_h
@import Foundation;

#include "HMDCameraSnapshotSender.h"
#include "HMDCameraGetSnapshotProtocol-Protocol.h"
#include "HMDCameraSnapshotIDSStreamInitiator.h"
#include "HMDCameraSnapshotIDSStreamInitiatorDelegate-Protocol.h"
#include "HMDCameraSnapshotLocal.h"
#include "HMDCameraSnapshotLocalDelegate-Protocol.h"
#include "HMDCameraSnapshotRemoteStreamSenderDelegate-Protocol.h"
#include "HMDCameraSnapshotSenderProtocol-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender<HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotRemoteStreamSenderDelegate> *delegate;
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue device:(id)device accessory:(id)accessory delegate:(id)delegate delegateQueue:(id)queue uniqueIdentifier:(id)identifier snapshotRequestHandler:(id)handler;
- (void)dealloc;
- (id)logIdentifier;
- (void)getSnapshot:(unsigned long long)snapshot;
- (void)sendSnapshotAtPath:(id)path;
- (void)snapShotTransferComplete;
- (void)_callDidStartCaptureImageDelegate:(id)delegate;
- (void)_callDidCompleteSendImageDelegate:(id)delegate;
- (void)snapshotLocal:(id)local didSaveSnapshotFile:(id)file error:(id)error sessionID:(id)id;
- (void)streamInitiator:(id)initiator didFailToSendFileWithError:(id)error;
@end

#endif /* HMDCameraSnapshotRemoteStreamSender_h */
