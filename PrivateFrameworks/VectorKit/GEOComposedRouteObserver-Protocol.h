//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1899.42.9.28.10
//
#ifndef GEOComposedRouteObserver_Protocol_h
#define GEOComposedRouteObserver_Protocol_h
@import Foundation;

@protocol GEOComposedRouteObserver <NSObject>
/* instance methods */
- (void)composedRouteUpdatedSnappedPaths:(id)paths;
- (void)composedRoute:(id)route selectedSections:(id)sections deselectedSections:(id)sections;
- (void)composedRoute:(id)route changedSelectedRideInClusteredSegment:(id)segment fromIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (void)composedRoute:(id)route appliedTransitRouteUpdates:(id)updates;
@end

#endif /* GEOComposedRouteObserver_Protocol_h */
