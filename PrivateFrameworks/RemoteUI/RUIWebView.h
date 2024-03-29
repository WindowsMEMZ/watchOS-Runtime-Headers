//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIWebView_h
#define RUIWebView_h
@import Foundation;

#include "RUIElement.h"
#include "RUITopLevelPageElement-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, WKWebView;

@interface RUIWebView : RUIElement<RUITopLevelPageElement, WKNavigationDelegate> {
  /* instance variables */
  WKWebView *_webView;
}

@property (weak, nonatomic) id delegate;
@property (copy, nonatomic) NSString *html;
@property (retain, nonatomic) NSURL *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)webView;
- (BOOL)_isScrollEnabled;
- (id)sourceURL;
- (id)scriptForWatch;
- (id)scriptForDisableMagnification;
- (id)userStyleSheet;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)webView:(id)view didFailNavigation:(id)navigation withError:(id)error;
- (void)webView:(id)view didFailProvisionalNavigation:(id)navigation withError:(id)error;
- (void)dealloc;
- (id)view;
@end

#endif /* RUIWebView_h */
