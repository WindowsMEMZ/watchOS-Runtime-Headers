//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKHealthWrapCodableValue_h
#define HKHealthWrapCodableValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HKHealthWrapCodableValue : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 integer; unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasBytes;
@property (retain, nonatomic) NSData *bytes;
@property (readonly, nonatomic) BOOL hasString;
@property (retain, nonatomic) NSString *string;
@property (nonatomic) BOOL hasInteger;
@property (nonatomic) long long integer;

/* instance methods */
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
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

#endif /* HKHealthWrapCodableValue_h */
