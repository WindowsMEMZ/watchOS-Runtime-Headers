//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRSpeakerAnalyzerPSR_h
#define SSRSpeakerAnalyzerPSR_h
@import Foundation;

@interface SSRSpeakerAnalyzerPSR : NSObject
/* instance methods */
- (id)initWithVoiceRecognitionContext:(id)context delegate:(id)delegate;
- (void)processAudioData:(id)data;
- (void)endAudio;
- (id)resetForNewRequest;
- (id)getVoiceRecognizerResults;
@end

#endif /* SSRSpeakerAnalyzerPSR_h */
