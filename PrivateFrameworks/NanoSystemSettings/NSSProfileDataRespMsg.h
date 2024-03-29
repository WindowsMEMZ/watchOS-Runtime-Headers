//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 336.0.0.0.0
//
#ifndef NSSProfileDataRespMsg_h
#define NSSProfileDataRespMsg_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface NSSProfileDataRespMsg : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasProfileData;
@property (retain, nonatomic) NSData *profileData;
@property (readonly, nonatomic) BOOL hasProfilePayloadsSummary;
@property (retain, nonatomic) NSData *profilePayloadsSummary;
@property (readonly, nonatomic) BOOL hasRmConfigurationViewModels;
@property (retain, nonatomic) NSData *rmConfigurationViewModels;

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

#endif /* NSSProfileDataRespMsg_h */
