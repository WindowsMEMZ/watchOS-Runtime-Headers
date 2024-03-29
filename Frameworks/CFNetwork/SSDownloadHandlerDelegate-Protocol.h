//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1490.0.4.0.0
//
#ifndef SSDownloadHandlerDelegate_Protocol_h
#define SSDownloadHandlerDelegate_Protocol_h
@import Foundation;

@protocol SSDownloadHandlerDelegate <NSObject>
@optional
/* instance methods */
- (void)downloadHandlerDidDisconnect:(id)disconnect;
- (void)downloadHandler:(id)handler handleSession:(id)session;
- (void)downloadHandler:(id)handler cancelSession:(id)session;
- (BOOL)downloadHandler:(id)handler pauseSession:(id)session;
- (void)downloadHandler:(id)handler handleAuthenticationSession:(id)session;
@end

#endif /* SSDownloadHandlerDelegate_Protocol_h */
