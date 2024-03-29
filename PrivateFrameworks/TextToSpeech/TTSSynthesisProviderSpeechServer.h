//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSSynthesisProviderSpeechServer_h
#define TTSSynthesisProviderSpeechServer_h
@import Foundation;

#include "TTSSpeechService-Protocol.h"
#include "TTSSpeechServiceUnitTesting-Protocol.h"
#include "TTSSpeechSynthesizerDelegate-Protocol.h"
#include "TTSSynthesisProviderAudioEngineProtocol-Protocol.h"

@class NSMutableDictionary, NSString;

@interface TTSSynthesisProviderSpeechServer : NSObject<TTSSynthesisProviderAudioEngineProtocol, TTSSpeechService, TTSSpeechSynthesizerDelegate, TTSSpeechServiceUnitTesting>

@property (retain, nonatomic) NSMutableDictionary *requestMapping;
@property (retain, nonatomic) NSMutableDictionary *speechEngines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)regexRules;

/* instance methods */
- (id)init;
- (id)_speechEngineForSynthesizerInstance:(unsigned long long)instance;
- (void)getSpeechIsActiveForRequest:(id)request reply:(id /* block */)reply;
- (void)initializeSpeechServerInstance:(unsigned long long)instance;
- (BOOL)isVoiceValid:(id)valid;
- (id)phonemesFromIPA:(id)ipa language:(id)language;
- (id)enclosedStringWithPhonemes:(id)phonemes originalString:(id)string;
- (id)speechMarkupStringForType:(long long)type voice:(id)voice string:(id)string;
- (id)genericMarkerMarkupForVoice:(id)voice name:(id)name;
- (id)combinedProsodyMarkupForVoice:(id)voice string:(id)string rate:(id)rate pitch:(id)pitch volume:(id)volume;
- (void)_purgeRequest:(id)request;
- (id)_unescapeDelimeterBoundedSSMLInString:(id)string;
- (id)_performEscapeOrDeEscapeFor:(id)for escape:(BOOL)escape;
- (id)_escapeSSML:(id)ssml;
- (void)startSpeechRequest:(id)request;
- (void)pauseSpeechRequest:(id)request atMark:(long long)mark;
- (void)continueSpeechRequest:(id)request;
- (void)stopSpeechRequest:(id)request atMark:(long long)mark;
- (id)supportedIPAPhonemeLanguages;
- (void)synthesizerInstanceDestroyed:(unsigned long long)destroyed;
- (void)synthesisProviderDidFinishSpeakingRequest:(id)request successfully:(BOOL)successfully withError:(id)error;
- (id)_ttsMarkerForSSEMarker:(id)ssemarker forRequest:(id)request;
- (void)synthesisProviderDidStartSpeakingMarker:(id)marker forRequest:(id)request;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_nonSSMLSubstringRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range fromSSML:(id)ssml;
- (BOOL)employSpeechMarkupForType:(long long)type language:(id)language;
- (id)audioFileSettingsForVoice:(id)voice;
- (BOOL)isSiriService;
- (BOOL)isNashvilleService;
- (void)setServiceQueue:(id)queue forSynthesizerInstanceID:(unsigned long long)id;
- (BOOL)canInitializeSpeech:(id)speech;
- (struct __CFArray *)loadedVoiceResources;
@end

#endif /* TTSSynthesisProviderSpeechServer_h */
