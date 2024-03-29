//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDModernTransportMessageContext_h
#define HMDModernTransportMessageContext_h
@import Foundation;

#include "HMDDateProvider-Protocol.h"
#include "HMDModernTransportMessageContextOptions.h"
#include "HMDNetworkActivityWrapper.h"
#include "HMDNetworkActivityWrapperFactory-Protocol.h"
#include "HMDRemoteMessage.h"
#include "HMDTimerProvider-Protocol.h"
#include "HMFTimerDelegate-Protocol.h"
#include "HMMLogEventSubmitting-Protocol.h"

@class HMFMessageDestination, HMFTimer, NSMapTable, NSMutableSet, NSSet, NSString, NSUUID;

@interface HMDModernTransportMessageContext : NSObject<HMFTimerDelegate>

@property (copy) id /* block */ completionHandler;
@property (readonly) NSObject<HMDDateProvider> *dateProvider;
@property (readonly) NSObject<HMDTimerProvider> *timerProvider;
@property (readonly) NSObject<HMDNetworkActivityWrapperFactory> *activityFactory;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (nonatomic) BOOL didTimeout;
@property (nonatomic) BOOL didFallback;
@property (readonly, nonatomic) NSMapTable *inProgressTransportToStartTimeMap;
@property (retain) HMFTimer *responseTimer;
@property (copy) id /* block */ responseCompletionBlock;
@property (retain) HMFTimer *fallbackTimer;
@property (copy) id /* block */ fallbackCompletionBlock;
@property double requestStartTime;
@property (readonly) HMDRemoteMessage *message;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) HMFMessageDestination *destination;
@property (readonly, nonatomic) HMDModernTransportMessageContextOptions *options;
@property (readonly, nonatomic) double timeout;
@property (readonly, nonatomic) BOOL expectsResponse;
@property (readonly, copy, nonatomic) NSSet *remainingTransports;
@property (readonly, copy, nonatomic) NSSet *inProgressTransports;
@property (readonly, nonatomic) BOOL didSucceedSending;
@property (readonly, nonatomic) unsigned long long successfulResponseCount;
@property (nonatomic) BOOL didNotifyDeviceReachability;
@property (readonly, nonatomic) HMDNetworkActivityWrapper *messageNetworkActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithMessage:(id)message options:(id)options completionHandler:(id /* block */)handler dateProvider:(id)provider timerProvider:(id)provider activityFactory:(id)factory logEventSubmitter:(id)submitter;
- (id)initWithMessage:(id)message options:(id)options completionHandler:(id /* block */)handler dateProvider:(id)provider timerProvider:(id)provider;
- (void)startSendingOverTransport:(id)transport;
- (void)completeSendingOverTransport:(id)transport withError:(id)error;
- (void)receivedResponseOverTransport:(id)transport withError:(id)error;
- (id)preparedMessageWithTimeout:(double)timeout;
- (double)timeoutRemaining;
- (void)startResponseTimerWithTimeInterval:(double)interval queue:(id)queue completionHandler:(id /* block */)handler;
- (void)startTransportFallbackTimerWithTimeInterval:(double)interval queue:(id)queue completionHandler:(id /* block */)handler;
- (void)done;
- (void)timerDidFire:(id)fire;
@end

#endif /* HMDModernTransportMessageContext_h */
