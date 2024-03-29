//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 217.20.3.0.0
//
#ifndef ANAnalyticsAssistantProtocol_Protocol_h
#define ANAnalyticsAssistantProtocol_Protocol_h
@import Foundation;

@protocol ANAnalyticsAssistantProtocol 
/* instance methods */
- (struct ANAnalyticsAssistantAudioData { unsigned long long x0; double x1; })audioDataForAnnouncement:(id)announcement;
- (struct ANAnalyticsAssistantSenderData { unsigned long long x0; int x1; unsigned long long x2; unsigned long long x3; })senderDataForAnnouncement:(id)announcement;
- (long long)boundGroupCount:(long long)count;
- (long long)bucketFromSize:(long long)size;
- (long long)bucketFromDuration:(double)duration;
- (long long)bucketFromReceiveTime:(double)time;
@end

#endif /* ANAnalyticsAssistantProtocol_Protocol_h */
