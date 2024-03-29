//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef NSURLSessionTaskSubclass_Protocol_h
#define NSURLSessionTaskSubclass_Protocol_h
@import Foundation;

@protocol NSURLSessionTaskSubclass <NSObject>
/* instance methods */
- (void)_onqueue_cancel;
- (void)_onqueue_suspend;
- (void)_onqueue_resume;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onSessionQueue_disavow;
- (void)_onSessionQueue_cleanupAndBreakCycles;
@end

#endif /* NSURLSessionTaskSubclass_Protocol_h */
