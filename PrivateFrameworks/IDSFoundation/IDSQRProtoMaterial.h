//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoMaterial_h
#define IDSQRProtoMaterial_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface IDSQRProtoMaterial : PBCodable<NSCopying>

@property (nonatomic) unsigned long long ownerParticipantId;
@property (nonatomic) unsigned long long receiverParticipantId;
@property (retain, nonatomic) NSMutableArray *materialInfos;

/* class methods */
+ (Class)materialInfoType;

/* instance methods */
- (void)clearMaterialInfos;
- (void)addMaterialInfo:(id)info;
- (unsigned long long)materialInfosCount;
- (id)materialInfoAtIndex:(unsigned long long)index;
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

#endif /* IDSQRProtoMaterial_h */
