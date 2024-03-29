//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 267.0.0.0.0
//
#ifndef SYMessengerSyncEngine_h
#define SYMessengerSyncEngine_h
@import Foundation;

#include "SYSyncEngine.h"
#include "NMSMessageCenter.h"
#include "NMSMessageCenterDelegate-Protocol.h"
#include "SYDevice.h"

@class NSDictionary, NSMapTable, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SYMessengerSyncEngine : SYSyncEngine<NMSMessageCenterDelegate> {
  /* instance variables */
  NMSMessageCenter *_messageCenter;
  NSObject<OS_dispatch_semaphore> *_lookupLock;
  NSMapTable *_requestLookup;
  NSMapTable *_callbackLookup;
  SYDevice *_activeDevice;
  NSString *_sessionDeviceID;
}

@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithService:(id)service queue:(id)queue;
- (id)messageCenter;
- (BOOL)targetIsNearby;
- (BOOL)targetConnected;
- (BOOL)resume:(id *)resume;
- (void)suspend;
- (void)beginSession;
- (void)enqueueSyncRequest:(id)request withMessageID:(unsigned short)id priority:(long long)priority options:(id)options userContext:(id)context callback:(id /* block */)callback;
- (id)outputStreamWithMetadata:(id)metadata priority:(long long)priority options:(id)options context:(id)context error:(id *)error;
- (id)cancelMessagesReturningFailures:(id)failures;
- (id)stateForLogging;
- (id)_fileTransferHeader;
- (void)_updateMessageCenterPrefs:(id)prefs;
- (void)_suspendIncomingMessages;
- (void)_resumeIncomingMessages;
- (void)_hookupMessageHandler;
- (id)_getRequestHeader:(id)header;
- (id)_getResponseHeader:(id)header;
- (BOOL)_checkMessageHeader:(id)header messageID:(id)id;
- (void)_recordLastSeqNo:(id)no;
- (void)_handleError:(id)error forMessageID:(unsigned short)id;
- (id)_wrapMessage:(id)message ofType:(unsigned short)type userInfo:(id)info;
- (void)messageCenter:(id)center didReceiveUnknownRequest:(id)request;
- (void)messageCenter:(id)center didReceiveIncomingFileTransfer:(id)transfer;
- (void)messageCenter:(id)center didResolveIDSIdentifierForRequest:(id)request;
- (void)messageCenter:(id)center didResolveIDSIdentifier:(id)idsidentifier forResponse:(id)response;
- (void)messageCenter:(id)center didResolveIDSIdentifier:(id)idsidentifier forFileTransfer:(id)transfer;
- (void)messageCenter:(id)center didSuccessfullySendRequestWithIdentifier:(id)identifier userInfo:(id)info;
- (void)messageCenter:(id)center didSuccessfullyDeliverRequestWithIdentifier:(id)identifier userInfo:(id)info;
- (void)messageCenter:(id)center failedToSendMessageWithIdentifier:(id)identifier error:(id)error userInfo:(id)info;
- (void)messageCenter:(id)center activeDeviceChanged:(id)changed acknowledgement:(id /* block */)acknowledgement;
- (void)messageCenter:(id)center nearbyDevicesChanged:(id)changed;
- (void)messageCenter:(id)center connectedDevicesChanged:(id)changed;
@end

#endif /* SYMessengerSyncEngine_h */
