//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORideBookingIntentResponseFailure_h
#define GEORideBookingIntentResponseFailure_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEORideBookingIntentResponseFailure : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_failure; unsigned int x :1 has_intent; } _flags;
}

@property (nonatomic) BOOL hasIntent;
@property (nonatomic) int intent;
@property (nonatomic) BOOL hasFailure;
@property (nonatomic) int failure;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)intentAsString:(int)string;
- (int)StringAsIntent:(id)intent;
- (id)failureAsString:(int)string;
- (int)StringAsFailure:(id)failure;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEORideBookingIntentResponseFailure_h */
