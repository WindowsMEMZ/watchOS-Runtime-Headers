//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncCodableSharedSummaryTransactionRecord_h
#define HDCloudSyncCodableSharedSummaryTransactionRecord_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface HDCloudSyncCodableSharedSummaryTransactionRecord : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasSourceDeviceIdentifier;
@property (retain, nonatomic) NSString *sourceDeviceIdentifier;
@property (retain, nonatomic) NSMutableArray *summaryIdentifiers;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSData *metadata;

/* class methods */
+ (Class)summaryIdentifiersType;

/* instance methods */
- (void)clearSummaryIdentifiers;
- (void)addSummaryIdentifiers:(id)identifiers;
- (unsigned long long)summaryIdentifiersCount;
- (id)summaryIdentifiersAtIndex:(unsigned long long)index;
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

#endif /* HDCloudSyncCodableSharedSummaryTransactionRecord_h */
