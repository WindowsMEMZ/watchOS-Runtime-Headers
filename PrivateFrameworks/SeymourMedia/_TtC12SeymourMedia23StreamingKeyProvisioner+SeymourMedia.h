//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef _TtC12SeymourMedia23StreamingKeyProvisioner_SeymourMedia_h
#define _TtC12SeymourMedia23StreamingKeyProvisioner_SeymourMedia_h
@import Foundation;

@interface SeymourMedia.StreamingKeyProvisioner (SeymourMedia) <AVContentKeySessionDelegate>
/* instance methods */
- (void)contentKeySession:(id)session didProvideContentKeyRequest:(id)request;
- (void)contentKeySession:(id)session didProvidePersistableContentKeyRequest:(id)request;
- (void)contentKeySession:(id)session didProvideRenewingContentKeyRequest:(id)request;
- (void)contentKeySession:(id)session contentKeyRequest:(id)request didFailWithError:(id)error;
- (void)contentKeySession:(id)session contentKeyRequestDidSucceed:(id)succeed;
- (BOOL)contentKeySession:(id)session shouldRetryContentKeyRequest:(id)request reason:(id)reason;
@end

#endif /* _TtC12SeymourMedia23StreamingKeyProvisioner_SeymourMedia_h */
