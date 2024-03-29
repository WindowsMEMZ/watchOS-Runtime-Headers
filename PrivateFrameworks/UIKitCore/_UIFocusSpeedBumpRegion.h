//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusSpeedBumpRegion_h
#define _UIFocusSpeedBumpRegion_h
@import Foundation;

#include "_UIFocusRegion.h"

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion

@property (nonatomic) unsigned long long speedBumpEdges;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame coordinateSpace:(id)space;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame coordinateSpace:(id)space speedBumpEdges:(unsigned long long)edges;
- (id)_focusRegionWithAdjustedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame coordinateSpace:(id)space;
- (BOOL)isEqual:(id)equal;
- (BOOL)_canOccludeRegionsBelow;
- (BOOL)_canBeOccludedByRegionsAbove;
- (BOOL)_shouldCropRegionToSearchArea;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)request;
@end

#endif /* _UIFocusSpeedBumpRegion_h */
