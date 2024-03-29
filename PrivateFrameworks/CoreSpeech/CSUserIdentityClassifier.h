//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSUserIdentityClassifier_h
#define CSUserIdentityClassifier_h
@import Foundation;

@interface CSUserIdentityClassifier : NSObject
/* class methods */
+ (id)pickTopScoringProfileIdFromScores:(id)scores;
+ (unsigned long long)classifyUserIdentityFor:(id)for withScores:(id)scores lowScoreThreshold:(long long)threshold highScoreThreshold:(long long)threshold confidentThreshold:(long long)threshold scoreDiffThreshold:(long long)threshold;
+ (unsigned long long)classifyUserIdentityFor:(id)for withScores:(id)scores withAsset:(id)asset withPhId:(unsigned long long)id;
+ (id)stringFromClassificationCategory:(unsigned long long)category;
@end

#endif /* CSUserIdentityClassifier_h */
