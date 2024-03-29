//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WebInspector_h
#define WebInspector_h
@import Foundation;

#include "WebInspectorFrontend.h"
#include "WebView.h"

@interface WebInspector : NSObject {
  /* instance variables */
  WebView *_inspectedWebView;
  WebInspectorFrontend *_frontend;
}

@property (readonly, nonatomic) BOOL open;

/* instance methods */
- (id)initWithInspectedWebView:(id)view;
- (void)dealloc;
- (void)inspectedWebViewClosed;
- (void)showWindow;
- (void)show:(id)show;
- (void)showConsole:(id)console;
- (BOOL)isDebuggingJavaScript;
- (void)toggleDebuggingJavaScript:(id)script;
- (void)startDebuggingJavaScript:(id)script;
- (void)stopDebuggingJavaScript:(id)script;
- (BOOL)isProfilingJavaScript;
- (void)toggleProfilingJavaScript:(id)script;
- (void)startProfilingJavaScript:(id)script;
- (void)stopProfilingJavaScript:(id)script;
- (BOOL)isJavaScriptProfilingEnabled;
- (void)setJavaScriptProfilingEnabled:(BOOL)enabled;
- (BOOL)isTimelineProfilingEnabled;
- (void)setTimelineProfilingEnabled:(BOOL)enabled;
- (BOOL)isOpen;
- (void)close:(id)close;
- (void)attach:(id)attach;
- (void)detach:(id)detach;
- (void)evaluateInFrontend:(id)frontend script:(id)script;
- (void)setFrontend:(id)frontend;
- (void)releaseFrontend;
@end

#endif /* WebInspector_h */
