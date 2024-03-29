//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebRotatingAlertController_h
#define UIWebRotatingAlertController_h
@import Foundation;

#include "_UIRotatingAlertController.h"
#include "UIWebDocumentView.h"

@interface UIWebRotatingAlertController : _UIRotatingAlertController {
  /* instance variables */
  BOOL _wasDeferringCallbacks;
  UIWebDocumentView *_webBrowserView;
}

/* instance methods */
- (id)initWithUIWebDocumentView:(id)view;
- (void)_disableWebView;
- (void)_enableWebView;
- (void)dealloc;
- (void)doneWithSheet;
- (BOOL)presentSheet;
@end

#endif /* UIWebRotatingAlertController_h */
