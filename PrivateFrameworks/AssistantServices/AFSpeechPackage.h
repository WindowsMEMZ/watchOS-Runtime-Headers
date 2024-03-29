//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFSpeechPackage_h
#define AFSpeechPackage_h
@import Foundation;

#include "AFSpeechAudioAnalytics.h"
#include "AFSpeechLatticeMitigatorResult.h"
#include "AFSpeechPackage.h"
#include "AFSpeechRecognition.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface AFSpeechPackage : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) AFSpeechRecognition *recognition;
@property (readonly, nonatomic) AFSpeechRecognition *unfilteredRecognition;
@property (readonly, nonatomic) AFSpeechRecognition *rawRecognition;
@property (readonly, nonatomic) AFSpeechAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) BOOL isFinal;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, nonatomic) AFSpeechLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, nonatomic) BOOL recognitionPaused;
@property (readonly, nonatomic) BOOL speechProfileUsed;
@property (readonly, nonatomic) NSNumber *endOfSentenceLikelihood;
@property (readonly, nonatomic) AFSpeechPackage *potentialCommandPrecedingUtterance;
@property (readonly, nonatomic) AFSpeechPackage *potentialCommandUtterance;
@property (readonly, nonatomic) long long resultCandidateId;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *acousticModelVersion;
@property (readonly, nonatomic) long long numOneBestTokensExcludingTriggerPhrase;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)init;
- (id)initWithRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start;
- (id)initWithRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used resultCandidateId:(long long)id;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used resultCandidateId:(long long)id endOfSentenceLikelihood:(id)likelihood;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used resultCandidateId:(long long)id endOfSentenceLikelihood:(id)likelihood modelVersion:(id)version acousticModelVersion:(id)version;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used resultCandidateId:(long long)id endOfSentenceLikelihood:(id)likelihood modelVersion:(id)version acousticModelVersion:(id)version potentialCommandPrecedingUtterance:(id)utterance potentialCommandUtterance:(id)utterance;
- (id)initWithRecognition:(id)recognition unfilteredRecognition:(id)recognition rawRecognition:(id)recognition audioAnalytics:(id)analytics isFinal:(BOOL)final utteranceStart:(double)start latticeMitigatorResult:(id)result recognitionPaused:(BOOL)paused speechProfileUsed:(BOOL)used resultCandidateId:(long long)id endOfSentenceLikelihood:(id)likelihood modelVersion:(id)version acousticModelVersion:(id)version potentialCommandPrecedingUtterance:(id)utterance potentialCommandUtterance:(id)utterance numOneBestTokensExcludingTriggerPhrase:(long long)phrase;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)dictionaryRepresentation;
@end

#endif /* AFSpeechPackage_h */
