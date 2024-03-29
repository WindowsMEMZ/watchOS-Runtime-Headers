//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORoadEdge_h
#define GEORoadEdge_h
@import Foundation;

#include "GEOMultiSectionFeature.h"
#include "NSCopying-Protocol.h"

@interface GEORoadEdge : NSObject<NSCopying> {
  /* instance variables */
  struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature *road; unsigned long long vertexIndexA; unsigned long long vertexIndexB; unsigned long long junctionIndexA; unsigned long long junctionIndexB; struct GeoCodecsConnectivityJunction *junctionA; struct GeoCodecsConnectivityJunction *junctionB; } _edge;
  GEOMultiSectionFeature *_feature;
}

@property (readonly, nonatomic) GEOMultiSectionFeature *road;
@property (readonly, nonatomic) unsigned long long vertexIndexA;
@property (readonly, nonatomic) unsigned long long vertexIndexB;
@property (readonly, nonatomic) unsigned long long junctionIndexA;
@property (readonly, nonatomic) unsigned long long junctionIndexB;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature * x2; unsigned long long x3; unsigned long long x4; } * junctionA;
@property (readonly, nonatomic) struct GeoCodecsConnectivityJunction { unsigned int x0; unsigned int x1; struct GeoCodecsPointFeature * x2; unsigned long long x3; unsigned long long x4; } * junctionB;

/* instance methods */
- (id)init:(struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature * x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction * x5; struct GeoCodecsConnectivityJunction * x6; } *)init withMultiSectionFeatureInterface:(id)interface;
- (void)setMultiSectionFeature:(id)feature;
- (struct GeoCodecsRoadEdge { struct GeoCodecsMultiSectionFeature * x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; struct GeoCodecsConnectivityJunction * x5; struct GeoCodecsConnectivityJunction * x6; } *)get;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* GEORoadEdge_h */
