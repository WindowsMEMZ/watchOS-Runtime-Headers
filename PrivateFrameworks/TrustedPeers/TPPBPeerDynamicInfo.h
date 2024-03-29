//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef TPPBPeerDynamicInfo_h
#define TPPBPeerDynamicInfo_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 clock; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSMutableArray *includeds;
@property (retain, nonatomic) NSMutableArray *excludeds;
@property (retain, nonatomic) NSMutableArray *dispositions;
@property (retain, nonatomic) NSMutableArray *preapprovals;

/* class methods */
+ (Class)includedType;
+ (Class)excludedType;
+ (Class)dispositionsType;
+ (Class)preapprovalsType;

/* instance methods */
- (void)clearIncludeds;
- (void)addIncluded:(id)included;
- (unsigned long long)includedsCount;
- (id)includedAtIndex:(unsigned long long)index;
- (void)clearExcludeds;
- (void)addExcluded:(id)excluded;
- (unsigned long long)excludedsCount;
- (id)excludedAtIndex:(unsigned long long)index;
- (void)clearDispositions;
- (void)addDispositions:(id)dispositions;
- (unsigned long long)dispositionsCount;
- (id)dispositionsAtIndex:(unsigned long long)index;
- (void)clearPreapprovals;
- (void)addPreapprovals:(id)preapprovals;
- (unsigned long long)preapprovalsCount;
- (id)preapprovalsAtIndex:(unsigned long long)index;
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

#endif /* TPPBPeerDynamicInfo_h */
