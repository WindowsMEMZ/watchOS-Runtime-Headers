//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef _TtC10ChronoCore18ToolServicesServer_ChronoCore_h
#define _TtC10ChronoCore18ToolServicesServer_ChronoCore_h
@import Foundation;

@interface ChronoCore.ToolServicesServer (ChronoCore) <BSServiceConnectionListenerDelegate, CHSToolServiceServerInterface>
/* instance methods */
- (void)cacheDescriptorsForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)resetCaches:(id)caches completion:(id /* block */)completion;
- (void)expireLocationGracePeriods;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)completion;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)completion;
- (void)fetchStateWithCompletion:(id /* block */)completion;
- (void)fetchStateForItemWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)extensionInfoForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)extensionInfoWithCompletion:(id /* block */)completion;
- (void)widgetsWithTimelines:(id /* block */)timelines;
- (void)timelineForWidgetKey:(id)key completion:(id /* block */)completion;
- (void)reloadTimelinesOfKind:(id)kind containedIn:(id)in reason:(id)reason completion:(id /* block */)completion;
- (void)contentURLForActivityID:(id)id completion:(id /* block */)completion;
- (void)runReaper;
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
@end

#endif /* _TtC10ChronoCore18ToolServicesServer_ChronoCore_h */
