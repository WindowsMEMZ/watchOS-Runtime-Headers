//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef UVAgentControlServiceServerConnection_h
#define UVAgentControlServiceServerConnection_h
@import Foundation;

#include "UVBSConnection.h"
#include "UVAgentControlServiceProtocol-Protocol.h"
#include "UVBSServerConnection-Protocol.h"

@class NSString;

@interface UVAgentControlServiceServerConnection : UVBSConnection<UVBSServerConnection, UVAgentControlServiceProtocol>

@property (readonly) int clientPid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)activate;
- (void)createPreviewNonUIAgentWithEndpoint:(id)endpoint;
- (void)createPreviewSceneAgentWithEndpoint:(id)endpoint forSceneIdentifier:(id)identifier;
- (void)connectHostMessagePipeWithEndpoint:(id)endpoint;
- (void)connectShellMessagePipeWithEndpoint:(id)endpoint;
- (void)connectJITWithEndpoint:(id)endpoint setupPayload:(id)payload replyHandler:(id /* block */)handler;
- (void)copyURLWithURLWrapperData:(id)data reply:(id /* block */)reply;
- (void)grantExecutePermissionWithURLWrapperData:(id)data reply:(id /* block */)reply;
@end

#endif /* UVAgentControlServiceServerConnection_h */
