//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIWebViewInternal_h
#define UIWebViewInternal_h
@import Foundation;

#include "UICheckeredPatternView.h"
#include "UIScrollView.h"
#include "UIWebBrowserView.h"
#include "UIWebPDFViewHandler.h"
#include "UIWebViewWebViewDelegate.h"

@class NSURLRequest;
@protocol UIWebViewDelegate;

@interface UIWebViewInternal : NSObject {
  /* instance variables */
  UIScrollView *scroller;
  UIWebBrowserView *browserView;
  UICheckeredPatternView *checkeredPatternView;
  NSObject<UIWebViewDelegate> *delegate;
  unsigned int x :1 scalesPageToFit;
  unsigned int x :1 isLoading;
  unsigned int x :1 hasOverriddenOrientationChangeEventHandling;
  unsigned int x :1 drawsCheckeredPattern;
  unsigned int x :1 selectionEnabled;
  unsigned int x :1 drawInWebThread;
  unsigned int x :1 inRotation;
  unsigned int x :1 didRotateEnclosingScrollView;
  unsigned int x :1 safeAreaShouldAffectObscuredInsets;
  NSURLRequest *request;
  long long clickedAlertButtonIndex;
  UIWebViewWebViewDelegate *webViewDelegate;
  UIWebPDFViewHandler *pdfHandler;
}

@end

#endif /* UIWebViewInternal_h */
