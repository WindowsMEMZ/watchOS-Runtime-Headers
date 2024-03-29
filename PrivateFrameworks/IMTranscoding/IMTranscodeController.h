//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTranscodeController_h
#define IMTranscodeController_h
@import Foundation;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface IMTranscodeController : NSObject {
  /* instance variables */
  NSObject<OS_xpc_object> *_connection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_disconnected;
- (BOOL)_connect;
- (void)_insertSandboxExtensionIntoXPCMessage:(id)xpcmessage withKey:(id)key forFileURL:(id)url readOnly:(BOOL)only;
- (void)generateSafeRender:(id)render completionBlock:(id /* block */)block;
- (void)generateSafeRender:(id)render constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)_generateSafeRender:(id)render constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints retries:(int)retries completionBlock:(id /* block */)block;
- (void)_transcodeFileTransferContents:(id)contents utiType:(id)type isSticker:(BOOL)sticker allowUnfilteredUTIs:(id)utis target:(long long)target sizes:(id)sizes commonCapabilities:(id)capabilities maxDimension:(unsigned long long)dimension transcoderUserInfo:(id)info representations:(long long)representations fallBack:(BOOL)back retries:(int)retries isLQMEnabled:(BOOL)lqmenabled completionBlock:(id /* block */)block;
- (void)transcodeFileTransferContents:(id)contents utiType:(id)type isSticker:(BOOL)sticker allowUnfilteredUTIs:(id)utis target:(long long)target sizes:(id)sizes commonCapabilities:(id)capabilities maxDimension:(unsigned long long)dimension transcoderUserInfo:(id)info representations:(long long)representations isLQMEnabled:(BOOL)lqmenabled completionBlock:(id /* block */)block;
- (void)transcodeFallbackFileTransferContents:(id)contents utiType:(id)type allowUnfilteredUTIs:(id)utis target:(long long)target sizes:(id)sizes commonCapabilities:(id)capabilities maxDimension:(unsigned long long)dimension transcoderUserInfo:(id)info representations:(long long)representations isLQMEnabled:(BOOL)lqmenabled completionBlock:(id /* block */)block;
- (void)_transcodeFileTransferPayloadData:(id)data balloonBundleID:(id)id attachments:(id)attachments retries:(unsigned long long)retries fallBack:(BOOL)back completionBlock:(id /* block */)block;
- (void)transcodeFallbackFileTransferPayloadData:(id)data balloonBundleID:(id)id attachments:(id)attachments completionBlock:(id /* block */)block;
- (void)transcodeLocalTransferPayloadData:(id)data balloonBundleID:(id)id completionBlock:(id /* block */)block;
- (void)generateSnapshotForMessageGUID:(id)guid payloadURL:(id)url balloonBundleID:(id)id senderContext:(id)context completionBlock:(id /* block */)block;
- (void)generatePreview:(id)preview previewURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)generatePreview:(id)preview previewURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints balloonBundleID:(id)id completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)generatePreview:(id)preview previewURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)_generatePreview:(id)preview previewURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints retries:(unsigned long long)retries balloonBundleID:(id)id completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)generateMetadata:(id)metadata metadataURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)generateMetadata:(id)metadata metadataURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)_generateMetadata:(id)metadata metadataURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints retries:(unsigned long long)retries completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)decodeiMessageAppPayload:(id)payload senderContext:(id)context bundleID:(id)id completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)_decodeiMessageAppPayload:(id)payload senderContext:(id)context bundleID:(id)id retries:(unsigned long long)retries completionBlock:(id /* block */)block blockUntilReply:(BOOL)reply;
- (void)transcribeAudioForAudioTransferURL:(id)url withCompletion:(id /* block */)completion;
@end

#endif /* IMTranscodeController_h */
