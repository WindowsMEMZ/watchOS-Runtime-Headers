//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraIDSSessionHandler_h
#define HMDCameraIDSSessionHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMDCameraRemoteStreamProtocol-Protocol.h"
#include "HMDCameraStreamSessionID.h"
#include "HMDIDSService-Protocol.h"
#include "HMDIDSServiceDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class IDSSession, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionHandler : HMFObject<HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) NSObject<HMDIDSService> *idsStreamService;
@property (retain, nonatomic) IDSSession *idsSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithSessionID:(id)id workQueue:(id)queue;
- (void)dealloc;
- (void)startKeepAlive;
- (id)logIdentifier;
@end

#endif /* HMDCameraIDSSessionHandler_h */
