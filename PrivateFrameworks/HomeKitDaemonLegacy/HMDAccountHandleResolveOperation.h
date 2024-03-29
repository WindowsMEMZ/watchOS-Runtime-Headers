//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAccountHandleResolveOperation_h
#define HMDAccountHandleResolveOperation_h
@import Foundation;

#include "HMFOperation.h"
#include "HMDAccountHandle.h"
#include "HMDIDSMessageContext.h"
#include "HMDIDSService-Protocol.h"
#include "HMDIDSServiceDelegate-Protocol.h"
#include "HMFLogging-Protocol.h"

@class NSMutableArray, NSString;

@interface HMDAccountHandleResolveOperation : HMFOperation<HMFLogging, HMDIDSServiceDelegate>

@property (readonly) NSObject<HMDIDSService> *service;
@property (retain, nonatomic) HMDIDSMessageContext *messageContext;
@property (readonly) NSMutableArray *resolveBlocks;
@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)timeout;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithTimeout:(double)timeout;
- (id)initWithQualityOfService:(long long)service timeout:(double)timeout;
- (id)initWithHandle:(id)handle;
- (void)main;
- (void)addResolveBlock:(id /* block */)block;
- (id)logIdentifier;
- (void)service:(id)service account:(id)account identifier:(id)identifier didSendWithSuccess:(BOOL)success error:(id)error context:(id)context;
- (void)service:(id)service account:(id)account incomingMessage:(id)message fromID:(id)id context:(id)context;
@end

#endif /* HMDAccountHandleResolveOperation_h */
