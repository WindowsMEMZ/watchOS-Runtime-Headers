//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSharedAssetsContainer_Protocol_h
#define PLSharedAssetsContainer_Protocol_h
@import Foundation;

@protocol PLSharedAssetsContainer <NSObject>

@property (readonly, nonatomic) int assetsCount;
@property (readonly, nonatomic) int assetsCountShared;
@property (readonly, nonatomic) int assetsCountPrivate;
@property (readonly, nonatomic) short sharingComposition;
@property (readonly, nonatomic) int photoAssetsSuggestedByPhotosCount;
@property (readonly, nonatomic) int videoAssetsSuggestedByPhotosCount;

/* instance methods */
- (void)recalculateSharedAssetContainerCachedValues;
- (void)reportSharedAssetContainerIncrementalChange:(id)change forAllAssetsCountKey:(id)key;
@end

#endif /* PLSharedAssetsContainer_Protocol_h */
