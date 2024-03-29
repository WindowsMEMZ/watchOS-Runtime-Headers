//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVContentKeyRecipientInternal_Protocol_h
#define AVContentKeyRecipientInternal_Protocol_h
@import Foundation;

@protocol AVContentKeyRecipientInternal <AVContentKeyRecipient>
/* instance methods */
- (int)_attachToContentKeySession:(id)session contentKeyBoss:(struct CMBaseObject *)boss failedSinceAlreadyAttachedToAnotherSession:(BOOL *)session;
- (BOOL)_attachedToExternalContentKeySession;
- (void)expire;
- (id)contentKeySession;
@end

#endif /* AVContentKeyRecipientInternal_Protocol_h */
