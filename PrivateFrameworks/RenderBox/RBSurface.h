//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.1.16.0.0
//
#ifndef RBSurface_h
#define RBSurface_h
@import Foundation;

#include "RBDisplayList.h"

@protocol {objc_ptr<RBDisplayList *>="_p"@"RBDisplayList"}, {objc_ptr<id<MTLDevice>>="_p"@"<MTLDevice>"}, {refcounted_ptr<RB::Drawable>="_p"^{Drawable}}, {refcounted_ptr<RB::Texture>="_p"^{Texture}};

@interface RBSurface : NSObject {
  /* instance variables */
  struct refcounted_ptr<RB::Drawable> { struct Drawable *_p; } _drawable;
  struct objc_ptr<id<MTLDevice>> { <MTLDevice> *_p; } _device;
  struct refcounted_ptr<RB::Texture> { struct Texture *_p; } _texture;
  void * _lastItem;
  struct Bounds { " origin; short x0; int x1; size_t x2; e x3; " x4; } _dirty;
}

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) double scale;
@property (nonatomic) int colorMode;
@property (nonatomic) BOOL clearsBackground;
@property (nonatomic) struct { float x0; float x1; float x2; float x3; } clearColor;
@property (nonatomic) BOOL opaque;
@property (retain, nonatomic) RBDisplayList *displayList;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setDisplayList:(id)list dirtyRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGImage *)copyCGImageUsingDevice:(id)device;
- (void)updateUsingDevice:(id)device;
- (void)invalidate;
- (BOOL)isOpaque;
@end

#endif /* RBSurface_h */
