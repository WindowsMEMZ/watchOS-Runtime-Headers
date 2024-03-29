//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.23.0.0.0
//
#ifndef CHSToolServiceServerInterface_Protocol_h
#define CHSToolServiceServerInterface_Protocol_h
@import Foundation;

@protocol CHSToolServiceServerInterface <NSObject>
/* instance methods */
- (void)cacheDescriptorsForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)resetCaches:(id)caches completion:(id /* block */)completion;
- (void)allCachedSnapshotURLsWithCompletion:(id /* block */)completion;
- (void)listStateCaptureIdentifiersWithCompletion:(id /* block */)completion;
- (void)fetchStateWithCompletion:(id /* block */)completion;
- (void)fetchStateForItemWithIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)extensionInfoForBundleIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)extensionInfoWithCompletion:(id /* block */)completion;
- (void)widgetsWithTimelines:(id /* block */)timelines;
- (void)timelineForWidgetKey:(id)key completion:(id /* block */)completion;
- (void)reloadTimelinesOfKind:(id)kind containedIn:(id)in reason:(id)reason completion:(id /* block */)completion;
- (void)expireLocationGracePeriods;
- (void)contentURLForActivityID:(id)id completion:(id /* block */)completion;
- (void)runReaper;
@end

#endif /* CHSToolServiceServerInterface_Protocol_h */
