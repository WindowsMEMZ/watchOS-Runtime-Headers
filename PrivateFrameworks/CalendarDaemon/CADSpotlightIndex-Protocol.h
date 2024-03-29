//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1163.2.1.0.0
//
#ifndef CADSpotlightIndex_Protocol_h
#define CADSpotlightIndex_Protocol_h
@import Foundation;

@protocol CADSpotlightIndex <NSObject>
/* instance methods */
- (void)indexSearchableItems:(id)items completionHandler:(id /* block */)handler;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)identifiers completionHandler:(id /* block */)handler;
- (void)deleteAllSearchableItemsForBundleID:(id)id completionHandler:(id /* block */)handler;
@end

#endif /* CADSpotlightIndex_Protocol_h */
