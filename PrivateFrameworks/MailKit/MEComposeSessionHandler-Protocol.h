//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MEComposeSessionHandler_Protocol_h
#define MEComposeSessionHandler_Protocol_h
@import Foundation;

@protocol MEComposeSessionHandler <NSObject>
/* instance methods */
- (void)mailComposeSessionDidBegin:(id)begin;
- (void)mailComposeSessionDidEnd:(id)end;
@optional
/* instance methods */
- (void)session:(id)session annotateAddressesWithCompletionHandler:(id /* block */)handler;
- (void)session:(id)session canSendMessageWithCompletionHandler:(id /* block */)handler;
- (id)additionalHeadersForSession:(id)session;
@end

#endif /* MEComposeSessionHandler_Protocol_h */
