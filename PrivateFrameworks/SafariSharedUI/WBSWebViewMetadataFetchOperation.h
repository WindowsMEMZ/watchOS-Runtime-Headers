//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSWebViewMetadataFetchOperation_h
#define WBSWebViewMetadataFetchOperation_h
@import Foundation;

#include "WBSSiteMetadataFetchOperation.h"
#include "WBSWebViewMetadataFetchOperationDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView, WKWebViewConfiguration;

@interface WBSWebViewMetadataFetchOperation : WBSSiteMetadataFetchOperation<WKNavigationDelegate>

@property (weak, nonatomic) NSObject<WBSWebViewMetadataFetchOperationDelegate> *delegate;
@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKWebViewConfiguration *webViewConfiguration;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } webViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (void)_setUpWebViewAndStartOffscreenFetching;
- (void)clearWebView;
- (void)start;
- (void)cancel;
- (void)startOffscreenFetching;
- (void)didCreateWebView;
- (void)willClearWebView;
- (void)didFailFetchWithError:(id)error;
- (void)didFinishNavigation;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webViewWebContentProcessDidTerminate:(id)terminate;
- (void)_webViewWebProcessDidCrash:(id)crash;
@end

#endif /* WBSWebViewMetadataFetchOperation_h */
