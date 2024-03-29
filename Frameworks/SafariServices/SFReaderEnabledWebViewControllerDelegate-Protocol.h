//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFReaderEnabledWebViewControllerDelegate_Protocol_h
#define SFReaderEnabledWebViewControllerDelegate_Protocol_h
@import Foundation;

@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
/* instance methods */
- (void)webViewControllerDidDetermineReaderAvailability:(id)availability dueTo:(long long)to;
- (void)webViewController:(id)controller didClickLinkInReaderWithRequest:(id)request;
- (void)createReaderWebViewForWebViewController:(id)controller;
@optional
/* instance methods */
- (void)webViewControllerReaderDidBecomeReady:(id)ready;
@end

#endif /* SFReaderEnabledWebViewControllerDelegate_Protocol_h */
