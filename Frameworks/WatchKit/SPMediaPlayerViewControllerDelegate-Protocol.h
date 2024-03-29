//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.2.0.0
//
#ifndef SPMediaPlayerViewControllerDelegate_Protocol_h
#define SPMediaPlayerViewControllerDelegate_Protocol_h
@import Foundation;

@protocol SPMediaPlayerViewControllerDelegate <NSObject>
@optional
/* instance methods */
- (void)mediaPlayerViewController:(id)controller didPlayToEnd:(BOOL)end endTime:(double)time error:(id)error;
- (void)mediaPlayerViewControllerRequestsBacklightAssertionCreate:(id)create;
- (void)mediaPlayerViewControllerRequestsBacklightAssertionRelease:(id)release;
@end

#endif /* SPMediaPlayerViewControllerDelegate_Protocol_h */
