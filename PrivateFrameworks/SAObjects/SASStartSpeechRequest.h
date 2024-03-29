//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SASStartSpeechRequest_h
#define SASStartSpeechRequest_h
@import Foundation;

#include "SASStartSpeech.h"

@class NSArray, NSNumber, NSString;

@interface SASStartSpeechRequest : SASStartSpeech

@property (nonatomic) BOOL autoPunctuationEnabled;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSString *clientModelVersion;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSFinish;
@property (copy, nonatomic) NSNumber *durationSincePreviousTTSStart;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSArray *voiceTriggerPhrases;
@property (nonatomic) BOOL wasLaunchedForRequest;

/* class methods */
+ (id)startSpeechRequest;
+ (id)startSpeechRequestWithDictionary:(id)dictionary context:(id)context;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
@end

#endif /* SASStartSpeechRequest_h */
