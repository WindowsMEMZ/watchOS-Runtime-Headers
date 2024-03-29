//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPThrottlingConfig_h
#define CKDPThrottlingConfig_h
@import Foundation;

#include "PBCodable.h"
#include "CKDPThrottlingConfigCriteria.h"
#include "CKDPThrottlingConfigRateLimit.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CKDPThrottlingConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 ttlSec; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL hasCriteria;
@property (retain, nonatomic) CKDPThrottlingConfigCriteria *criteria;
@property (readonly, nonatomic) BOOL hasRateLimit;
@property (retain, nonatomic) CKDPThrottlingConfigRateLimit *rateLimit;
@property (nonatomic) BOOL hasTtlSec;
@property (nonatomic) int ttlSec;

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

#endif /* CKDPThrottlingConfig_h */
