//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBArticleTopic_h
#define NTPBArticleTopic_h
@import Foundation;

#include "PBCodable.h"
#include "COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList.h"
#include "COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo.h"
#include "COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NTPBArticleTopic : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 flowRate; unsigned int x :1 ontologyLevel; unsigned int x :1 quality; unsigned int x :1 subscriptionRate; unsigned int x :1 hardFollowRequiredForGrouping; unsigned int x :1 isDisallowedFromGrouping; unsigned int x :1 isEligibleForGrouping; unsigned int x :1 isEligibleForGroupingIfAutofavorited; unsigned int x :1 isEligibleForGroupingIfFavorited; unsigned int x :1 isHidden; unsigned int x :1 isManagedTopic; unsigned int x :1 isManagedTopicWinner; } _has;
}

@property (readonly, nonatomic) BOOL hasTagID;
@property (retain, nonatomic) NSString *tagID;
@property (readonly, nonatomic) BOOL hasCohorts;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *cohorts;
@property (nonatomic) BOOL hasIsHidden;
@property (nonatomic) BOOL isHidden;
@property (nonatomic) BOOL hasIsEligibleForGrouping;
@property (nonatomic) BOOL isEligibleForGrouping;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfFavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfFavorited;
@property (readonly, nonatomic) BOOL hasConversionStats;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLConversionStats *conversionStats;
@property (nonatomic) BOOL hasIsEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL isEligibleForGroupingIfAutofavorited;
@property (nonatomic) BOOL hasIsManagedTopic;
@property (nonatomic) BOOL isManagedTopic;
@property (nonatomic) BOOL hasIsManagedTopicWinner;
@property (nonatomic) BOOL isManagedTopicWinner;
@property (nonatomic) BOOL hasFlowRate;
@property (nonatomic) double flowRate;
@property (nonatomic) BOOL hasSubscriptionRate;
@property (nonatomic) double subscriptionRate;
@property (nonatomic) BOOL hasQuality;
@property (nonatomic) double quality;
@property (nonatomic) BOOL hasOntologyLevel;
@property (nonatomic) long long ontologyLevel;
@property (readonly, nonatomic) BOOL hasContentAndRelevanceInfo;
@property (retain, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLContentAndRelevanceInfo *contentAndRelevanceInfo;
@property (nonatomic) BOOL hasIsDisallowedFromGrouping;
@property (nonatomic) BOOL isDisallowedFromGrouping;
@property (nonatomic) BOOL hasHardFollowRequiredForGrouping;
@property (nonatomic) BOOL hardFollowRequiredForGrouping;

/* instance methods */
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBArticleTopic_h */
