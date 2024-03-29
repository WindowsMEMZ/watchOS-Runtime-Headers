//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIStandardTypingSessionConfidenceEvaluator_h
#define TIStandardTypingSessionConfidenceEvaluator_h
@import Foundation;

@interface TIStandardTypingSessionConfidenceEvaluator : NSObject
/* class methods */
+ (unsigned long long)evaluateConfidenceInSession:(id)session alignedSession:(id)session;
+ (double)calculateAlignedTypingSessionConfidence:(id)confidence;
@end

#endif /* TIStandardTypingSessionConfidenceEvaluator_h */
