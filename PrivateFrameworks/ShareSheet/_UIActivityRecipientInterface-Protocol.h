//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef _UIActivityRecipientInterface_Protocol_h
#define _UIActivityRecipientInterface_Protocol_h
@import Foundation;

@protocol _UIActivityRecipientInterface <NSObject>
/* instance methods */
- (void)requestMessagesRecipientInfoForSessionID:(id)id completionHandler:(id /* block */)handler;
- (void)requestRecipientsForSessionID:(id)id completionHandler:(id /* block */)handler;
@end

#endif /* _UIActivityRecipientInterface_Protocol_h */
