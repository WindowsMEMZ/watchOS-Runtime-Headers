//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTHybridEndpointer_h
#define _LTHybridEndpointer_h
@import Foundation;

#include "EARCaesuraSilencePosteriorGeneratorDelegate-Protocol.h"
#include "_LTHybridEndpointerAssetInfo.h"
#include "_LTSpeechTranslationDelegate-Protocol.h"

@class EARCaesuraSilencePosteriorGenerator, NSDictionary, NSNumber, NSString, _EAREndpointer, _LTServerEndpointerFeatures, _LTTranslationContext;
@protocol OS_dispatch_queue;

@interface _LTHybridEndpointer : NSObject<EARCaesuraSilencePosteriorGeneratorDelegate> {
  /* instance variables */
  _LTTranslationContext *_context;
  _LTHybridEndpointerAssetInfo *_asset;
  _EAREndpointer *_sourceEndpointer;
  NSNumber *_sourceEndpointerThreshold;
  NSNumber *_sourceDisconnectedEndpointerThreshold;
  _LTServerEndpointerFeatures *_sourceEndpointerFeatures;
  _EAREndpointer *_targetEndpointer;
  NSNumber *_targetEndpointerThreshold;
  NSNumber *_targetDisconnectedEndpointerThreshold;
  _LTServerEndpointerFeatures *_targetEndpointerFeatures;
  EARCaesuraSilencePosteriorGenerator *_spg;
  NSObject<_LTSpeechTranslationDelegate> *_delegate;
  BOOL _didEndpoint;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_featureQueue;
}

@property (copy, nonatomic) NSDictionary *endpointerThreshold;
@property (readonly, nonatomic) long long samplingRate;
@property (readonly, nonatomic) long long audioBitDepth;
@property (nonatomic) double clientLagThresholdMs;
@property (nonatomic) double clampedSFLatencyMsForClientLag;
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)startEndpointingWithContext:(id)context delegate:(id)delegate;
- (void)setServerEndpointerFeatures:(id)features withLocale:(id)locale;
- (void)addSpeechAudioData:(id)data;
- (void)endAudio;
- (BOOL)didEndpointWithFeatures:(id)features silenceFeatures:(id)features endpointer:(id)endpointer;
- (void)clientSilenceFeaturesAvailable:(id)available;
@end

#endif /* _LTHybridEndpointer_h */
