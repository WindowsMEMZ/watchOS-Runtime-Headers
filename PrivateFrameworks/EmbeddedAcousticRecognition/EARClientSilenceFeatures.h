//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef EARClientSilenceFeatures_h
#define EARClientSilenceFeatures_h
@import Foundation;

@interface EARClientSilenceFeatures : NSObject

@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double processedAudioMs;
@property (nonatomic) unsigned long long inferenceTime;

/* instance methods */
- (id)initWithSilenceFramesCountMs:(double)ms silenceProbability:(double)probability silenceDurationMs:(double)ms silencePosterior:(double)posterior processedAudioMs:(double)ms inferenceTime:(unsigned long long)time;
- (id)initWithSilenceFramesCountMs:(double)ms silenceProbability:(double)probability silenceDurationMs:(double)ms silencePosterior:(double)posterior processedAudioMs:(double)ms;
@end

#endif /* EARClientSilenceFeatures_h */
