//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoRemotePassUpdateResponse_h
#define NPKProtoRemotePassUpdateResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NPKProtoPass.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray;

@interface NPKProtoRemotePassUpdateResponse : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 upgradeStatus; unsigned int x :1 pending; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (readonly, nonatomic) BOOL hasPass;
@property (retain, nonatomic) NPKProtoPass *pass;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;
@property (nonatomic) BOOL hasUpgradeStatus;
@property (nonatomic) int upgradeStatus;
@property (retain, nonatomic) NSMutableArray *expressPassInformations;

/* class methods */
+ (Class)expressPassInformationType;

/* instance methods */
- (id)upgradeStatusAsString:(int)string;
- (int)StringAsUpgradeStatus:(id)status;
- (void)clearExpressPassInformations;
- (void)addExpressPassInformation:(id)information;
- (unsigned long long)expressPassInformationsCount;
- (id)expressPassInformationAtIndex:(unsigned long long)index;
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

#endif /* NPKProtoRemotePassUpdateResponse_h */
