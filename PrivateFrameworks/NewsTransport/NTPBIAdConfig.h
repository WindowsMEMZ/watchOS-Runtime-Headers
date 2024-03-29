//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBIAdConfig_h
#define NTPBIAdConfig_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NTPBIAdConfig : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 segmentsHistoryWindowInterval; unsigned int x :1 segmentsMinimumArticleCount; unsigned int x :1 segmentsSubmissionFrequency; unsigned int x :1 segmentsThreshold; unsigned int x :1 segmentsEnabled; } _has;
}

@property (nonatomic) BOOL hasSegmentsEnabled;
@property (nonatomic) BOOL segmentsEnabled;
@property (nonatomic) BOOL hasSegmentsThreshold;
@property (nonatomic) double segmentsThreshold;
@property (nonatomic) BOOL hasSegmentsSubmissionFrequency;
@property (nonatomic) long long segmentsSubmissionFrequency;
@property (nonatomic) BOOL hasSegmentsHistoryWindowInterval;
@property (nonatomic) long long segmentsHistoryWindowInterval;
@property (nonatomic) BOOL hasSegmentsMinimumArticleCount;
@property (nonatomic) long long segmentsMinimumArticleCount;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBIAdConfig_h */
