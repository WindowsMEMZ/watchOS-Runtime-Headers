//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPopoverShapePathProviderTV_h
#define _UIPopoverShapePathProviderTV_h
@import Foundation;

#include "_UIPopoverShapePathProvider.h"

@interface _UIPopoverShapePathProviderTV : _UIPopoverShapePathProvider
/* instance methods */
- (id)generatePopoverPathForParameters:(struct _UIPopoverShapePathParameters { unsigned long long x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; double x3; double x4; double x5; double x6; double x7; double x8; })parameters;
- (void)_addCorner:(unsigned long long)corner startPoint:(struct CGPoint { double x0; double x1; })point endPoint:(struct CGPoint { double x0; double x1; })point cornerRadius:(double)radius toPath:(id)path;
- (void)_addCenterArrowToPath:(id)path bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds arrowOffset:(double)offset arrowHeight:(double)height arrowBase:(double)base arrowTipWidth:(double)width arrowTipHeight:(double)height;
- (void)_addBottomRightPinnedEdgeArrowToPath:(id)path bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds pinnedEdgeArrowStartPoint:(struct CGPoint { double x0; double x1; })point arrowHeight:(double)height pinnedArrowBase:(double)base arrowTipWidth:(double)width arrowTipHeight:(double)height;
- (void)_transformPath:(id)path rotation:(double)rotation flipX:(BOOL)x flipY:(BOOL)y roundToScale:(double)scale;
@end

#endif /* _UIPopoverShapePathProviderTV_h */
