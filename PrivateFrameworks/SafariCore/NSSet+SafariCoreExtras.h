//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef NSSet_SafariCoreExtras_h
#define NSSet_SafariCoreExtras_h
@import Foundation;

@interface NSSet (SafariCoreExtras)
/* instance methods */
- (id)safari_arrayByMappingObjectsUsingBlock:(id /* block */)block;
- (id)safari_mapAndFilterObjectsUsingBlock:(id /* block */)block;
- (id)safari_smallestObject:(id /* block */)object;
- (id)safari_anyObjectPassingTest:(id /* block */)test;
- (BOOL)safari_containsObjectPassingTest:(id /* block */)test;
- (BOOL)safari_allObjectsPassTest:(id /* block */)test;
- (id)safari_shortestURL;
- (id)safari_setByRemovingObject:(id)object;
- (id)safari_sortedArrayUsingFinderLikeSorting;
@end

#endif /* NSSet_SafariCoreExtras_h */
