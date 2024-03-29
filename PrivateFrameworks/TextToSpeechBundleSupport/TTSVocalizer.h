//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSVocalizer_h
#define TTSVocalizer_h
@import Foundation;

@class NSString;

@interface TTSVocalizer : NSObject

@property (nonatomic) struct { char * x0; char * x1; char * x2; BOOL x3; int x4; unsigned long long x5; int x6; char * x7[3] struct __CFString * x8; long long x9; long long x10; long long x11; struct __CFString * x12; } * ttsVocalizerDataClass;
@property (retain, nonatomic) struct __CFArray * ttsVocalizerResourceDataPtrs;
@property (retain, nonatomic) struct __CFData * ttsVocalizerRulesetData;
@property (retain, nonatomic) NSString *ttsVocalizerCurrentLanguageCode;
@property (nonatomic) long long speechGender;

/* instance methods */
- (id)initWithLanguage:(id)language defaultLanguage:(id)language reinitIfNecessary:(BOOL)necessary forceReinit:(BOOL)reinit voiceType:(long long)type gender:(long long)gender footprint:(long long)footprint voiceName:(id)name voiceIdentifier:(id)identifier error:(id *)error;
- (void)dealloc;
- (void)_ttsVocalizerDestroy;
- (id)_ttsVocalizerCopyAvailableVoiceInfo:(const struct __CFArray * *)info;
- (unsigned int)_ttsVocalizerReallyLoadResource:(const char *)resource rules:(id)rules resource:(struct _VE_HSAFE { void * x0; unsigned int x1; } *)resource supportsAccurateWordCallbacks:(BOOL)callbacks resourceIdentifier:(id)identifier;
- (void)_ttsVocalizerLoadProgrammaticRules:(BOOL)rules forTests:(BOOL)tests;
- (id)_ttsVocalizerAssetPath:(long long)path;
- (long long)_ttsVocalizerSpeechGender;
- (unsigned char)_ttsVocalizerDefaultVoiceIsFallback;
- (void)loadResource:(id)resource resourceURL:(id)url supportsAccurateWordCallbacks:(BOOL)callbacks;
- (struct __CFArray *)_ttsVocalizerLoadedResources;
- (BOOL)_ttsVocalizerIsInitialized;
- (id)_ttsVocalizerCreateInstanceWithDesiredVoiceName:(id)name desiredFootprint:(long long)footprint languageCode:(id)code voiceType:(long long)type;
- (BOOL)readyForSynthesis;
- (void)stopSynthesis;
- (void)_ttsVocalizerDestroyInstance;
- (double)_ttsVocalizerGetSampleRate;
- (id)_ttsVocalizerSetParameters:(float)parameters pitch:(float)pitch volume:(float)volume footprintID:(long long)id;
- (id)_ttsVocalizerAppendPhonemeToString:(unsigned short)string phonemeString:(id)string;
@end

#endif /* TTSVocalizer_h */
