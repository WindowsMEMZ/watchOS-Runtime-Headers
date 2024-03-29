//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef VKARWalkingArrivalStoreFront_h
#define VKARWalkingArrivalStoreFront_h
@import Foundation;

@protocol struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x0; } x0; struct Unit<geo::DegreeUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; }, struct Matrix<double, 3, 1> { double x0[3] }, struct Mercator3<double> { double x0[3] }, struct OrientedBox<double, 2U, double, double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x0[3] } x0; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x0[3] } x0; double x1; } x1; } x0; struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; } x1; }, struct Unit<geo::MeterUnitDescription, double> { double x0; }, {Matrix<float, 2, 1>="_e"[2f]}, {OrientedBox<double, 2U, double, double>="_transform"{RigidTransform<double, double>="_translation"{Matrix<double, 3, 1>="_e"[3d]}"_rotation"{Quaternion<double>="_imaginary"{Matrix<double, 3, 1>="_e"[3d]}"_scalar"d}}"_bounds"{Box<double, 2>="_minimum"{Matrix<double, 2, 1>="_e"[2d]}"_maximum"{Matrix<double, 2, 1>="_e"[2d]}}}, {Unit<geo::MeterUnitDescription, double>="_value"d};

@interface VKARWalkingArrivalStoreFront : NSObject {
  /* instance variables */
  struct Unit<geo::MeterUnitDescription, double> { double _value; } _undulation;
  struct Matrix<float, 2, 1> { float x[2] _e; } _dimensionsInMeters;
}

@property (readonly, nonatomic) struct OrientedBox<double, 2U, double, double> { struct RigidTransform<double, double> { struct Matrix<double, 3, 1> { double x0[3] } x0; struct Quaternion<double> { struct Matrix<double, 3, 1> { double x0[3] } x0; double x1; } x1; } x0; struct Box<double, 2> { struct Matrix<double, 2, 1> { double x0[2] } x0; struct Matrix<double, 2, 1> { double x0[2] } x1; } x1; } face;
@property (readonly, nonatomic) struct Coordinate3D<geo::Degrees, double> { struct Unit<geo::DegreeUnitDescription, double> { double x0; } x0; struct Unit<geo::DegreeUnitDescription, double> { double x0; } x1; struct Unit<geo::MeterUnitDescription, double> { double x0; } x2; } bottomCenterCoordinate;
@property (readonly, nonatomic) struct Mercator3<double> { double x0[3] } bottomCenterPoint;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> { double x0[3] } normal;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double x0; } faceWidthInMeters;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double x0; } faceHeightInMeters;
@property (readonly, nonatomic) struct Unit<geo::MeterUnitDescription, double> { double x0; } appliedUndulation;

/* instance methods */
- (id)initWithOrientedRect:(const void *)rect;
- (id)initWithGEOOrientedBox:(id)box undulationProvider:(id /* block */)provider;
- (id)initWithYaw:(float)yaw pitch:(float)pitch roll:(float)roll x:(double)x y:(double)y z:(double)z w:(float)w h:(float)h undulationProvider:(id /* block */)provider;
- (id)initWithOrientedRect:(const void *)rect undulationProvider:(id /* block */)provider;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* VKARWalkingArrivalStoreFront_h */
