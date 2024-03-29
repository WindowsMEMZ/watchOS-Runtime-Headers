//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef WebResourceLoadDelegate_Protocol_h
#define WebResourceLoadDelegate_Protocol_h
@import Foundation;

@protocol WebResourceLoadDelegate <NSObject>
@optional
/* instance methods */
- (id)webView:(id)view identifierForInitialRequest:(id)request fromDataSource:(id)source;
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didReceiveResponse:(id)response fromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didReceiveContentLength:(long long)length fromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)source;
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)source;
- (void)webView:(id)view plugInFailedWithError:(id)error dataSource:(id)source;
@end

#endif /* WebResourceLoadDelegate_Protocol_h */
