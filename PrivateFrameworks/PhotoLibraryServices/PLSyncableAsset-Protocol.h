//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLSyncableAsset_Protocol_h
#define PLSyncableAsset_Protocol_h
@import Foundation;

@protocol PLSyncableAsset <NSObject, PLSyncableObject>

@property (readonly, retain, nonatomic) NSString *cloudIdentifier;
@property (retain, nonatomic) NSSet *detectedFaces;
@property (readonly, nonatomic) long long width;
@property (readonly, nonatomic) long long height;
@property (readonly, nonatomic) BOOL faceDetectionComplete;
@property (readonly, copy, nonatomic) NSDate *dateForComparingAdjustmentVersions;
@property (readonly, nonatomic) id faceAdjustmentVersion;
@property (readonly, copy, nonatomic) NSString *syncedAdjustmentFingerprint;
@property (readonly, nonatomic) BOOL hasAdjustments;

/* instance methods */
- (void)markForNeedingFaceDetection;
- (id)momentShare;
- (id)syncDescription;
@end

#endif /* PLSyncableAsset_Protocol_h */
