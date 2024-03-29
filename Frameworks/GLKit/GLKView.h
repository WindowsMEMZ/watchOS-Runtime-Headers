//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 126.0.0.0.0
//
#ifndef GLKView_h
#define GLKView_h
@import Foundation;

#include "UIView.h"
#include "GLKViewDelegate-Protocol.h"
#include "NSCoding-Protocol.h"

@class EAGLContext, NSMutableDictionary, UIImage;

@interface GLKView : UIView<NSCoding>

@property (nonatomic) BOOL inDraw;
@property (retain, nonatomic) NSMutableDictionary *drawableProperties;
@property (nonatomic) BOOL shouldDeleteFramebuffer;
@property (nonatomic) unsigned int resolveFramebuffer;
@property (nonatomic) unsigned int resolveColorRenderbuffer;
@property (nonatomic) unsigned int multisampleFramebuffer;
@property (nonatomic) unsigned int multisampleColorRenderbuffer;
@property (nonatomic) unsigned int depthRenderbuffer;
@property (nonatomic) unsigned int stencilRenderbuffer;
@property (nonatomic) unsigned int depthStencilRenderbuffer;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } viewBounds;
@property (nonatomic) double viewContentScaleFactor;
@property (nonatomic) undefined * drawRectIMP;
@property (nonatomic) NSObject<GLKViewDelegate> *delegate;
@property (retain, nonatomic) EAGLContext *context;
@property (readonly, nonatomic) long long drawableWidth;
@property (readonly, nonatomic) long long drawableHeight;
@property (nonatomic) int drawableColorFormat;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) int drawableStencilFormat;
@property (nonatomic) int drawableMultisample;
@property (readonly) UIImage *snapshot;
@property (nonatomic) BOOL enableSetNeedsDisplay;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (void)_initCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)dealloc;
- (void)_createFramebuffer;
- (void)deleteDrawable;
- (void)_deleteFramebuffer;
- (void)_setFramebuffer:(BOOL *)framebuffer;
- (void)_resolveAndDiscard;
- (BOOL)_presentFramebuffer;
- (void)_display:(BOOL)_display;
- (void)bindDrawable;
- (void)displayLayer:(id)layer;
- (BOOL)_canDrawContent;
- (BOOL)_controlsOwnScaleFactor;
- (void)display;
- (void)setContentScaleFactor:(double)factor;
- (void)layoutSubviews;
@end

#endif /* GLKView_h */
