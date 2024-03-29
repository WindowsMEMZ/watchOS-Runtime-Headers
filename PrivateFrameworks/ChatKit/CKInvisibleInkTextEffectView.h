//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKInvisibleInkTextEffectView_h
#define CKInvisibleInkTextEffectView_h
@import Foundation;

#include "CKInvisibleInkEffectView.h"
#include "CAAnimationDelegate-Protocol.h"
#include "CKTextBalloonView.h"

@class CALayer, NSArray, NSString, UIColor, UITextView;

@interface CKInvisibleInkTextEffectView : CKInvisibleInkEffectView<CAAnimationDelegate>

@property (weak, nonatomic) CKTextBalloonView *balloonView;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) CALayer *dustEmitterContainerLayer;
@property (retain, nonatomic) NSArray *dustEmitterLayers;
@property (nonatomic) BOOL blendingEnabled;
@property (readonly) UIColor *currentDustColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)makeDustEmitter;
- (void)layoutSubviews;
- (id)_newEmitterForCharacterRects:(id)rects lineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)_configureInvisibleInkEmitterUsingTextKit2;
- (void)_configureInvisibleInkEmitterUsingTextKit1;
- (void)didMoveToWindow;
- (void)endDrawEmitterEffects;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (void)endDustEmitterLayerFingerEffects:(id)effects;
- (void)endTouches;
- (void)moveEmittersWithTouches:(id)touches;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)moveEmittersForTouchesBegan:(id)began;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)moveEmittersForTouchesMoved:(id)moved;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)endEmittersForTouchesEnded:(id)ended;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)endEmittersForTouchesCancelled:(id)cancelled;
- (void)updateDustCellColor;
- (void)attachToBalloonView:(id)view;
- (void)detachFromBalloonView;
- (void)reset;
- (void)cullSubviewsWithVisibleBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setPaused:(BOOL)paused;
- (void)setSuspended:(BOOL)suspended;
@end

#endif /* CKInvisibleInkTextEffectView_h */
