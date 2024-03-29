//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSInstrumentMetrics_h
#define VSInstrumentMetrics_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface VSInstrumentMetrics : NSObject<NSSecureCoding>

@property (copy) NSString *utterance;
@property (copy) NSString *voiceAssetKey;
@property (copy) NSString *voiceResourceAssetKey;
@property (copy) NSString *audioOutputRoute;
@property (copy) NSString *clientBundleIdentifier;
@property (copy) NSString *experimentIdentifier;
@property long long requestCreatedTimestamp;
@property long long eagerRequestCreatedTimestampDiffs;
@property long long synthesisBeginTimestamp;
@property long long synthesisEndTimestamp;
@property long long speechBeginTimestamp;
@property (readonly) long long speechEstimatedOutputBeginTimestamp;
@property long long speechEndTimestamp;
@property long long audioStartTimestampDiffs;
@property long long serverFirstPacketTimestamp;
@property long long serverLastPacketTimestamp;
@property double serverStreamedAudioDuration;
@property double audioDuration;
@property BOOL isWarmStart;
@property BOOL isServerTTS;
@property BOOL isServerStreamTTS;
@property BOOL isServerTimeout;
@property BOOL isServerTTSRacing;
@property BOOL canUseServerTTS;
@property BOOL neuralAlignmentStall;
@property BOOL neuralAudioClick;
@property BOOL neuralFallback;
@property long long promptCount;
@property long long errorCode;
@property long long sourceOfTTS;
@property BOOL isSpeechRequest;
@property BOOL isCacheHitFromDisk;
@property BOOL isCacheHitFromMemory;

/* class methods */
+ (id)vs_metricsFromSTSMetrics:(id)stsmetrics;
+ (id)descriptionFormatter;
+ (BOOL)supportsSecureCoding;
+ (id)stringOfSourceOfTTS:(long long)tts;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (double)_clockFactor;
- (double)timeToSpeakLatency;
- (double)timeToPlaybackLatency;
- (double)audioQueueLatency;
- (double)ttsSynthesisLatency;
- (BOOL)isSynthesisCached;
- (double)eagerRequestTimeGap;
- (double)realTimeFactor;
- (double)cappedRealTimeFactor;
- (double)serverStreamFirstPacketLatency;
- (double)serverStreamLastPacketLatency;
- (id)dictionaryMetrics;
@end

#endif /* VSInstrumentMetrics_h */
