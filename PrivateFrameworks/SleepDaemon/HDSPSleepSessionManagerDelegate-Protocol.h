//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPSleepSessionManagerDelegate_Protocol_h
#define HDSPSleepSessionManagerDelegate_Protocol_h
@import Foundation;

@protocol HDSPSleepSessionManagerDelegate <NSObject>
/* instance methods */
- (void)sleepSessionManager:(id)manager didSaveSession:(id)session;
@optional
/* instance methods */
- (void)sleepSessionManager:(id)manager didSaveArchivedSessions:(id)sessions;
- (id)sleepSessionManager:(id)manager requestsProcessedSessionForSession:(id)session;
- (void)sleepSessionManagerDidFinishSession:(id)session;
@end

#endif /* HDSPSleepSessionManagerDelegate_Protocol_h */
