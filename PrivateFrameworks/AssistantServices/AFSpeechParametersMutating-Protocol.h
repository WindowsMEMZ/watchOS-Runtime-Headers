//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSpeechParametersMutating_Protocol_h
#define AFSpeechParametersMutating_Protocol_h
@import Foundation;

@protocol AFSpeechParametersMutating <NSObject>
/* instance methods */
- (void)setLanguage:(id)language;
- (void)setInteractionIdentifier:(id)identifier;
- (void)setTask:(id)task;
- (void)setLoggingContext:(id)context;
- (void)setApplicationName:(id)name;
- (void)setProfile:(id)profile;
- (void)setOverrides:(id)overrides;
- (void)setModelOverrideURL:(id)url;
- (void)setOriginalAudioFileURL:(id)url;
- (void)setNarrowband:(BOOL)narrowband;
- (void)setDetectUtterances:(BOOL)utterances;
- (void)setCensorSpeech:(BOOL)speech;
- (void)setFarField:(BOOL)field;
- (void)setSecureOfflineOnly:(BOOL)only;
- (void)setShouldStoreAudioOnDevice:(BOOL)device;
- (void)setMaximumRecognitionDuration:(double)duration;
- (void)setInputOrigin:(id)origin;
- (void)setLocation:(id)location;
- (void)setJitGrammar:(id)grammar;
@end

#endif /* AFSpeechParametersMutating_Protocol_h */
