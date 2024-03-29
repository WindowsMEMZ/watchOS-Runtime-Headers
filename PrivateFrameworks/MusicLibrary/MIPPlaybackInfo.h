//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MIPPlaybackInfo_h
#define MIPPlaybackInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface MIPPlaybackInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 durationInSamples; unsigned int x :1 gaplessEncodingDrainCode; unsigned int x :1 gaplessFrameResyncCode; unsigned int x :1 gaplessHeuristicCode; unsigned int x :1 gaplessHeuristicDelayCode; unsigned int x :1 startTime; unsigned int x :1 stopTime; unsigned int x :1 volumeNormalizationEnergy; unsigned int x :1 beatsPerMinute; unsigned int x :1 bitRate; unsigned int x :1 codecSubType; unsigned int x :1 codecType; unsigned int x :1 dataKind; unsigned int x :1 progressionDirection; unsigned int x :1 relativeVolume; unsigned int x :1 sampleRate; } _has;
}

@property (nonatomic) BOOL hasBitRate;
@property (nonatomic) int bitRate;
@property (nonatomic) BOOL hasCodecType;
@property (nonatomic) int codecType;
@property (nonatomic) BOOL hasCodecSubType;
@property (nonatomic) int codecSubType;
@property (nonatomic) BOOL hasDataKind;
@property (nonatomic) int dataKind;
@property (readonly, nonatomic) BOOL hasDataUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (readonly, nonatomic) BOOL hasEqPreset;
@property (retain, nonatomic) NSString *eqPreset;
@property (readonly, nonatomic) BOOL hasPlaybackFormat;
@property (retain, nonatomic) NSString *playbackFormat;
@property (nonatomic) BOOL hasGaplessHeuristicCode;
@property (nonatomic) long long gaplessHeuristicCode;
@property (nonatomic) BOOL hasGaplessHeuristicDelayCode;
@property (nonatomic) long long gaplessHeuristicDelayCode;
@property (nonatomic) BOOL hasGaplessEncodingDrainCode;
@property (nonatomic) long long gaplessEncodingDrainCode;
@property (nonatomic) BOOL hasGaplessFrameResyncCode;
@property (nonatomic) long long gaplessFrameResyncCode;
@property (nonatomic) BOOL hasRelativeVolume;
@property (nonatomic) int relativeVolume;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) int sampleRate;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) long long stopTime;
@property (nonatomic) BOOL hasVolumeNormalizationEnergy;
@property (nonatomic) long long volumeNormalizationEnergy;
@property (nonatomic) BOOL hasBeatsPerMinute;
@property (nonatomic) int beatsPerMinute;
@property (nonatomic) BOOL hasProgressionDirection;
@property (nonatomic) int progressionDirection;
@property (nonatomic) BOOL hasDurationInSamples;
@property (nonatomic) long long durationInSamples;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* MIPPlaybackInfo_h */
