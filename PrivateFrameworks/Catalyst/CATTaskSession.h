//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.0.0.0.0
//
#ifndef CATTaskSession_h
#define CATTaskSession_h
@import Foundation;

#include "CATOperationQueue.h"
#include "CATStateMachine.h"
#include "CATTaskOperationNotificationDelegate-Protocol.h"
#include "CATTaskSession.h"
#include "CATTaskSessionDelegate-Protocol.h"
#include "CATTransport.h"
#include "CATTransportDelegate-Protocol.h"

@class NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_group;

@interface CATTaskSession : NSObject<CATTransportDelegate, CATTaskOperationNotificationDelegate> {
  /* instance variables */
  CATStateMachine *mFSM;
  CATTransport *mTransport;
  NSMutableSet *mOperations;
  NSMutableDictionary *mOperationByRemoteUUID;
  NSMutableArray *mEnqueuedMessages;
  CATTaskSession *mStrongSelf;
  NSHashTable *mOrphanedTransports;
  CATOperationQueue *mOrphanedOperationQueue;
  NSDictionary *mPreviousSessionInfo;
  NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
  NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
  BOOL mIsStarting;
  CATOperationQueue *mDelegationQueue;
}

@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) CATTransport *transport;
@property (weak, nonatomic) NSObject<CATTaskSessionDelegate> *delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)postNotificationWithName:(id)name userInfo:(id)info;
- (void)enqueueOperation:(id)operation;
- (void)localOperationDidFinish:(id)finish;
- (void)connectWithTransport:(id)transport;
- (void)connectWithTransportFromTaskSession:(id)session;
- (void)disconnect;
- (void)invalidate;
- (void)invalidateWithError:(id)error;
- (void)clientDidResumeWithMessage:(id)message;
- (void)evaluateConnectionWithResumeMessage:(id)message;
- (void)acceptConnection;
- (void)rejectConnection;
- (void)resumeCapturedTransportFromTaskSession:(id)session;
- (id)captureTransport;
- (void)savePreviousSessionInfo;
- (void)restorePreviousSessionInfo;
- (void)discardPreviousSessionInfo;
- (void)resumeTransport:(id)transport;
- (void)abandonTransport;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)error;
- (void)sessionDidInvalidate;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)error;
- (void)sendMessage:(id)message;
- (void)sendResumedMessage;
- (void)sendMessageThroughTransport:(id)transport;
- (void)enqueueMessage:(id)message;
- (void)didCompleteSendForMessage:(id)message;
- (void)delegateDidInvalidateAndFinalize;
- (void)transport:(id)transport didSendMessage:(id)message;
- (void)transport:(id)transport didFailToSendMessage:(id)message error:(id)error;
- (void)transport:(id)transport didReceiveMessage:(id)message;
- (void)transport:(id)transport didInterruptWithError:(id)error;
- (void)transportDidInvalidate:(id)invalidate;
- (void)taskOperation:(id)operation didPostNotificationWithName:(id)name userInfo:(id)info;
- (void)processSessionMessage:(id)message;
- (void)processTaskMessage:(id)message;
- (void)processStartMessage:(id)message;
- (void)operationDidIncrementProgress:(id)progress remoteUUID:(id)uuid;
- (void)operationDidFinish:(id)finish remoteUUID:(id)uuid;
- (void)processCancelMessage:(id)message;
- (void)processFetchProgressMessage:(id)message;
- (void)processNotificationMessage:(id)message;
- (id)delegatePrepareOperationWithRequest:(id)request error:(id *)error;
- (void)delegateEnqueueOperation:(id)operation;
- (BOOL)delegateShouldAcceptConnection;
- (void)delegatedidReceiveNotificationWithName:(id)name;
- (void)delegateDidConnect;
- (void)enqueueDelegateDidInterruptWithError:(id)error;
- (void)delegateDidInterruptWithError:(id)error;
- (void)delegateDidDisconnect;
- (void)delegateWillInvalidate;
- (void)delegateDidInvalidate;
@end

#endif /* CATTaskSession_h */
