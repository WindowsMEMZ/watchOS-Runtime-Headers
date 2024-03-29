//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLURLPreviewGenerator_h
#define SLURLPreviewGenerator_h
@import Foundation;

#include "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface SLURLPreviewGenerator : NSObject<UIWebViewDelegate> {
  /* instance variables */
  id /* block */ _completion;
}

@property (retain) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_callCompletionWithPreview:(id)preview;
- (void)loadURL:(id)url completion:(id /* block */)completion;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)webViewDidFinishLoad:(id)load;
- (void)webView:(id)view didFailLoadWithError:(id)error;
- (void)uiWebView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;
@end

#endif /* SLURLPreviewGenerator_h */
