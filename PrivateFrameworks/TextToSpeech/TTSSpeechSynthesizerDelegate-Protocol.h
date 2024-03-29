//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSpeechSynthesizerDelegate_Protocol_h
#define TTSSpeechSynthesizerDelegate_Protocol_h
@import Foundation;

@protocol TTSSpeechSynthesizerDelegate <NSObject>
@optional
/* instance methods */
- (void)speechSynthesizer:(id)synthesizer didStartSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully phonemesSpoken:(id)spoken withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didPauseSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didContinueSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })string forRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didEncounterMarker:(id)marker forRequest:(id)request;
@end

#endif /* TTSSpeechSynthesizerDelegate_Protocol_h */
