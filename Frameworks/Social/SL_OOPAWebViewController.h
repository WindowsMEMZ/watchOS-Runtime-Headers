//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SL_OOPAWebViewController_h
#define SL_OOPAWebViewController_h
@import Foundation;

#include "UIViewController.h"
#include "SL_OOPASpinnerTitle.h"
#include "SL_OOPAuthFlowDelegate-Protocol.h"
#include "UIWebViewDelegate-Protocol.h"
#include "UIWebViewPrivateDelegate-Protocol.h"
#include "WKNavigationDelegate-Protocol.h"

@class NSString, NSURL, UIActivityIndicatorView, UIWebView, WKWebView;
@protocol SL_OOPAWebViewControllerDelegate;

@interface SL_OOPAWebViewController : UIViewController<WKNavigationDelegate, UIWebViewDelegate, UIWebViewPrivateDelegate> {
  /* instance variables */
  WKWebView *_wkWebView;
  UIWebView *_uiWebView;
  SL_OOPASpinnerTitle *_spinnerTitleView;
  UIActivityIndicatorView *_webPageLoading;
  struct __CFURLStorageSession * _storageSession;
  BOOL _hidingWebView;
  BOOL _didLoadWebView;
  BOOL _didFinish;
}

@property (retain, nonatomic) NSString *backingTitle;
@property (retain, nonatomic) NSString *hostString;
@property (weak, nonatomic) NSObject<SL_OOPAWebViewControllerDelegate> *delegate;
@property (retain, nonatomic) NSObject<SL_OOPAuthFlowDelegate> *authFlowDelegate;
@property (copy, nonatomic) NSURL *authURL;
@property (copy, nonatomic) NSString *navBarTitle;
@property (copy, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)_updateNavBarTitle;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewDidAppear:(BOOL)appear;
- (void)_loadWebViewIfReady;
- (void)_loadWebView;
- (void)_didFinishWithSuccess:(BOOL)success response:(id)response error:(id)error;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (void)webViewDidStartLoad:(id)load;
- (void)webViewDidFinishLoad:(id)load;
- (void)_evaluateDocumentTitleForUIWebView:(id)view retryCount:(unsigned long long)count completion:(id /* block */)completion;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
- (void)webView:(id)view didFinishNavigation:(id)navigation;
- (void)_evaluateDocumentTitleForWebView:(id)view retryCount:(unsigned long long)count completion:(id /* block */)completion;
- (void)webView:(id)view didReceiveServerRedirectForProvisionalNavigation:(id)navigation;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)_cancelButtonTapped:(id)tapped;
- (void)_updateNavigationPromptWithActiveURL:(id)url;
- (void)startAnimating;
- (void)stopAnimating;
@end

#endif /* SL_OOPAWebViewController_h */
