//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLFieldOfIconsSnapshotProviding_Protocol_h
#define CSLFieldOfIconsSnapshotProviding_Protocol_h
@import Foundation;

@protocol CSLFieldOfIconsSnapshotProviding <NSObject>
/* instance methods */
- (struct { BOOL x0; unsigned int x1; })generateSnapshot;
- (void)invalidateSnapshot;
@end

#endif /* CSLFieldOfIconsSnapshotProviding_Protocol_h */
