//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef SSMLParserWrapperInternal_TextToSpeech_h
#define SSMLParserWrapperInternal_TextToSpeech_h
@import Foundation;

@interface SSMLParserWrapperInternal (TextToSpeech)
/* instance methods */
- (id)generateSSMLFromPlainTalkString:(id)string;
- (id)parseSSMLToPlainTalk:(id)talk;
- (id)generateSSMLFromAVSpeechUtterance:(id)utterance;
- (id)parseSSMLToAVSpeechUtterances:(id)utterances;
- (id)generateSSMLFromString:(id)string;
- (id)parseSSMLToPlainText:(id)text;
@end

#endif /* SSMLParserWrapperInternal_TextToSpeech_h */
