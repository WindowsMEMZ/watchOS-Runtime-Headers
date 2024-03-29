//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLPhotoAnalysisMomentGraphServiceProtocol_Protocol_h
#define PLPhotoAnalysisMomentGraphServiceProtocol_Protocol_h
@import Foundation;

@protocol PLPhotoAnalysisMomentGraphServiceProtocol <PLPhotoAnalysisGenericServiceProtocol>
/* instance methods */
- (void)performGraphRebuildWithOptions:(id)options reply:(id /* block */)reply;
- (void)performGraphIncrementalUpdateWithOptions:(id)options reply:(id /* block */)reply;
- (void)performMemoryNodesRebuildForCategory:(unsigned long long)category reply:(id /* block */)reply;
- (void)requestGraphStatusWithReply:(id /* block */)reply;
- (void)requestZeroKeywordsWithOptions:(id)options reply:(id /* block */)reply;
- (void)requestSynonymsDictionariesWithReply:(id /* block */)reply;
- (void)requestGraphSearchMetadataWithOptions:(id)options reply:(id /* block */)reply;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)uuids ofType:(unsigned long long)type reply:(id /* block */)reply;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)uuids ofType:(unsigned long long)type reply:(id /* block */)reply;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)uuids ofType:(unsigned long long)type isFullAnalysis:(BOOL)analysis reply:(id /* block */)reply;
@end

#endif /* PLPhotoAnalysisMomentGraphServiceProtocol_Protocol_h */
