//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTUVShellService_h
#define DTUVShellService_h
@import Foundation;

#include "DTXService.h"

@class NSMutableArray;
@protocol DTUVService, OS_dispatch_queue;

@interface DTUVShellService : DTXService {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_messageQueue;
  NSObject<DTUVService> *_service;
  NSMutableArray *_queuedServiceMessages;
  id /* block */ _serviceMessageHandler;
}

/* instance methods */
- (id)createExternalService:(id /* block */)service error:(id *)error;
- (id)initWithChannel:(id)channel;
- (void)_bindServiceCancelationToChannelCancelation;
- (void)_activateService;
- (void)_replyToQueuedMessages:(id)messages;
- (void)messageReceived:(id)received;
- (void)sendMessage:(id)message;
- (id)_makeServiceMessageFrom:(id)from error:(id *)error;
- (id /* block */)_makeServiceReplyHandlerFrom:(id)from;
- (id)_makeDTXMessageFrom:(id)from;
- (id /* block */)_makeDTXReplyHandlerFrom:(id)from;
@end

#endif /* DTUVShellService_h */
