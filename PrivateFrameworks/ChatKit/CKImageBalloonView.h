//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKImageBalloonView_h
#define CKImageBalloonView_h
@import Foundation;

#include "CKObscurableBalloonView.h"
#include "CKAnimatedImage.h"
#include "CKBalloonImageView.h"
#include "CKCustomMaskDuringPrint-Protocol.h"
#include "IMAnimationTimerObserver-Protocol.h"

@class NSArray, NSString, UIImageView, UIView;

@interface CKImageBalloonView : CKObscurableBalloonView<CKCustomMaskDuringPrint, IMAnimationTimerObserver>

@property (nonatomic) BOOL suppressMask;
@property (copy, nonatomic) NSArray *frames;
@property (retain, nonatomic) UIImageView *irisBadgeView;
@property (nonatomic) unsigned long long animationFrameOffset;
@property (retain, nonatomic) CKAnimatedImage *animatedImage;
@property (retain, nonatomic) CKBalloonImageView *tailMask;
@property (retain, nonatomic) CKBalloonImageView *outlineMask;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (nonatomic) BOOL isIrisAsset;
@property (nonatomic) BOOL isMonoskiAsset;
@property (retain, nonatomic) UIView *monoskiBadgeView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)configureForMessagePart:(id)part;
- (void)configureForTranscriptPlugin:(id)plugin;
- (void)configureForComposition:(id)composition;
- (void)configureForMediaObject:(id)object previewWidth:(double)width orientation:(char)orientation;
- (void)configureForMediaObject:(id)object previewWidth:(double)width orientation:(char)orientation hasInvisibleInkEffect:(BOOL)effect;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)tapGestureRecognized:(id)recognized;
- (void)_animatedImagesStateChanged:(id)changed;
- (id)_addPauseButtonToImage:(id)image;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits textAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)insets;
- (void)prepareForDisplay;
- (id)overlayColor;
- (void)prepareForReuse;
- (void)setHasTail:(BOOL)tail;
- (void)setCanUseOpaqueMask:(BOOL)mask;
- (BOOL)needsGroupOpacity;
- (void)setImage:(id)image;
- (void)animationTimerFired:(double)fired;
- (BOOL)animationExplicitlyResumed;
- (Class)invisibleInkEffectViewClass;
- (void)attachInvisibleInkEffectView;
- (void)detachInvisibleInkEffectView;
- (id)imageForInvisibleInkEffectView;
- (void)invisibleInkEffectViewWasUncovered;
- (void)invisibleInkEffectViewWasSuspended;
- (void)invisibleInkEffectViewWasResumed;
- (void)updateAnimationTimerObserving;
- (void)addFilter:(id)filter;
- (void)clearFilters;
@end

#endif /* CKImageBalloonView_h */
