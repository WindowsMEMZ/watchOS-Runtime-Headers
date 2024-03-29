//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSyntheticClickContext_h
#define _SFSyntheticClickContext_h
@import Foundation;

@class WKNavigationAction, WKWebView;

@interface _SFSyntheticClickContext : NSObject

@property (readonly, nonatomic) WKWebView *webView;
@property (readonly, nonatomic) WKNavigationAction *navigationAction;

/* instance methods */
- (id)initWithWebView:(id)view navigationAction:(id)action;
@end

#endif /* _SFSyntheticClickContext_h */
