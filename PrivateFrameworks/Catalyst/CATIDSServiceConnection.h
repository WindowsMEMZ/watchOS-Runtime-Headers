//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATIDSServiceConnection_h
#define CATIDSServiceConnection_h
@import Foundation;

#include "CATCancelable-Protocol.h"
#include "CATIDSMessageBroadcastHandler-Protocol.h"
#include "CATIDSMessageBroadcaster-Protocol.h"
#include "CATIDSServiceConnectionDataAggregator-Protocol.h"
#include "CATIDSServiceConnectionDataAggregatorDelegate-Protocol.h"
#include "CATIDSServiceConnectionDataMessageQueue-Protocol.h"
#include "CATIDSServiceConnectionDataMessageQueueDelegate-Protocol.h"
#include "CATIDSServiceConnectionDelegate-Protocol.h"
#include "CATIDSServiceConnectionMessageProcessor.h"
#include "CATIDSServiceConnectionMessageProcessorDelegate-Protocol.h"
#include "CATIDSServiceConnectionMetadata.h"
#include "CATOperationQueue.h"
#include "CATResettableTimer-Protocol.h"
#include "CATSerialOperationEnqueuer.h"

@class NSError, NSString;
@protocol CATIDSPrimitives, CATIDSSubscription, OS_dispatch_queue;

@interface CATIDSServiceConnection : NSObject<CATIDSServiceConnectionDataAggregatorDelegate, CATIDSServiceConnectionMessageProcessorDelegate, CATIDSMessageBroadcastHandler, CATIDSServiceConnectionDataMessageQueueDelegate> {
  /* instance variables */
  NSString *mDestinationAddress;
  NSString *mSourceAppleID;
  NSObject<CATIDSPrimitives> *mIDSPrimitives;
  NSObject<CATCancelable> *mAssertion;
  NSObject<CATIDSMessageBroadcaster> *mMessageBroadcaster;
  NSObject<CATIDSServiceConnectionDataMessageQueue> *mDataMessageQueue;
  NSObject<CATIDSServiceConnectionDataAggregator> *mDataAggregator;
  NSObject<OS_dispatch_queue> *mWorkQueue;
  NSObject<OS_dispatch_queue> *mDelegateQueue;
  CATOperationQueue *mSendQueue;
  CATSerialOperationEnqueuer *mControlOperationEnqueuer;
  NSObject<CATResettableTimer> *mKeepAliveTimer;
  CATIDSServiceConnectionMessageProcessor *mMessageProcessor;
  NSObject<CATIDSSubscription> *mMessageSubscription;
}

@property (nonatomic) BOOL closed;
@property (retain, nonatomic) NSError *closedError;
@property (weak, nonatomic) NSObject<CATIDSServiceConnectionDelegate> *delegate;
@property (readonly, nonatomic) CATIDSServiceConnectionMetadata *metadata;

/* class methods */
+ (id)connectionWithMetadata:(id)metadata configuration:(id)configuration IDSPrimitives:(id)idsprimitives messageBroadcaster:(id)broadcaster timerSource:(id)source dataMessageQueue:(id)queue dataAggregator:(id)aggregator assertion:(id)assertion workQueue:(id)queue delegateQueue:(id)queue destinationAddress:(id)address sourceAppleID:(id)id;
+ (id)connectionWithMetadata:(id)metadata configuration:(id)configuration capabilities:(id)capabilities IDSPrimitives:(id)idsprimitives messageBroadcaster:(id)broadcaster timerSource:(id)source assertion:(id)assertion workQueue:(id)queue delegateQueue:(id)queue destinationAddress:(id)address sourceAppleID:(id)id;
+ (id)keepAliveTimerIdentifier;
+ (id)closeContentWithError:(id)error;
+ (id)acknowledgeContent;
+ (id)keepAliveContent;

/* instance methods */
- (id)initWithMetadata:(id)metadata configuration:(id)configuration IDSPrimitives:(id)idsprimitives messageBroadcaster:(id)broadcaster timerSource:(id)source dataMessageQueue:(id)queue dataAggregator:(id)aggregator assertion:(id)assertion workQueue:(id)queue delegateQueue:(id)queue destinationAddress:(id)address sourceAppleID:(id)id;
- (void)sendData:(id)data completion:(id /* block */)completion;
- (void)close;
- (void)_sendData:(id)data completion:(id /* block */)completion;
- (void)_close;
- (void)connectionDataAggregator:(id)aggregator aggregatedData:(id)data withNumber:(unsigned long long)number;
- (void)connectionDataAggregator:(id)aggregator isMissingSequenceNumbers:(id)numbers;
- (void)connectionDataAggregatorWantsToReportSequenceNumber:(id)number;
- (void)messageProcessorWantsToAcknowledgeRemote:(id)remote;
- (void)messageProcessorWantsToExtendKeepAlive:(id)alive;
- (void)messageProcessor:(id)processor wantsToCloseWithError:(id)error;
- (void)messageProcessor:(id)processor wantsAggregation:(id)aggregation;
- (void)messageProcessor:(id)processor wantsRetransmission:(id)retransmission;
- (void)messageProcessor:(id)processor receivedExpectedSequence:(unsigned long long)sequence;
- (void)messageProcessor:(id)processor wantsToAckUpTo:(unsigned long long)to;
- (void)processMessage:(id)message senderAppleID:(id)id senderAddress:(id)address;
- (void)dataMessageQueue:(id)queue wantsToCheckRemote:(unsigned long long)remote;
- (void)dataMessageQueue:(id)queue needsToSendContents:(id)contents shouldSkipTheLine:(BOOL)line completion:(id /* block */)completion;
- (void)keepAliveTimerDidFire:(id)fire fireCount:(unsigned long long)count isFinalFire:(BOOL)fire;
- (void)sendContent:(id)content;
- (void)tearDownWithError:(id)error shouldReportToRemote:(BOOL)remote;
- (id)retransmitContentForSequenceNumbers:(id)numbers;
- (id)requestMissingDataContentWithExpectedSequenceNumber:(unsigned long long)number;
- (id)description;
- (BOOL)isClosed;
@end

#endif /* CATIDSServiceConnection_h */
