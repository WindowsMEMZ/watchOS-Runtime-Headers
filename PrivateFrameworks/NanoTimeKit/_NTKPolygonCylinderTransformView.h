//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _NTKPolygonCylinderTransformView_h
#define _NTKPolygonCylinderTransformView_h
@import Foundation;

#include "UIView.h"

@class NSMutableDictionary;

@interface _NTKPolygonCylinderTransformView : UIView {
  /* instance variables */
  double _interiorAngle;
  double _exteriorAngle;
  NSMutableDictionary *_faceViews;
}

@property (readonly, nonatomic) unsigned long long numberOfFaces;
@property (readonly, nonatomic) unsigned long long numberOfVisibleFaces;
@property (readonly, nonatomic) double faceDistanceToCenter;
@property (readonly, nonatomic) double rotationAnglePerFace;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithNumberOfFaces:(unsigned long long)faces;
- (void)setView:(id)view forFaceAtIndex:(unsigned long long)index;
- (id)viewForFaceAtIndex:(unsigned long long)index;
- (void)enumerateFaceViewsWithBlock:(id /* block */)block;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)layoutSubviews;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_transformForFaceIndex:(unsigned long long)index;
@end

#endif /* _NTKPolygonCylinderTransformView_h */
