//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDJobManagerClient_Protocol_h
#define ASDJobManagerClient_Protocol_h
@import Foundation;

@protocol ASDJobManagerClient <NSObject>
/* instance methods */
- (void)didChangeJobs:(id)jobs;
- (void)didCompleteJobs:(id)jobs finalPhases:(id)phases;
- (void)didUpdateProgress:(id)progress;
- (void)didUpdateStates:(id)states;
@end

#endif /* ASDJobManagerClient_Protocol_h */
