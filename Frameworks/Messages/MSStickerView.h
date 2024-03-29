//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef MSStickerView_h
#define MSStickerView_h
@import Foundation;

#include "UIView.h"
#include "IMAnimationTimerObserver-Protocol.h"
#include "MSSticker.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSError, NSString, UIImage, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol IMAnimatedImageProtocol, IMImageDataProtocol;

@interface MSStickerView : UIView<UIGestureRecognizerDelegate, IMAnimationTimerObserver>

@property (retain, nonatomic) NSError *stickerError;
@property (retain, nonatomic) UIImage *stickerImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *outlineImageView;
@property (retain, nonatomic) NSObject<IMAnimatedImageProtocol> *image;
@property (retain, nonatomic) NSObject<IMImageDataProtocol> *imageData;
@property (retain, nonatomic) NSArray *frames;
@property (nonatomic) unsigned long long initialFrameIndexForCurrentDrag;
@property (nonatomic) BOOL initialLayoutComplete;
@property (readonly, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (readonly, nonatomic) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic) BOOL animating;
@property (readonly, nonatomic) BOOL isAnimated;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL isPeeled;
@property (nonatomic) BOOL userExplicitlyUnpausedAnimation;
@property (nonatomic) double animationOffset;
@property (copy, nonatomic) id /* block */ dragPreviewLiftContainerProvider;
@property (retain, nonatomic) MSSticker *sticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)_configureStickerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame sticker:(id)sticker;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)_prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)_stickerPreviewCachePreviewDidChange:(id)change;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)_loadSticker;
- (void)clearCachedPreviewsForCurrentSticker;
- (void)_loadAnimatedStickerIfNecessary;
- (void)_updateStickerView;
- (void)_setImage:(id)image;
- (void)_swapWithOutlineImage;
- (void)_resetPeel;
- (id)accessibilityLabel;
- (void)updateAnimationTimerObserving;
- (void)prepareForSnapshotting;
- (void)didMoveToWindow;
- (void)pauseVisionKitEffect:(BOOL)effect;
- (void)_logStickerUsage;
- (void)_configureDragAndDrop;
- (BOOL)_isInsideMessagesCamera;
- (BOOL)animationExplicitlyResumed;
- (void)animationTimerFired:(double)fired;
- (void)handleTap:(id)tap;
- (void)stageStickerForce:(BOOL)force;
- (void)handleLongPress:(id)press;
- (id)representationForRole:(id)role;
- (void)addHEICImage:(id)heicimage completion:(id /* block */)completion;
- (void)addPNGImage:(id)pngimage completion:(id /* block */)completion;
- (id)_stickerSendManager;
- (void)animatedStickerCreationProgressChanged:(id)changed progress:(double)progress;
@end

#endif /* MSStickerView_h */
