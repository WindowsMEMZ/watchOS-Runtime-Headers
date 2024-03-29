//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANRemotePlaybackSessionDelegate_Protocol_h
#define ANRemotePlaybackSessionDelegate_Protocol_h
@import Foundation;

@protocol ANRemotePlaybackSessionDelegate <ANAnnounceClientDelegate>
@optional
/* instance methods */
- (void)sessionInterrupted:(id)interrupted;
- (void)sessionInvalidated:(id)invalidated;
- (void)session:(id)session didReceiveAnnouncement:(id)announcement;
@end

#endif /* ANRemotePlaybackSessionDelegate_Protocol_h */
