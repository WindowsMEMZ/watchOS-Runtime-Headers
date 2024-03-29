//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 40.0.3.0.0
//
#ifndef PKPhysicsGrid_h
#define PKPhysicsGrid_h
@import Foundation;

#include "PKQuadTree.h"

@protocol struct shared_ptr<PKCGrid> { struct PKCGrid * x0; struct __shared_weak_count * x1; }, {shared_ptr<PKCGrid>="__ptr_"^{PKCGrid}"__cntrl_"^{__shared_weak_count}};

@interface PKPhysicsGrid : NSObject {
  /* instance variables */
  struct shared_ptr<PKCGrid> { struct PKCGrid *__ptr_; struct __shared_weak_count *__cntrl_; } grid;
  PKQuadTree *quadTree;
}

@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (nonatomic) struct shared_ptr<PKCGrid> { struct PKCGrid * x0; struct __shared_weak_count * x1; } gridPtr;

/* class methods */
+ (id)gridFromOccupancyArray:(const char *)array bytePitch:(int)pitch width:(int)width height:(int)height;
+ (id)gridFromRGBAU8PixelData:(const char *)data imageWidth:(int)width imageHeight:(int)height alphaThreshold:(float)threshold accuracy:(float)accuracy;
+ (id)vectorGridFromRGBAU8PixelData:(const char *)data imageWidth:(int)width imageHeight:(int)height accuracy:(float)accuracy;

/* instance methods */
- (BOOL)isGridRegionOccupied:(int)occupied y:(int)y width:(int)width height:(int)height;
- (unsigned char)gridDataAtX:(int)x y:(int)y z:(int)z;
- (id)physicsBodyFromSmoothedOutline:(double)outline size:(struct CGSize { double x0; double x1; })size;
- (struct shared_ptr<PKPath> { struct PKPath * x0; struct __shared_weak_count * x1; })pathFromOutlineWithSmoothingThreshold:(double)threshold bounds:(struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; })bounds;
- (id)physicsBodyFromLVS0:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lvs0;
@end

#endif /* PKPhysicsGrid_h */
