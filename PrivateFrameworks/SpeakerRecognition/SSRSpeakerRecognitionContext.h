//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SSRSpeakerRecognitionContext_h
#define SSRSpeakerRecognitionContext_h
@import Foundation;

#include "SSRLoggingAggregator.h"

@class CSAsset, NSArray, NSDictionary, NSString, NSURL, NSUUID;

@interface SSRSpeakerRecognitionContext : NSObject

@property (retain, nonatomic) NSArray *voiceProfileArray;
@property (nonatomic) unsigned long long spIdType;
@property (retain, nonatomic) CSAsset *asset;
@property (retain, nonatomic) NSString *locale;
@property (retain, nonatomic) NSUUID *endpointUUID;
@property (readonly, nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) unsigned long long scoreType;
@property (readonly, nonatomic) unsigned long long recognitionStyle;
@property (readonly, nonatomic) float combinationWeight;
@property (readonly, nonatomic) NSDictionary *vtEventInfo;
@property (readonly, nonatomic) NSString *configVersion;
@property (readonly, nonatomic) NSURL *resourceFilePath;
@property (readonly, nonatomic) NSURL *vadResourcePath;
@property (readonly, nonatomic) NSDictionary *modelsContext;
@property (readonly, nonatomic) NSDictionary *expModelsContext;
@property (readonly, nonatomic) NSDictionary *numEnrollmentUtterances;
@property (readonly, nonatomic) unsigned long long maxAllowedAudioSamples;
@property (readonly, nonatomic) BOOL osTransactionReqd;
@property (readonly, nonatomic) NSString *debugUtteranceAudioFile;
@property (readonly, nonatomic) NSString *debugUtteranceMetaFile;
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator;
@property (readonly, nonatomic) NSString *sessionId;

/* instance methods */
- (id)initWithVoiceRecognitionContext:(id)context error:(id *)error;
- (id)description;
- (void)composeModelContextsForProfiles:(id)profiles forSpIdType:(unsigned long long)type forAsset:(id)asset completion:(id /* block */)completion;
- (BOOL)_checkIfModelsPresentForProfiles:(id)profiles forSpIdType:(unsigned long long)type forAsset:(id)asset;
- (id)pickAssetForProfiles:(id)profiles forSpIdType:(unsigned long long)type;
- (id)pickAssetForProfiles:(id)profiles forSpIdType:(unsigned long long)type withAssetArray:(id)array;
- (void)dealloc;
@end

#endif /* SSRSpeakerRecognitionContext_h */
