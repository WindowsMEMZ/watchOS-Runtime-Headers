//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2417.42.9.28.9
//
#ifndef MKUserLocationAnnotationViewProxy_h
#define MKUserLocationAnnotationViewProxy_h
@import Foundation;

#include "MKAnnotationView.h"
#include "VKPuckAnimatorTarget-Protocol.h"
#include "VKRouteMatchedAnnotationPresentation-Protocol.h"
#include "VKTrackableAnnotationPresentation-Protocol.h"

@class GEORouteMatch, NSString;

@interface MKUserLocationAnnotationViewProxy : NSObject<VKPuckAnimatorTarget, VKTrackableAnnotationPresentation, VKRouteMatchedAnnotationPresentation>

@property (weak, nonatomic) MKAnnotationView *annotationView;
@property (nonatomic) double presentationCourse;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } collisionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) struct { double x0; double x1; } presentationCoordinate;
@property (nonatomic) BOOL tracking;
@property (nonatomic) BOOL animatingAccuracy;
@property (nonatomic) double presentationAccuracy;
@property (readonly, nonatomic) double minimumAccuracy;
@property (readonly, nonatomic) struct VKEdgeInsets { float x0; float x1; float x2; float x3; } annotationTrackingEdgeInsets;
@property (retain, nonatomic) GEORouteMatch *routeMatch;

/* instance methods */
- (BOOL)isAnimatingAccuracy;
- (void)setAnimatingToCoordinate:(BOOL)coordinate;
@end

#endif /* MKUserLocationAnnotationViewProxy_h */
