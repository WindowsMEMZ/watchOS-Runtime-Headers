//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MPCQueueControllerBehaviorMusicSharePlayDelegate_Protocol_h
#define MPCQueueControllerBehaviorMusicSharePlayDelegate_Protocol_h
@import Foundation;

@protocol MPCQueueControllerBehaviorMusicSharePlayDelegate <NSObject>
/* instance methods */
- (void)behavior:(id)behavior didEndSharePlaySessionWithReason:(long long)reason;
- (void)behavior:(id)behavior didChangeExplicitContentState:(long long)state;
- (void)behavior:(id)behavior didReceiveSharedListeningEvent:(id)event;
@end

#endif /* MPCQueueControllerBehaviorMusicSharePlayDelegate_Protocol_h */
