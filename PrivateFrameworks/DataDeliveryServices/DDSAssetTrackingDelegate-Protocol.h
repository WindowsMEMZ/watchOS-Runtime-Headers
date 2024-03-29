//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64.0.0.0.0
//
#ifndef DDSAssetTrackingDelegate_Protocol_h
#define DDSAssetTrackingDelegate_Protocol_h
@import Foundation;

@protocol DDSAssetTrackingDelegate <NSObject>
/* instance methods */
- (void)handleRemovedAssertions:(id)assertions;
- (void)handleNewAssertions:(id)assertions;
- (void)handleAddedNewDescriptor:(id)descriptor forAssertion:(id)assertion;
@end

#endif /* DDSAssetTrackingDelegate_Protocol_h */
