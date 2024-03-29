//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef C2RequestDelegate_Protocol_h
#define C2RequestDelegate_Protocol_h
@import Foundation;

@protocol C2RequestDelegate <NSObject>
/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task willPerformHTTPRedirection:(id)httpredirection newRequest:(id)request completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task needNewBodyStream:(id /* block */)stream;
- (void)URLSession:(id)urlsession task:(id)task didSendBodyData:(long long)data totalBytesSent:(long long)sent totalBytesExpectedToSend:(long long)send;
- (void)URLSession:(id)urlsession task:(id)task didCompleteWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession _taskIsWaitingForConnection:(id)connection;
- (void)URLSession:(id)urlsession task:(id)task _conditionalRequirementsChanged:(BOOL)changed;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveResponse:(id)response completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession dataTask:(id)task didReceiveData:(id)data;
- (void)URLSession:(id)urlsession _willRetryBackgroundDataTask:(id)task withError:(id)error;
@end

#endif /* C2RequestDelegate_Protocol_h */
