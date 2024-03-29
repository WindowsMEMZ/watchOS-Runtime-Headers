//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 63.1.3.0.0
//
#ifndef MTWrappedPhraseProcessor_h
#define MTWrappedPhraseProcessor_h
@import Foundation;

#include "MTFVoice.h"
#include "MTFrontendSimple.h"
#include "MacinTalkPhraseProcessorDelegate-Protocol.h"

@class AVAudioFormat, NSNumber;

@interface MTWrappedPhraseProcessor : NSObject

@property void * processor;
@property (weak, nonatomic) MTFVoice *voice;
@property (retain, nonatomic) AVAudioFormat *format;
@property struct MTBEPersistentParam { float x0; float x1; float x2[4] char x3[4] int x4; float x5; struct __CFDictionary * x6; short x7; short x8; struct SLLexer * x9; struct __CFArray * x10; struct MTMBDiphoneStatistics * x11; struct __CFDictionary * x12; struct SLDictLookup * x13; struct _opaque_pthread_mutex_t { long long x0; char x1[56] } x14; struct _opaque_pthread_cond_t { long long x0; char x1[40] } x15; struct MTMBSelectUnits * x16; } * fPParams;
@property struct MTBENotifier { undefined * * x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4] } * notifier;
@property struct MTBENotifier { undefined * * x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4] } * saveState;
@property struct MTBENotifier { undefined * * x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4] } * resetState;
@property (retain, nonatomic) NSNumber *defaultModulation;
@property long long currentSampleCount;
@property (retain, nonatomic) MTFrontendSimple *frontend;
@property (weak, nonatomic) NSObject<MacinTalkPhraseProcessorDelegate> *delegate;
@property (retain, nonatomic) NSNumber *pitchModulation;

/* instance methods */
- (id)initWithVoice:(id)voice frontend:(id)frontend;
- (BOOL)processNextPhrase;
- (id)nextBuffer;
- (void)generatedSampleForWord:(unsigned long long)word length:(unsigned short)length;
- (void)generatedSampleForPhoneme:(short)phoneme;
- (void)generatedSampleForSync:(unsigned int)sync;
- (void)finishedSampleGeneration;
- (void)dealloc;
@end

#endif /* MTWrappedPhraseProcessor_h */
