//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSceneSnapshotRequestDelegate_Protocol_h
#define FBSSceneSnapshotRequestDelegate_Protocol_h
@import Foundation;

@protocol FBSSceneSnapshotRequestDelegate <NSObject>
/* instance methods */
- (BOOL)snapshotRequestAllowSnapshot:(id)snapshot;
- (BOOL)snapshotRequest:(id)request performWithContext:(id)context;
@end

#endif /* FBSSceneSnapshotRequestDelegate_Protocol_h */
