//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _MSMessageComposeExtensionProtocol_Protocol_h
#define _MSMessageComposeExtensionProtocol_Protocol_h
@import Foundation;

@protocol _MSMessageComposeExtensionProtocol <NSObject>
/* instance methods */
- (void)_becomeActiveWithConversationState:(id)state presentationState:(id)state;
- (void)_resignActive;
- (void)_canSendMessage:(id)message conversationState:(id)state associatedText:(id)text completion:(id /* block */)completion;
- (void)_requestContentSizeThatFits:(id)fits presentationStyle:(id)style completionHandler:(id /* block */)handler;
- (void)_conversationDidChangeWithConversationState:(id)state;
- (void)_presentationWillChangeToPresentationState:(id)state;
- (void)_presentationDidChangeToPresentationState:(id)state;
- (void)_didUpdateMessage:(id)message conversationState:(id)state;
- (void)_didReceiveMessage:(id)message conversationState:(id)state;
- (void)_didStartSendingMessage:(id)message conversationState:(id)state;
- (void)_didCancelSendingMessage:(id)message conversationState:(id)state;
- (void)_requestSnapshotThatFits:(id)fits completion:(id /* block */)completion;
- (void)_requestSnapshotWithCompletion:(id /* block */)completion;
- (void)_hostDidBeginDeferredTeardown;
- (void)beginDisablingUserInteraction;
- (void)endDisablingUserInteraction;
- (void)_requestStickerExtensionMetadataDictionary:(id /* block */)dictionary;
- (void)_requestPresentationWithStickerType:(id)type identifier:(id)identifier;
- (void)_handleTextInputPayload:(id)payload withPayloadID:(id)id completion:(id /* block */)completion;
- (void)_prepareForPresentationWithCompletionHandler:(id /* block */)handler;
- (void)_didRemoveAssetArchiveWithIdentifier:(id)identifier;
- (void)_volumeButtonPressed:(BOOL)pressed;
- (void)_setPluginIdentifierToShow:(id)show completion:(id /* block */)completion;
- (void)_addStickerToStoreWithRepresentations:(id)representations completionHandler:(id /* block */)handler;
- (void)_addStickerToStoreWithRepresentations:(id)representations completionWithStickerIDs:(id /* block */)ids;
- (void)_addStickerToStoreWithRepresentations:(id)representations sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect completion:(id /* block */)completion;
- (void)_addStickerToStoreWithRepresentations:(id)representations sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect effect:(long long)effect completion:(id /* block */)completion;
- (void)_addStickerAnimationDidFinishWithCompletion:(id /* block */)completion;
- (void)_didRemoveStickerPreview;
- (void)_prepareForAddStickerFromSubjectLift;
- (void)_animatedStickerCreationProgressChanged:(id)changed progress:(double)progress;
- (void)_setHostBundleID:(id)id;
@end

#endif /* _MSMessageComposeExtensionProtocol_Protocol_h */
