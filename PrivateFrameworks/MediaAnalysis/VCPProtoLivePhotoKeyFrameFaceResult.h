//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPProtoLivePhotoKeyFrameFaceResult_h
#define VCPProtoLivePhotoKeyFrameFaceResult_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "VCPProtoBounds.h"
#include "VCPProtoResultLegacyConversionProtocol-Protocol.h"

@interface VCPProtoLivePhotoKeyFrameFaceResult : PBCodable<VCPProtoResultLegacyConversionProtocol, NSCopying>

@property (retain, nonatomic) VCPProtoBounds *faceBounds;
@property (nonatomic) float faceQuality;

/* class methods */
+ (id)resultFromLegacyDictionary:(id)dictionary;

/* instance methods */
- (id)exportToLegacyDictionary;
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

#endif /* VCPProtoLivePhotoKeyFrameFaceResult_h */
