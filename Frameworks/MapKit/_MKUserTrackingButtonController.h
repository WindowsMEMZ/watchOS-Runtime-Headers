//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef _MKUserTrackingButtonController_h
#define _MKUserTrackingButtonController_h
@import Foundation;

#include "CAAnimationDelegate-Protocol.h"
#include "MKUserTrackingButtonTarget-Protocol.h"
#include "_MKUserTrackingButton.h"

@class NSString, PUICActivityIndicatorView, UIImageView;
@protocol MKUserTrackingView;

@interface _MKUserTrackingButtonController : NSObject<CAAnimationDelegate> {
  /* instance variables */
  NSObject<MKUserTrackingButtonTarget> *_target;
  _MKUserTrackingButton *_button;
  PUICActivityIndicatorView *_activityIndicatorView;
}

@property (weak, nonatomic) NSObject<MKUserTrackingView> *userTrackingView;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long buttonBehavior;
@property (nonatomic) unsigned long long controlSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithTarget:(id)target userTrackingView:(id)view imageView:(id)view button:(id)button;
- (void)_updatePreferredSymbolConfiguration;
- (double)_symbolPointSize;
- (void)dealloc;
- (id)_activityIndicatorView;
- (void)_authorizationStatusChanged:(id)changed;
- (BOOL)_shouldAnimateFromState:(long long)state toState:(long long)state;
- (id)_imageForState:(long long)state controlState:(unsigned long long)state;
- (void)_reloadState;
- (void)_updateState;
- (void)_goToNextMode:(id)mode;
- (id)_shrinkAnimation;
- (id)_expandAnimation;
- (id)_contentAnimation;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)_updateLoading;
@end

#endif /* _MKUserTrackingButtonController_h */
