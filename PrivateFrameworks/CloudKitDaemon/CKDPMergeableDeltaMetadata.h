//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPMergeableDeltaMetadata_h
#define CKDPMergeableDeltaMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "CKDPProtectionInfo.h"
#include "NSCopying-Protocol.h"

@class CKDPDistributedTimestamps, NSData, NSMutableArray, NSString;

@interface CKDPMergeableDeltaMetadata : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo;
@property (readonly, nonatomic) BOOL hasEncryptedTimestamps;
@property (retain, nonatomic) NSData *encryptedTimestamps;
@property (readonly, nonatomic) BOOL hasTimestamps;
@property (retain, nonatomic) CKDPDistributedTimestamps *timestamps;
@property (readonly, nonatomic) BOOL hasTimestampsAuthTag;
@property (retain, nonatomic) NSData *timestampsAuthTag;
@property (retain, nonatomic) NSMutableArray *replacedDeltaIdentifiers;

/* class methods */
+ (Class)replacedDeltaIdentifiersType;

/* instance methods */
- (void)clearReplacedDeltaIdentifiers;
- (void)addReplacedDeltaIdentifiers:(id)identifiers;
- (unsigned long long)replacedDeltaIdentifiersCount;
- (id)replacedDeltaIdentifiersAtIndex:(unsigned long long)index;
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

#endif /* CKDPMergeableDeltaMetadata_h */
