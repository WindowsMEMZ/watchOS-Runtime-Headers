//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.15.1.0.0
//
#ifndef SFSpeechRecognitionMetadata_h
#define SFSpeechRecognitionMetadata_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SFVoiceAnalytics.h"
#include "SRSampling-Protocol.h"

@class NSString;

@interface SFSpeechRecognitionMetadata : NSObject<SRSampling, NSCopying, NSSecureCoding>

@property (readonly, nonatomic) double speakingRate;
@property (readonly, nonatomic) double averagePauseDuration;
@property (readonly, nonatomic) double speechStartTimestamp;
@property (readonly, nonatomic) double speechDuration;
@property (readonly, nonatomic) SFVoiceAnalytics *voiceAnalytics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)_initWithSpeechStartTimestamp:(double)timestamp speechDuration:(double)duration voiceAnalytics:(id)analytics speakingRate:(double)rate averagePauseDuration:(double)duration;
- (id)initWithBinarySampleRepresentation:(id)representation metadata:(id)metadata timestamp:(double)timestamp;
- (id)binarySampleRepresentation;
@end

#endif /* SFSpeechRecognitionMetadata_h */
