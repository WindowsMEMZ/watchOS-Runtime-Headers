//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHEndpointDetected_h
#define MHSchemaMHEndpointDetected_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "MHSchemaMHEndpointFeaturesAtEndpoint.h"
#include "MHSchemaMHEndpointerTimeoutMetadata.h"
#include "MHSchemaMHStatisticDistributionInfo.h"
#include "SISchemaUUID.h"
#include "SISchemaVersion.h"

@class NSData;

@interface MHSchemaMHEndpointDetected : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 endpointerType; unsigned int x :1 endpointAudioDurationInNs; unsigned int x :1 firstBufferTimeInNs; unsigned int x :1 endpointedBufferTimeInNs; unsigned int x :1 endpointerDecisionLagInNs; unsigned int x :1 extraDelayInNs; unsigned int x :1 derivedBufferTimeFromHistoricalAudio; unsigned int x :1 endpointerThreshold; unsigned int x :1 endpointerScore; unsigned int x :1 audioSkippedDurationInNs; unsigned int x :1 endpointResetPositionInNs; unsigned int x :1 trpDetectionType; } _has;
}

@property (nonatomic) int endpointerType;
@property (nonatomic) BOOL hasEndpointerType;
@property (nonatomic) unsigned long long endpointAudioDurationInNs;
@property (nonatomic) BOOL hasEndpointAudioDurationInNs;
@property (nonatomic) unsigned long long firstBufferTimeInNs;
@property (nonatomic) BOOL hasFirstBufferTimeInNs;
@property (nonatomic) unsigned long long endpointedBufferTimeInNs;
@property (nonatomic) BOOL hasEndpointedBufferTimeInNs;
@property (retain, nonatomic) MHSchemaMHEndpointFeaturesAtEndpoint *endpointFeaturesAtEndpoint;
@property (nonatomic) BOOL hasEndpointFeaturesAtEndpoint;
@property (nonatomic) unsigned long long endpointerDecisionLagInNs;
@property (nonatomic) BOOL hasEndpointerDecisionLagInNs;
@property (nonatomic) unsigned long long extraDelayInNs;
@property (nonatomic) BOOL hasExtraDelayInNs;
@property (retain, nonatomic) SISchemaVersion *endpointModelConfigVersion;
@property (nonatomic) BOOL hasEndpointModelConfigVersion;
@property (nonatomic) BOOL derivedBufferTimeFromHistoricalAudio;
@property (nonatomic) BOOL hasDerivedBufferTimeFromHistoricalAudio;
@property (nonatomic) float endpointerThreshold;
@property (nonatomic) BOOL hasEndpointerThreshold;
@property (nonatomic) float endpointerScore;
@property (nonatomic) BOOL hasEndpointerScore;
@property (nonatomic) unsigned long long audioSkippedDurationInNs;
@property (nonatomic) BOOL hasAudioSkippedDurationInNs;
@property (nonatomic) unsigned long long endpointResetPositionInNs;
@property (nonatomic) BOOL hasEndpointResetPositionInNs;
@property (retain, nonatomic) MHSchemaMHStatisticDistributionInfo *asrFeatureLatencyDistribution;
@property (nonatomic) BOOL hasAsrFeatureLatencyDistribution;
@property (retain, nonatomic) MHSchemaMHEndpointerTimeoutMetadata *timeoutMetadata;
@property (nonatomic) BOOL hasTimeoutMetadata;
@property (nonatomic) int trpDetectionType;
@property (nonatomic) BOOL hasTrpDetectionType;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteEndpointerType;
- (void)deleteEndpointAudioDurationInNs;
- (void)deleteFirstBufferTimeInNs;
- (void)deleteEndpointedBufferTimeInNs;
- (void)deleteEndpointFeaturesAtEndpoint;
- (void)deleteEndpointerDecisionLagInNs;
- (void)deleteExtraDelayInNs;
- (void)deleteEndpointModelConfigVersion;
- (void)deleteDerivedBufferTimeFromHistoricalAudio;
- (void)deleteEndpointerThreshold;
- (void)deleteEndpointerScore;
- (void)deleteAudioSkippedDurationInNs;
- (void)deleteEndpointResetPositionInNs;
- (void)deleteAsrFeatureLatencyDistribution;
- (void)deleteTimeoutMetadata;
- (void)deleteTrpDetectionType;
- (void)deleteTrpId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHEndpointDetected_h */
