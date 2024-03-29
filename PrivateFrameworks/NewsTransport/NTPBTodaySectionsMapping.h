//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBTodaySectionsMapping_h
#define NTPBTodaySectionsMapping_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface NTPBTodaySectionsMapping : PBCodable<NSCopying>

@property (retain, nonatomic) NSMutableArray *identifiers;

/* class methods */
+ (Class)identifiersType;

/* instance methods */
- (void)clearIdentifiers;
- (void)addIdentifiers:(id)identifiers;
- (unsigned long long)identifiersCount;
- (id)identifiersAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBTodaySectionsMapping_h */
