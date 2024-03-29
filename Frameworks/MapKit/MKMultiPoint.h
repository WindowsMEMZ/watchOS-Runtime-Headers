//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKMultiPoint_h
#define MKMultiPoint_h
@import Foundation;

#include "MKShape.h"
#include "MKGeoJSONObject-Protocol.h"

@class NSString;

@interface MKMultiPoint : MKShape<MKGeoJSONObject> {
  /* instance variables */
  struct { double x0; double x1; } * _points;
  double * _elevations;
  struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _boundingRect;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _calculatedMapPointsLength;
  double _mapPointsLength;
  struct GEOOnce_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; BOOL didRun; } _calculatedSelfIntersecting;
  BOOL _selfIntersecting;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long pointCount;

/* instance methods */
- (id)_initWithGeoJSONObject:(id)jsonobject error:(id *)error;
- (void)dealloc;
- (struct { double x0; double x1; } *)points;
- (double *)elevations;
- (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })boundingMapRect;
- (void)_setBounds:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })bounds;
- (void)_calculateBounds;
- (void)_pointsDidChange;
- (void)_wrapAroundTheDateline:(const struct CLLocationCoordinate2D { double x0; double x1; } *)dateline elevations:(const double *)elevations count:(unsigned long long)count;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)coordinates elevations:(const double *)elevations count:(unsigned long long)count;
- (void)_setCoordinates:(const struct CLLocationCoordinate2D { double x0; double x1; } *)coordinates count:(unsigned long long)count;
- (void)_setPoints:(const struct { double x0; double x1; } *)points count:(unsigned long long)count;
- (void)_assignPoints:(struct { double x0; double x1; } *)points count:(unsigned long long)count;
- (void)getCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; } *)coordinates range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (struct CLLocationCoordinate2D { double x0; double x1; })coordinate;
- (BOOL)intersectsMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })rect;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (double)_mapPointsLength;
- (BOOL)_isSelfIntersecting;
- (BOOL)_determineSelfIntersecting;
- (double)locationAtPointIndex:(unsigned long long)index;
- (id)locationsAtPointIndexes:(id)indexes;
@end

#endif /* MKMultiPoint_h */
