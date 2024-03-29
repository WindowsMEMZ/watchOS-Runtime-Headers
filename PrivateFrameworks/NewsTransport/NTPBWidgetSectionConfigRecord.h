//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBWidgetSectionConfigRecord_h
#define NTPBWidgetSectionConfigRecord_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "NTPBRecordBase.h"

@class NSMutableArray, NSString;

@interface NTPBWidgetSectionConfigRecord : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) NTPBRecordBase *base;
@property (readonly, nonatomic) BOOL hasConfiguration2;
@property (retain, nonatomic) NSString *configuration2;
@property (retain, nonatomic) NSMutableArray *articleListIDs2s;
@property (retain, nonatomic) NSMutableArray *articleIDs2s;
@property (readonly, nonatomic) BOOL hasSingleTagConfiguration;
@property (retain, nonatomic) NSString *singleTagConfiguration;

/* class methods */
+ (Class)articleListIDs2Type;
+ (Class)articleIDs2Type;

/* instance methods */
- (void)dealloc;
- (void)clearArticleListIDs2s;
- (void)addArticleListIDs2:(id)ids2;
- (unsigned long long)articleListIDs2sCount;
- (id)articleListIDs2AtIndex:(unsigned long long)index;
- (void)clearArticleIDs2s;
- (void)addArticleIDs2:(id)ids2;
- (unsigned long long)articleIDs2sCount;
- (id)articleIDs2AtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBWidgetSectionConfigRecord_h */
