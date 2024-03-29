//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSiriSynthWrapper_h
#define TTSSiriSynthWrapper_h
@import Foundation;

#include "TTSSiriSynthWrapperDelegate-Protocol.h"

@class AVAudioConverter, AVAudioFormat, NSMutableOrderedSet, NSString, TTSRulesetRunner, TTSSpeechString;
@protocol OS_dispatch_queue;

@interface TTSSiriSynthWrapper : NSObject

@property (nonatomic) void * synthesizer;
@property (weak, nonatomic) NSObject<TTSSiriSynthWrapperDelegate> *delegate;
@property (retain, nonatomic) NSMutableOrderedSet *voiceResources;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) TTSRulesetRunner *ruleSetRunner;
@property (retain, nonatomic) TTSSpeechString *processedSpeechString;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synthesisQueue;
@property BOOL synthesizing;
@property (retain, nonatomic) AVAudioFormat *engineFormat;
@property (retain, nonatomic) AVAudioFormat *outputFormat;
@property (retain, nonatomic) AVAudioConverter *bufferConverter;
@property (nonatomic) float pitch;
@property (nonatomic) float pitchRange;
@property (nonatomic) float duration;
@property (nonatomic) float energy;
@property (nonatomic) float tilt;

/* instance methods */
- (id)initWithVoicePath:(id)path language:(id)language delegate:(id)delegate;
- (void)dealloc;
- (void)_setProsodyParameters;
- (id)_rawLiteralCharacterRegexForCurrentLanguage;
- (id)_applyPostRuleRewrites:(id)rewrites;
- (void)synthesizeString:(id)string;
- (void)stopSynthesis;
- (void)loadRuleset:(id)ruleset;
- (BOOL)loadVoiceResource:(id)resource;
- (BOOL)unloadVoiceResource:(id)resource;
- (void)unloadAllVoiceResources;
@end

#endif /* TTSSiriSynthWrapper_h */
