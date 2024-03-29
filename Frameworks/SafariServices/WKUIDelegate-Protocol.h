//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKUIDelegate_Protocol_h
#define WKUIDelegate_Protocol_h
@import Foundation;

@protocol WKUIDelegate <NSObject>
@optional
/* instance methods */
- (id)webView:(id)view createWebViewWithConfiguration:(id)configuration forNavigationAction:(id)action windowFeatures:(id)features;
- (void)webViewDidClose:(id)close;
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame completionHandler:(id /* block */)handler;
- (void)webView:(id)view requestMediaCapturePermissionForOrigin:(id)origin initiatedByFrame:(id)frame type:(long long)type decisionHandler:(id /* block */)handler;
- (void)webView:(id)view requestDeviceOrientationAndMotionPermissionForOrigin:(id)origin initiatedByFrame:(id)frame decisionHandler:(id /* block */)handler;
- (BOOL)webView:(id)view shouldPreviewElement:(id)element;
- (id)webView:(id)view previewingViewControllerForElement:(id)element defaultActions:(id)actions;
- (void)webView:(id)view commitPreviewingViewController:(id)controller;
@end

#endif /* WKUIDelegate_Protocol_h */
