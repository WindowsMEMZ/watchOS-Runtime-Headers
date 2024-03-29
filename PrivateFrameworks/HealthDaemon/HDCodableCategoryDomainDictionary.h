//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableCategoryDomainDictionary_h
#define HDCodableCategoryDomainDictionary_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableSyncIdentity.h"
#include "HDSyncCodable-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface HDCodableCategoryDomainDictionary : PBCodable<HDSyncCodable, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 category; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasCategory;
@property (nonatomic) long long category;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *keyValuePairs;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) HDCodableSyncIdentity *syncIdentity;

/* class methods */
+ (Class)keyValuePairsType;

/* instance methods */
- (BOOL)_validateForInsertionWithError:(id *)error;
- (id)initWithCategory:(long long)category domain:(id)domain;
- (long long)decodedCategory;
- (void)clearKeyValuePairs;
- (void)addKeyValuePairs:(id)pairs;
- (unsigned long long)keyValuePairsCount;
- (id)keyValuePairsAtIndex:(unsigned long long)index;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableCategoryDomainDictionary_h */
