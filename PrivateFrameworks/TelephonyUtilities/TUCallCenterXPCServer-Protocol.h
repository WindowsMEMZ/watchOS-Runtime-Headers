//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUCallCenterXPCServer_Protocol_h
#define TUCallCenterXPCServer_Protocol_h
@import Foundation;

@protocol TUCallCenterXPCServer <TUCallServicesProxyCallActions>
/* instance methods */
- (void)requestInitialState:(id /* block */)state;
- (void)dialWithRequest:(id)request displayContext:(id)context;
- (void)dialWithRequest:(id)request reply:(id /* block */)reply;
- (void)joinConversationWithRequest:(id)request;
- (void)shouldSuppressInCallStatusBar:(BOOL)bar;
- (void)shouldAllowRingingCallStatusIndicator:(BOOL)indicator;
- (void)pullCallFromClientUsingHandoffActivityUserInfo:(id)info reply:(id /* block */)reply;
- (void)reportLocalPreviewStoppedForCallWithUniqueProxyIdentifier:(id)identifier;
- (void)saveCustomSandboxedURLGreeting:(id)urlgreeting forAccountUUID:(id)uuid;
- (void)deleteCustomGreetingForAccountUUID:(id)uuid;
- (void)customSandboxedURLGreetingForAccountUUID:(id)uuid withCompletion:(id /* block */)completion;
- (void)defaultGreeting:(id /* block */)greeting;
- (void)fetchCurrentCallUpdates:(id /* block */)updates;
- (void)screenWithRequest:(id)request;
- (void)registerAnonymousXPCEndpoint:(id)xpcendpoint;
- (void)fetchAnonymousXPCEndpoint:(id /* block */)xpcendpoint;
@end

#endif /* TUCallCenterXPCServer_Protocol_h */
