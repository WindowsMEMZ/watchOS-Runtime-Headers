//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef ResumeMediaIntentHandling_Protocol_h
#define ResumeMediaIntentHandling_Protocol_h
@import Foundation;

@protocol ResumeMediaIntentHandling <NSObject>
/* instance methods */
- (void)handleResumeMedia:(id)media completion:(id /* block */)completion;
- (void)handleResumeMedia:(id)media completion:(id /* block */)completion;
- (void)resolveDevicesForResumeMedia:(id)media withCompletion:(id /* block */)completion;
- (void)resolveDevicesForResumeMedia:(id)media withCompletion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmResumeMedia:(id)media completion:(id /* block */)completion;
- (void)confirmResumeMedia:(id)media completion:(id /* block */)completion;
@end

#endif /* ResumeMediaIntentHandling_Protocol_h */
