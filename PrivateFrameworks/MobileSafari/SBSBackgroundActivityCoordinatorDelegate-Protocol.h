//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SBSBackgroundActivityCoordinatorDelegate_Protocol_h
#define SBSBackgroundActivityCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol SBSBackgroundActivityCoordinatorDelegate <NSObject>
/* instance methods */
- (void)statusBarCoordinator:(id)coordinator invalidatedRegistrationWithError:(id)error;
@optional
/* instance methods */
- (BOOL)statusBarCoordinator:(id)coordinator receivedTapWithContext:(id)context completionBlock:(id /* block */)block;
@end

#endif /* SBSBackgroundActivityCoordinatorDelegate_Protocol_h */
