//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFToolbar_h
#define _SFToolbar_h
@import Foundation;

#include "UIToolbar.h"
#include "_SFBarCommon-Protocol.h"
#include "_SFBarRegistrationObserving-Protocol.h"
#include "_SFBarRegistrationToken-Protocol.h"

@class NSString, UIBlurEffect, UIView, UIVisualEffectView, _SFBarTheme;

@interface _SFToolbar : UIToolbar<_SFBarCommon, _SFBarRegistrationObserving> {
  /* instance variables */
  UIVisualEffectView *_backgroundView;
  UIBlurEffect *_customBackdropEffect;
  UIView *_separator;
}

@property (readonly, nonatomic) long long placement;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (retain, nonatomic) _SFBarTheme *theme;
@property (nonatomic) BOOL usesLegacyDarkBackdrop;
@property (weak, nonatomic) NSObject<_SFBarRegistrationToken> *barRegistration;
@property (weak, nonatomic) UIView *superviewOwningLayout;
@property (readonly, nonatomic) double baselineOffsetAdjustment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_deviceSupportsMinibars;

/* instance methods */
- (id)initWithPlacement:(long long)placement;
- (id)initWithPlacement:(long long)placement hideBackground:(BOOL)background;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)dealloc;
- (void)setItems:(id)items animated:(BOOL)animated;
- (void)_updateBackgroundViewEffects;
- (void)layoutSubviews;
- (BOOL)isMinibar;
- (void)_cancelLinkAnimations;
- (double)_contentMargin;
- (void)animateSafariIconLinkFromPoint:(struct CGPoint { double x0; double x1; })point inView:(id)view;
- (void)animateLinkImage:(struct CGImage *)image fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view toBarItem:(long long)item afterImageDisappearsBlock:(id /* block */)block afterDestinationLayerBouncesBlock:(id /* block */)block;
- (id)popoverSourceInfoForBarItem:(long long)item;
- (void)didCompleteBarRegistrationWithToken:(id)token;
- (void)didChangeArrangedBarItems:(id)items;
@end

#endif /* _SFToolbar_h */
