//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 240.3.4.0.0
//
#ifndef LPCaptionBarView_h
#define LPCaptionBarView_h
@import Foundation;

#include "LPComponentView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "LPCaptionBarAccessoryView.h"
#include "LPCaptionBarButtonView.h"
#include "LPCaptionBarPresentationProperties.h"
#include "LPCaptionBarStyle.h"
#include "LPCollaborationFooterView.h"
#include "LPComponentMediaPlayable-Protocol.h"
#include "LPComponentView.h"
#include "LPInlineMediaPlaybackInformation.h"
#include "LPPlayButtonView.h"
#include "LPVerticalTextStackView.h"

@class NSRegularExpression, NSString;
@protocol LPComponentView<LPTextStyleable, LPComponentView<LPTextStyleable><LPSubtitleButtonContainer;

@interface LPCaptionBarView : LPComponentView<CAAnimationDelegate, LPComponentMediaPlayable> {
  /* instance variables */
  LPCaptionBarStyle *_style;
  LPCaptionBarPresentationProperties *_presentationProperties;
  LPComponentView *_leftIconView;
  LPComponentView *_rightIconView;
  LPPlayButtonView *_playButton;
  LPCaptionBarAccessoryView *_leftAccessoryView;
  LPCaptionBarAccessoryView *_rightAccessoryView;
  LPCaptionBarButtonView *_buttonView;
  LPComponentView *_leftIconBadgeView;
  LPComponentView *_rightIconBadgeView;
  LPComponentView<LPTextStyleable> *_aboveTopCaptionView;
  LPComponentView<LPTextStyleable> *_topCaptionView;
  LPComponentView<LPTextStyleable><LPSubtitleButtonContainer> *_bottomCaptionView;
  LPComponentView<LPTextStyleable> *_belowBottomCaptionView;
  LPVerticalTextStackView *_textStackView;
  LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
  BOOL _hasEverBuilt;
}

@property (nonatomic) BOOL useProgressSpinner;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } textSafeAreaInset;
@property (retain, nonatomic) LPCollaborationFooterView *collaborationFooterView;
@property (copy, nonatomic) NSRegularExpression *emphasizedTextExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHost:(id)host;
- (id)initWithHost:(id)host style:(id)style presentationProperties:(id)properties;
- (void)setPlaybackInformation:(id)information;
- (void)animateOut;
- (void)animateInWithBaseAnimation:(id)animation currentTime:(double)time;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })_layoutCaptionBarForSize:(struct CGSize { double x0; double x1; })size applyingLayout:(BOOL)layout;
- (void)setPresentationProperties:(id)properties;
- (void)_buildViewsForCaptionBarIfNeeded;
- (void)updateTextStack;
- (id)button;
- (id)subtitleButton;
- (id)playable;
- (id)primaryIconView;
@end

#endif /* LPCaptionBarView_h */
