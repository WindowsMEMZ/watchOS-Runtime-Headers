//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoPresentStandaloneTransactionRequest_h
#define NPKProtoPresentStandaloneTransactionRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NPKProtoPresentStandaloneTransactionRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 validUntilEpochTimeInterval; unsigned int x :1 transactionType; } _has;
}

@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (readonly, nonatomic) BOOL hasWatchPassUniqueID;
@property (retain, nonatomic) NSString *watchPassUniqueID;
@property (nonatomic) BOOL hasValidUntilEpochTimeInterval;
@property (nonatomic) double validUntilEpochTimeInterval;

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

#endif /* NPKProtoPresentStandaloneTransactionRequest_h */
