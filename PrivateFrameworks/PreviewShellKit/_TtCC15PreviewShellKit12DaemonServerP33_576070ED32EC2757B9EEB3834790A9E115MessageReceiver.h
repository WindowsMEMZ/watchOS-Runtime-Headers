//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 21.20.7.0.0
//
#ifndef _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver_h
#define _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver_h
@import Foundation;

#include "UVDaemonServiceProtocol-Protocol.h"

@interface PreviewShellKit.DaemonServer.(MessageReceiver in _576070ED32EC2757B9EEB3834790A9E1) : NSObject<UVDaemonServiceProtocol> { // (Swift)
  /* instance variables */
   connection;
   responder;
}

/* instance methods */
- (void)sendPreviewServiceMessage:(id)message replyHandler:(id /* block */)handler;
- (void)copyURLToAgentDescriptorPayload:(id)payload usingData:(id)data replyHandler:(id /* block */)handler;
- (void)grantExecutePermissionToAgentDescriptorPayload:(id)payload usingData:(id)data replyHandler:(id /* block */)handler;
- (id)init;
@end

#endif /* _TtCC15PreviewShellKit12DaemonServerP33_576070ED32EC2757B9EEB3834790A9E115MessageReceiver_h */
