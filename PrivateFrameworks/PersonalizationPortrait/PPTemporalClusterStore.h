//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTemporalClusterStore_h
#define PPTemporalClusterStore_h
@import Foundation;

@interface PPTemporalClusterStore : NSObject
/* instance methods */
- (id)init;
- (BOOL)iterRankedTemporalClustersForStartDate:(id)date endDate:(id)date error:(id *)error block:(id /* block */)block;
@end

#endif /* PPTemporalClusterStore_h */
