//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef ISAnimatedImageView_h
#define ISAnimatedImageView_h
@import Foundation;

#include "UIView.h"
#include "ISAnimatedImagePlayer.h"
#include "ISAnimatedImagePlayerDestination-Protocol.h"

@class NSString, PFAnimatedImage, UIImageView;

@interface ISAnimatedImageView : UIView<ISAnimatedImagePlayerDestination>

@property (nonatomic) UIImageView *placeholderImageView;
@property (retain, nonatomic) ISAnimatedImagePlayer *player;
@property (retain, nonatomic) PFAnimatedImage *image;
@property (nonatomic) BOOL playing;
@property (nonatomic) unsigned long long displayedFrameIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAnimatedImage:(id)image;
- (id)initWithAnimatedImagePlayer:(id)player;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setAlpha:(double)alpha;
- (void)setHidden:(BOOL)hidden;
- (void)animatedImagePlayerFrameDidChange:(id)change;
- (BOOL)animatedImagePlayerIsReadyToDisplay:(id)display;
- (void)animatedImagePlayerDidBeginAnimating:(id)animating;
- (BOOL)isPlaying;
- (void)displayLayer:(id)layer;
@end

#endif /* ISAnimatedImageView_h */
