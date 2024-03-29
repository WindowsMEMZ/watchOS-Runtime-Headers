//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIComplexBoundingPath_h
#define _UIComplexBoundingPath_h
@import Foundation;

#include "_UIBoundingPath.h"
#include "_UIBoundingPathBitmap.h"

@interface _UIComplexBoundingPath : _UIBoundingPath {
  /* instance variables */
  double _scale;
  long long _orientation;
  _UIBoundingPathBitmap *_bitmap;
}

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithCoordinateSpace:(id)space orientation:(long long)orientation scale:(double)scale boundingPathBitmap:(id)bitmap;
- (id)initWithRectangularCoordinateSpace:(id)space orientation:(long long)orientation scale:(double)scale;
- (id)boundingPathForCoordinateSpace:(id)space;
- (id)boundingPathForCoordinateSpace:(id)space withCornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })radii orientation:(long long)orientation scale:(double)scale;
- (BOOL)_validateBitmap:(id)bitmap withOrientation:(long long)orientation scale:(double)scale forCoordinateSpace:(id)space;
- (BOOL)validateForCoordinateSpace;
- (void)setCoordinateSpace:(id)space;
- (BOOL)isNonRectangular;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })rect onPortraitEdges:(unsigned long long)edges performCompleteTest:(BOOL)test;
- (struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect { struct _UIIntegralPoint { long long x0; long long x1; } x0; struct _UIIntegralSize { long long x0; long long x1; } x1; })rect onPortraitEdges:(unsigned long long)edges performCompleteTest:(BOOL)test;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect byInsettingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect onEdges:(unsigned long long)edges withOptions:(unsigned long long)options;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect portraitAspectRatio:(double)ratio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_largestInscribedRectInBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withCenter:(struct CGPoint { double x0; double x1; })center aspectRatio:(double)ratio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)path inPortaitCorner:(unsigned long long)corner fromPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii { long long x0; long long x1; long long x2; long long x3; })radii;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedInCorner:(unsigned long long)corner ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withSize:(struct CGSize { double x0; double x1; })size cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })radii minimumPadding:(double)padding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)path againstPortraitEdge:(unsigned long long)edge fromPortraitPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii { long long x0; long long x1; long long x2; long long x3; })radii;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectTuckedAgainstEdge:(unsigned long long)edge ofBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withSize:(double)size cornerRadii:(struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })radii minimumPadding:(double)padding;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)description;
- (id)_imageRepresentation;
@end

#endif /* _UIComplexBoundingPath_h */
