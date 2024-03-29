//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSpeechSynthesizerDelegate_Protocol_h
#define WFSpeechSynthesizerDelegate_Protocol_h
@import Foundation;

@protocol WFSpeechSynthesizerDelegate <NSObject>
@optional
/* instance methods */
- (void)speechSynthesizer:(id)synthesizer willSpeakRangeOfUtterance:(struct _NSRange { unsigned long long x0; unsigned long long x1; })utterance utterance:(id)utterance;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingUtterance:(id)utterance;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingUtterance:(id)utterance intoFile:(id)file;
- (void)speechSynthesizer:(id)synthesizer didFailSpeakingUtterance:(id)utterance error:(id)error;
@end

#endif /* WFSpeechSynthesizerDelegate_Protocol_h */
