//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCameraPowerAssertionHandler_h
#define HMDCameraPowerAssertionHandler_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraPowerAssertionHandler : HMFObject<HMFLogging>

@property (readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned int powerAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedHandler;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (void)registerRemoteRequestHandler:(id)handler forSessionID:(id)id;
- (void)deregisterRemoteRequestHandler:(id)handler;
@end

#endif /* HMDCameraPowerAssertionHandler_h */
