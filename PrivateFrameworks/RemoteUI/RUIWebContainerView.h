//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.3.2.0.0
//
#ifndef RUIWebContainerView_h
#define RUIWebContainerView_h
@import Foundation;

#include "UIView.h"
#include "RUIWebContainerViewDelegate-Protocol.h"
#include "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, UIWebView;

@interface RUIWebContainerView : UIView<UIWebViewDelegate> {
  /* instance variables */
  BOOL _reallyHighlighted;
  NSURL *_baseURL;
  struct CGSize { double width; double height; } _size;
}

@property (readonly, nonatomic) UIWebView *webView;
@property (nonatomic) BOOL highlighted;
@property (weak, nonatomic) NSObject<RUIWebContainerViewDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContent:(id)content baseURL:(id)url;
- (void)updateContent:(id)content;
- (void)updateContent:(id)content baseURL:(id)url;
- (void)setUserStyleSheet:(id)sheet;
- (void)layoutSubviews;
- (void)_setHighlightedNow;
- (BOOL)isHighlighted;
- (double)heightForWidth:(double)width;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)_jsBridgeURLWithPath:(id)path;
- (void)_addContentChangeObservingScript;
- (void)webViewDidFinishLoad:(id)load;
- (BOOL)_handleJavascriptBridgeRequest:(id)request;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (BOOL)uiWebView:(id)view previewIsAllowedForPosition:(struct CGPoint { double x0; double x1; })position;
@end

#endif /* RUIWebContainerView_h */
