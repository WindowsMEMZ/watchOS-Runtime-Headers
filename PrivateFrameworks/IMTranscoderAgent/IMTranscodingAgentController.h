//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTranscodingAgentController_h
#define IMTranscodingAgentController_h
@import Foundation;

@class NSArray;
@protocol OS_dispatch_queue;

@interface IMTranscodingAgentController : NSObject {
  /* instance variables */
  NSArray *_transcoders;
  NSArray *_fallbackTranscoders;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_previewGenerationQueue;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)_registerTranscoders;
- (id)init;
- (id)_findTranscoderForUTI:(id)uti;
- (BOOL)shouldProcessFileTransfer:(id)transfer utiType:(id)type transcoderUserInfo:(id)info target:(long long)target allowUnfilteredUTIs:(id)utis fileSizeLimit:(unsigned long long)limit commonCapabilities:(id)capabilities;
- (void)transcodeFileTransferContents:(id)contents utiType:(id)type isSticker:(BOOL)sticker allowUnfilteredUTIs:(id)utis target:(long long)target sizes:(id)sizes commonCapabilities:(id)capabilities maxDimension:(unsigned long long)dimension transcoderUserInfo:(id)info fallback:(BOOL)fallback representations:(long long)representations isLQMEnabled:(BOOL)lqmenabled completionBlock:(id /* block */)block;
- (void)transcodeFileTransferData:(id)data balloonBundleID:(id)id attachments:(id)attachments fallBack:(BOOL)back completionBlock:(id /* block */)block;
- (void)generateSafeRender:(id)render constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)generateSnapshotForMessageGUID:(id)guid payloadURL:(id)url balloonBundleID:(id)id senderContext:(id)context completionBlock:(id /* block */)block;
- (void)generatePreview:(id)preview previewURL:(id)url senderContext:(id)context balloonBundleID:(id)id constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)generatePreviewMetadata:(id)metadata destinationURL:(id)url senderContext:(id)context constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })constraints completionBlock:(id /* block */)block;
- (void)decodeiMessageAppPayload:(id)payload senderContext:(id)context bundleID:(id)id completionBlock:(id /* block */)block;
- (void)transcribeAudioForAudioTransferURL:(id)url withCompletion:(id /* block */)completion;
@end

#endif /* IMTranscodingAgentController_h */
