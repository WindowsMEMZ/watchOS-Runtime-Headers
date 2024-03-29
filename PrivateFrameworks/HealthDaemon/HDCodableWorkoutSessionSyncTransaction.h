//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableWorkoutSessionSyncTransaction_h
#define HDCodableWorkoutSessionSyncTransaction_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableWorkoutSessionConfiguration.h"
#include "HDCodableWorkoutSessionGlobalState.h"
#include "NSCopying-Protocol.h"

@class NSData;

@interface HDCodableWorkoutSessionSyncTransaction : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (readonly, nonatomic) BOOL hasConfiguration;
@property (retain, nonatomic) HDCodableWorkoutSessionConfiguration *configuration;
@property (readonly, nonatomic) BOOL hasGlobalState;
@property (retain, nonatomic) HDCodableWorkoutSessionGlobalState *globalState;
@property (readonly, nonatomic) BOOL hasArbitraryData;
@property (retain, nonatomic) NSData *arbitraryData;

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

#endif /* HDCodableWorkoutSessionSyncTransaction_h */
