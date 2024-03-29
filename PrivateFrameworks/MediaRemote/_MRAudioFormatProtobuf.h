//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRAudioFormatProtobuf_h
#define _MRAudioFormatProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface _MRAudioFormatProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 bitDepth; unsigned int x :1 bitrate; unsigned int x :1 sampleRate; unsigned int x :1 channelLayout; unsigned int x :1 codec; unsigned int x :1 renderingMode; unsigned int x :1 tier; unsigned int x :1 multiChannel; unsigned int x :1 spatialized; } _has;
}

@property (nonatomic) BOOL hasTier;
@property (nonatomic) int tier;
@property (nonatomic) BOOL hasBitrate;
@property (nonatomic) long long bitrate;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) BOOL hasBitDepth;
@property (nonatomic) long long bitDepth;
@property (nonatomic) BOOL hasCodec;
@property (nonatomic) unsigned int codec;
@property (nonatomic) BOOL hasSpatialized;
@property (nonatomic) BOOL spatialized;
@property (nonatomic) BOOL hasMultiChannel;
@property (nonatomic) BOOL multiChannel;
@property (nonatomic) BOOL hasChannelLayout;
@property (nonatomic) unsigned int channelLayout;
@property (readonly, nonatomic) BOOL hasAudioChannelLayoutDescription;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (retain, nonatomic) NSString *groupID;
@property (readonly, nonatomic) BOOL hasStableVariantID;
@property (retain, nonatomic) NSString *stableVariantID;
@property (nonatomic) BOOL hasRenderingMode;
@property (nonatomic) int renderingMode;

/* instance methods */
- (id)tierAsString:(int)string;
- (int)StringAsTier:(id)tier;
- (id)renderingModeAsString:(int)string;
- (int)StringAsRenderingMode:(id)mode;
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

#endif /* _MRAudioFormatProtobuf_h */
