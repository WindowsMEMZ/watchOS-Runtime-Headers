//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMAssistantEditMessageHandler_h
#define IMAssistantEditMessageHandler_h
@import Foundation;

#include "IMAssistantMessageQueryHandler.h"
#include "INEditMessageIntentHandling-Protocol.h"

@class NSString;

@interface IMAssistantEditMessageHandler : IMAssistantMessageQueryHandler<INEditMessageIntentHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resolveEditedContentForEditMessage:(id)message withCompletion:(id /* block */)completion;
- (void)confirmEditMessage:(id)message completion:(id /* block */)completion;
- (void)handleEditMessage:(id)message completion:(id /* block */)completion;
- (void)sendEditedMessageItem:(id)item originalMessageItem:(id)item chat:(id)chat backwardCompatabilityText:(id)text;
- (void)chatsForMessageIdentifiers:(id)identifiers completion:(id /* block */)completion;
@end

#endif /* IMAssistantEditMessageHandler_h */
