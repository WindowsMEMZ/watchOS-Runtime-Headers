//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef IOSSHLSplashBoardMetadata_h
#define IOSSHLSplashBoardMetadata_h
@import Foundation;

@class CSLSSnapshotContext, NSDate, NSDictionary, UIImage, XBApplicationSnapshot;

@interface IOSSHLSplashBoardMetadata : NSObject

@property (readonly, nonatomic) XBApplicationSnapshot *snapshot;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) NSDictionary *extendedSnapshotData;
@property (readonly, nonatomic) CSLSSnapshotContext *snapshotContext;
@property (readonly, nonatomic) BOOL snapshotStale;
@property (readonly, nonatomic) NSDate *snapshotCreationDate;
@property (readonly, nonatomic) NSDate *snapshotStaleDate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } snapshotNavigationBarFrame;
@property (readonly, nonatomic) long long statusBarPlacement;

/* instance methods */
- (id)initWithSnapshot:(id)snapshot;
- (BOOL)isSnapshotStale;
@end

#endif /* IOSSHLSplashBoardMetadata_h */
