//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef SPCoreSpotlightIndexerTask_h
#define SPCoreSpotlightIndexerTask_h
@import Foundation;

@class CSIndexJob, NSArray;

@interface SPCoreSpotlightIndexerTask : NSObject

@property (readonly, nonatomic) CSIndexJob *job;
@property (readonly, nonatomic) NSArray *indexers;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *completedBundleIDs;
@property (nonatomic) unsigned long long dataMigrationStage;
@property (nonatomic) BOOL shouldResumeOnFailure;

/* instance methods */
- (id)initWithIndexJob:(id)job indexers:(id)indexers;
@end

#endif /* SPCoreSpotlightIndexerTask_h */
