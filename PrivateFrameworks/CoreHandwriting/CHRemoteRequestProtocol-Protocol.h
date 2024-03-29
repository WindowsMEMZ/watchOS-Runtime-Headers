//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 445.201.0.0.0
//
#ifndef CHRemoteRequestProtocol_Protocol_h
#define CHRemoteRequestProtocol_Protocol_h
@import Foundation;

@protocol CHRemoteRequestProtocol 
/* instance methods */
- (void)handleRecognitionRequest:(id)request withReply:(id /* block */)reply;
- (void)transcriptionPathsForTokenizedResult:(id)result recognitionRequest:(id)request withReply:(id /* block */)reply;
@end

#endif /* CHRemoteRequestProtocol_Protocol_h */
