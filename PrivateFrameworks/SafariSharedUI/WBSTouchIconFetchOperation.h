//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSTouchIconFetchOperation_h
#define WBSTouchIconFetchOperation_h
@import Foundation;

#include "WBSWebViewMetadataFetchOperation.h"
#include "WBSSiteMetadataRequest.h"
#include "WBSTouchIconObserver-Protocol.h"

@class NSArray, NSSet, NSString, NSTimer, _WKRemoteObjectInterface;
@protocol OS_os_activity;

@interface WBSTouchIconFetchOperation : WBSWebViewMetadataFetchOperation<WBSTouchIconObserver> {
  /* instance variables */
  _WKRemoteObjectInterface *_touchIconObserverInterface;
  NSTimer *_loadingTimeoutTimer;
  NSArray *_pendingTouchIconURLs;
  NSSet *_touchIconURLs;
  long long _state;
  BOOL _allowFetchingOverCellularNetwork;
  NSObject<OS_os_activity> *_activity;
}

@property (readonly, @dynamic, nonatomic) WBSSiteMetadataRequest *request;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequest:(id)request;
- (id)initWithRequest:(id)request completionHandler:(id /* block */)handler;
- (id)initWithRequest:(id)request allowFetchingOverCellularNetwork:(BOOL)network completionHandler:(id /* block */)handler;
- (BOOL)isEqual:(id)equal;
- (id)webViewConfiguration;
- (void)resetState;
- (void)loadRequest;
- (void)didCompleteWithResult:(id)result;
- (void)_setUpRemoteObjectProxies;
- (void)_tearDownRemoteObjectProxies;
- (void)startOffscreenFetching;
- (void)clearWebView;
- (void)_scheduleTimeoutWithTimeInterval:(double)interval;
- (void)_downloadFirstValidImageWithURLs:(id)urls failureHandler:(id /* block */)handler;
- (void)_downloadPendingTouchIconURLs;
- (void)didFailFetchWithError:(id)error;
- (void)didCreateWebView;
- (void)willClearWebView;
- (void)didFetchTouchIconURLs:(id)urls andFaviconURLs:(id)urls forURL:(id)url;
- (void)webView:(id)view decidePolicyForNavigationAction:(id)action decisionHandler:(id /* block */)handler;
@end

#endif /* WBSTouchIconFetchOperation_h */
