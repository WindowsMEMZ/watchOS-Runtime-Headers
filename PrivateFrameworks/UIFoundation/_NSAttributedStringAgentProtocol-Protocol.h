//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef _NSAttributedStringAgentProtocol_Protocol_h
#define _NSAttributedStringAgentProtocol_Protocol_h
@import Foundation;

@protocol _NSAttributedStringAgentProtocol 
/* instance methods */
- (void)startWithReply:(id /* block */)reply;
- (void)renderHTML:(id)html options:(id)options extensionTokens:(id)tokens withReply:(id /* block */)reply;
- (void)readFromData:(id)data orFileURL:(id)url options:(id)options extensionTokens:(id)tokens withReply:(id /* block */)reply;
@end

#endif /* _NSAttributedStringAgentProtocol_Protocol_h */
