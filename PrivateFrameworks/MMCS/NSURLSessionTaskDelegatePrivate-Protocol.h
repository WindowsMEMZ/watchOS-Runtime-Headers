//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.0.0.0.0
//
#ifndef NSURLSessionTaskDelegatePrivate_Protocol_h
#define NSURLSessionTaskDelegatePrivate_Protocol_h
@import Foundation;

@protocol NSURLSessionTaskDelegatePrivate <NSURLSessionTaskDelegate>
@optional
/* instance methods */
- (void)URLSession:(id)urlsession task:(id)task _schemeUpgraded:(id)upgraded completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task _willSendRequestForEstablishedConnection:(id)connection completionHandler:(id /* block */)handler;
- (void)URLSession:(id)urlsession task:(id)task _isWaitingForConnectionWithError:(id)error;
- (void)URLSession:(id)urlsession task:(id)task _isWaitingForConnectionWithReason:(long long)reason;
- (void)URLSession:(id)urlsession _taskIsWaitingForConnection:(id)connection;
- (void)URLSession:(id)urlsession task:(id)task _conditionalRequirementsChanged:(BOOL)changed;
- (void)URLSession:(id)urlsession task:(id)task _didReceiveInformationalResponse:(id)response;
- (void)URLSession:(id)urlsession task:(id)task _alternatePathAvailable:(int)available;
@end

#endif /* NSURLSessionTaskDelegatePrivate_Protocol_h */
