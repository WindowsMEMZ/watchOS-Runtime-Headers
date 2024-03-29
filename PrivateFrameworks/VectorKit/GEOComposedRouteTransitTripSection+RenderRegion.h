//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef GEOComposedRouteTransitTripSection_RenderRegion_h
#define GEOComposedRouteTransitTripSection_RenderRegion_h
@import Foundation;

@interface GEOComposedRouteTransitTripSection (RenderRegion)
/* instance methods */
- (BOOL)_getEndPoints:(id)points rect:(const void *)rect result:(void *)result;
- (BOOL)_validateSnappedPaths:(id)paths snappedTileBounds:(const void *)bounds overlay:(id)overlay;
- (id)pathsForRenderRegion:(id)region inOverlay:(id)overlay shouldSnapToTransit:(BOOL)transit verifySnapping:(BOOL)snapping;
- (id)unsnappedPathsInOverlay:(id)overlay;
@end

#endif /* GEOComposedRouteTransitTripSection_RenderRegion_h */
