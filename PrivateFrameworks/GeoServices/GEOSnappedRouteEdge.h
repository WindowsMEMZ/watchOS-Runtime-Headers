//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOSnappedRouteEdge_h
#define GEOSnappedRouteEdge_h
@import Foundation;

#include "GEOMultiSectionFeature.h"

@protocol struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad * x0; struct __shared_weak_count * x1; }, {shared_ptr<geo::MapEdgeRoad>="__ptr_"^{MapEdgeRoad}"__cntrl_"^{__shared_weak_count}}, {vector<GeoCodecsVectorTilePoint, std::allocator<GeoCodecsVectorTilePoint>>="__begin_"^{GeoCodecsVectorTilePoint}"__end_"^{GeoCodecsVectorTilePoint}"__end_cap_"{__compressed_pair<GeoCodecsVectorTilePoint *, std::allocator<GeoCodecsVectorTilePoint>>="__value_"^{GeoCodecsVectorTilePoint}}}, {vector<geo::PolylineCoordinate, std::allocator<geo::PolylineCoordinate>>="__begin_"^{PolylineCoordinate}"__end_"^{PolylineCoordinate}"__end_cap_"{__compressed_pair<geo::PolylineCoordinate *, std::allocator<geo::PolylineCoordinate>>="__value_"^{PolylineCoordinate}}};

@interface GEOSnappedRouteEdge : NSObject {
  /* instance variables */
  struct { struct { double x; double y; } origin; struct { double width; double height; } size; } _localBounds;
}

@property (readonly, nonatomic) struct shared_ptr<geo::MapEdgeRoad> { struct MapEdgeRoad * x0; struct __shared_weak_count * x1; } mapEdge;
@property (readonly, nonatomic) GEOMultiSectionFeature *feature;
@property (readonly, nonatomic) struct GeoCodecsVectorTilePoint { float x0; float x1; } * points;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetA;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } routeOffsetB;
@property (readonly, nonatomic) struct PolylineCoordinate { unsigned int x0; float x1; } * routeOffsets;
@property (readonly, nonatomic) unsigned long long mapEdgeOffset;
@property (readonly, nonatomic) BOOL clippedFront;
@property (readonly, nonatomic) BOOL clippedBack;

/* instance methods */
- (id)initWithRoadPath:(const void *)path sectionRect:(const struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; } *)rect;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate { unsigned int x0; float x1; })a andB:(struct PolylineCoordinate { unsigned int x0; float x1; })b overLength:(float)length onRoute:(id)route;
- (id)description;
@end

#endif /* GEOSnappedRouteEdge_h */
