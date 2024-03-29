//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPProtoLivePhotoFrameInstruction_h
#define VCPProtoLivePhotoFrameInstruction_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "VCPProtoResultLegacyConversionProtocol-Protocol.h"

@interface VCPProtoLivePhotoFrameInstruction : PBCodable<VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (nonatomic) long long timeValue;
@property (readonly, nonatomic) unsigned long long homographyParamsCount;
@property (readonly, nonatomic) float * homographyParams;
@property (nonatomic) int timeScale;
@property (nonatomic) long long epoch;
@property (nonatomic) int flags;

/* class methods */
+ (id)resultFromLegacyDictionary:(id)dictionary;

/* instance methods */
- (id)exportToLegacyDictionary;
- (void)dealloc;
- (void)clearHomographyParams;
- (void)addHomographyParam:(float)param;
- (float)homographyParamAtIndex:(unsigned long long)index;
- (void)setHomographyParams:(float *)params count:(unsigned long long)count;
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

#endif /* VCPProtoLivePhotoFrameInstruction_h */
