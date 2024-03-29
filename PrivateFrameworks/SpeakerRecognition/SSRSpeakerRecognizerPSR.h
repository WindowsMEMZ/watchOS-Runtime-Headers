//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRSpeakerRecognizerPSR_h
#define SSRSpeakerRecognizerPSR_h
@import Foundation;

#include "SSRSpeakerAnalyzerPSR.h"
#include "SSRSpeakerAnalyzerPSRDelegate-Protocol.h"
#include "SSRSpeakerRecognitionContext.h"
#include "SSRSpeakerRecognizer-Protocol.h"
#include "SSRSpeakerRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString;

@interface SSRSpeakerRecognizerPSR : NSObject<SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>

@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo;
@property (weak, nonatomic) NSObject<SSRSpeakerRecognizerDelegate> *delegate;
@property (retain, nonatomic) NSString *invocationStyleStr;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) unsigned long long endInSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) BOOL processingEnded;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (retain, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *lastScoreCard;

/* instance methods */
- (id)initWithContext:(id)context delegate:(id)delegate;
- (void)_initializeWithContext:(id)context;
- (void)dealloc;
- (void)processAudioData:(id)data numSamples:(unsigned long long)samples;
- (void)endAudio;
- (void)resetWithContext:(id)context;
- (void)voiceRecognitionPSRAnalyzer:(id)psranalyzer hasVoiceRecognitionInfo:(id)info;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)processing withVoiceRecognitionInfo:(id)info;
@end

#endif /* SSRSpeakerRecognizerPSR_h */
