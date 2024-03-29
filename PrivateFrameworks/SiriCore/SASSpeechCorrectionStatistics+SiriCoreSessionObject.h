//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3301.4.1.0.0
//
#ifndef SASSpeechCorrectionStatistics_SiriCoreSessionObject_h
#define SASSpeechCorrectionStatistics_SiriCoreSessionObject_h
@import Foundation;

@interface SASSpeechCorrectionStatistics (SiriCoreSessionObject)
/* instance methods */
- (BOOL)siriCore_supportedByLocalSession;
- (BOOL)siriCore_supportedByRemoteLimitedSession;
- (id)siriCore_requestId;
- (void)siriCore_setSessionRequestId:(id)id;
@end

#endif /* SASSpeechCorrectionStatistics_SiriCoreSessionObject_h */
