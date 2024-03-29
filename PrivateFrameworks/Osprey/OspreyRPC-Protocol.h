//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.5.1.0.0
//
#ifndef OspreyRPC_Protocol_h
#define OspreyRPC_Protocol_h
@import Foundation;

@protocol OspreyRPC <NSObject>
/* instance methods */
- (void)unaryRequestWithMethodName:(id)name requestData:(id)data requestBuilder:(id /* block */)builder responseHandler:(id /* block */)handler;
- (void)serverStreamingRequestWithMethodName:(id)name requestData:(id)data requestBuilder:(id /* block */)builder streamingResponseHandler:(id /* block */)handler completion:(id /* block */)completion;
- (id)clientStreamingRequestWithMethodName:(id)name requestBuilder:(id /* block */)builder responseHandler:(id /* block */)handler;
- (id)bidirectionalStreamingRequestWithMethodName:(id)name requestBuilder:(id /* block */)builder streamingResponseHandler:(id /* block */)handler completion:(id /* block */)completion;
@end

#endif /* OspreyRPC_Protocol_h */
