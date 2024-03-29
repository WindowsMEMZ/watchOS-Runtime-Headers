//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFSafariLaunchPlaceholderView_h
#define SFSafariLaunchPlaceholderView_h
@import Foundation;

#include "UIView.h"
#include "UINavigationBarDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UINavigationBar, UITextView, UIToolbar;

@interface SFSafariLaunchPlaceholderView : UIView<UINavigationBarDelegate> {
  /* instance variables */
  BOOL _forAuthentication;
  UIToolbar *_bottomToolbar;
  UIImageView *_browserIconView;
  id /* block */ _dismissalHandler;
  id /* block */ _openHandler;
  UITextView *_linkCaptionTextView;
  UILabel *_linkTitleLabel;
  UINavigationBar *_topNavigationBar;
  UIBarButtonItem *_dismissButton;
  UIButton *_largeButton;
}

@property (nonatomic) double topLayoutGuideInset;
@property (nonatomic) BOOL showContinueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)blankPlaceholder;
+ (id)compatibilityPlaceholderWithAppName:(id)name destinationURL:(id)url forAuthentication:(BOOL)authentication dismissalHandler:(id /* block */)handler openHandler:(id /* block */)handler;

/* instance methods */
- (long long)positionForBar:(id)bar;
- (void)updateBarTintColor:(id)color;
- (void)updateControlTintColor:(id)color;
- (void)updateDismissButtonStyle:(long long)style;
- (void)_dismissTapped:(id)tapped;
- (void)_openTapped:(id)tapped;
@end

#endif /* SFSafariLaunchPlaceholderView_h */
