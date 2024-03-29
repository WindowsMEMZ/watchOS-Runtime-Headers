//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableSummaryCurrentValue_h
#define HKCodableSummaryCurrentValue_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableMetadataDictionary.h"
#include "HKCodableSummarySupplementaryValue.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HKCodableSummaryCurrentValue : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableSummaryCurrentValue_1 { unsigned int x :1 latestSupportedVersion; unsigned int x :1 minimumSupportedVersion; } _has;
}

@property (readonly, nonatomic) BOOL hasValueData;
@property (retain, nonatomic) NSData *valueData;
@property (readonly, nonatomic) BOOL hasKindRawValue;
@property (retain, nonatomic) NSString *kindRawValue;
@property (readonly, nonatomic) BOOL hasSupplementaryValue;
@property (retain, nonatomic) HKCodableSummarySupplementaryValue *supplementaryValue;
@property (readonly, nonatomic) BOOL hasQueryConfigurationData;
@property (retain, nonatomic) NSData *queryConfigurationData;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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

#endif /* HKCodableSummaryCurrentValue_h */
