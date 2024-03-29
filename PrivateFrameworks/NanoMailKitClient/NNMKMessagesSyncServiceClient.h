//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKMessagesSyncServiceClient_h
#define NNMKMessagesSyncServiceClient_h
@import Foundation;

#include "NNMKSyncServiceEndpoint.h"

@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint

@property (weak, nonatomic) NSObject<NNMKMessagesSyncServiceClientDelegate> *delegate;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)updateMessagesStatus:(id)status;
- (id)deleteMessages:(id)messages;
- (id)moveMessages:(id)messages;
- (void)warnMessagesFilteredOut:(id)out;
- (void)requestCompactMessages:(id)messages;
- (id)sendMessage:(id)message;
- (id)sendAttachmentAtURL:(id)url forComposedMessageId:(id)id;
- (id)updateMailboxSelection:(id)selection;
- (void)successfullySentProtobufWithIDSIdentifier:(id)idsidentifier;
- (void)failedSendingProtobufWithIDSIdentifier:(id)idsidentifier errorCode:(long long)code;
- (void)connectivityChanged;
- (void)readProtobufData:(id)data type:(unsigned long long)type;
@end

#endif /* NNMKMessagesSyncServiceClient_h */
