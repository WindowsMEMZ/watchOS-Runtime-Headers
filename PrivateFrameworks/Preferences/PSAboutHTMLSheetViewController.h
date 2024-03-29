//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSAboutHTMLSheetViewController_h
#define PSAboutHTMLSheetViewController_h
@import Foundation;

#include "UIViewController.h"
#include "UIWebViewDelegate-Protocol.h"

@class NSString;

@interface PSAboutHTMLSheetViewController : UIViewController<UIWebViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)presentAboutSheetTitled:(id)titled HTMLContent:(id)htmlcontent fromViewController:(id)controller;

/* instance methods */
- (void)loadView;
- (void)dealloc;
- (void)viewDidBecomeVisible;
- (BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(long long)type;
- (void)donePressed;
- (void)setHTMLContent:(id)htmlcontent isFragment:(BOOL)fragment;
@end

#endif /* PSAboutHTMLSheetViewController_h */
