//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef CAMetalDrawable_h
#define CAMetalDrawable_h
@import Foundation;

#include "CAMetalDrawable-Protocol.h"
#include "CAMetalDrawableSPI-Protocol.h"
#include "CAMetalLayer.h"
#include "MTLDrawableSPI-Protocol.h"
#include "MTLTexture-Protocol.h"

@class IOSurfaceSharedEvent, NSMutableArray, NSString;

@interface CAMetalDrawable : NSObject<CAMetalDrawable, CAMetalDrawableSPI, MTLDrawableSPI> {
  /* instance variables */
  struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate * x9; struct __IOSurface * x10; id x11; id x12; struct CGColorSpace * x13; unsigned char x14; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; } * _priv;
  NSObject<MTLTexture> *_cachedTexture;
  NSMutableArray *_presentScheduledHandlers;
}

@property (nonatomic) unsigned long long drawableID;
@property (retain, nonatomic) IOSurfaceSharedEvent *sharedEvent;
@property (nonatomic) unsigned int insertSeed;
@property (nonatomic) unsigned int updateSeed;
@property (nonatomic) BOOL didComposite;
@property (nonatomic) unsigned int presentScheduledInsertSeed;
@property (nonatomic) BOOL presentScheduledInsertSeedValid;
@property (nonatomic) unsigned int surfaceID;
@property (nonatomic) double timeAcquired;
@property (nonatomic) double timePresentCalled;
@property (nonatomic) double targetTimestamp;
@property (nonatomic) double targetSamplingTimestamp;
@property (nonatomic) double targetPresentationTimestamp;
@property (nonatomic) struct CATimingFramePacingLatency { double x0; double x1; } preferredLatency;
@property (nonatomic) BOOL needsLowLatency;
@property (nonatomic) float clientPreferredLatency;
@property (readonly) NSObject<MTLTexture> *texture;
@property (readonly) CAMetalLayer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dirtyRect;

/* instance methods */
- (void)addPresentScheduledHandler:(id /* block */)handler;
- (void)didScheduledPresent;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate * x9; struct __IOSurface * x10; id x11; id x12; struct CGColorSpace * x13; unsigned char x14; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; } *)private layer:(id)layer;
- (void)releasePrivateReferences:(void *)references;
- (void)dealloc;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x0; } x0; } x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; double x8; struct _CAMetalLayerPrivate * x9; struct __IOSurface * x10; id x11; id x12; struct CGColorSpace * x13; unsigned char x14; unsigned int x15 :1; unsigned int x16 :1; unsigned int x17 :1; unsigned int x18 :1; unsigned int x19 :1; unsigned int x20 :1; } *)priv;
- (id)cachedTexture;
- (void)present;
- (void)presentAtTime:(double)time;
- (void)presentWithOptions:(id)options;
- (id)newTextureWithResourceIndex:(unsigned long long)index;
@end

#endif /* CAMetalDrawable_h */
