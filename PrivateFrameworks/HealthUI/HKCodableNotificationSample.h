//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCodableNotificationSample_h
#define HKCodableNotificationSample_h
@import Foundation;

#include "PBCodable.h"
#include "HKCodableMetadataDictionary.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HKCodableNotificationSample : PBCodable<NSCopying> {
  /* instance variables */
  struct APPLE_HKCodableNotificationSample_1 { unsigned int x :1 categoryValue; unsigned int x :1 dataType; unsigned int x :1 endDate; unsigned int x :1 latestSupportedVersion; unsigned int x :1 minimumSupportedVersion; unsigned int x :1 startDate; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) long long categoryValue;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) BOOL hasSampleUUID;
@property (retain, nonatomic) NSString *sampleUUID;

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

#endif /* HKCodableNotificationSample_h */
