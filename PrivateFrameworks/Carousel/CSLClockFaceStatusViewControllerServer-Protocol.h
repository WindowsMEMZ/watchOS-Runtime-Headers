//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLClockFaceStatusViewControllerServer_Protocol_h
#define CSLClockFaceStatusViewControllerServer_Protocol_h
@import Foundation;

@protocol CSLClockFaceStatusViewControllerServer <NSObject>
/* instance methods */
- (void)registerClientWithConfiguration:(id)configuration completion:(id /* block */)completion;
- (void)launchSessionAppWithBundleID:(id)id sessionType:(long long)type;
@end

#endif /* CSLClockFaceStatusViewControllerServer_Protocol_h */
