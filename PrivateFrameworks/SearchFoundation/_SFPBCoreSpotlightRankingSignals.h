//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.18.2.0.0
//
#ifndef _SFPBCoreSpotlightRankingSignals_h
#define _SFPBCoreSpotlightRankingSignals_h
@import Foundation;

#include "PBCodable.h"
#include "NSSecureCoding-Protocol.h"
#include "_SFPBCoreSpotlightRankingSignals-Protocol.h"

@class NSData, NSString;

@interface _SFPBCoreSpotlightRankingSignals : PBCodable<_SFPBCoreSpotlightRankingSignals, NSSecureCoding>

@property (nonatomic) float topicalityScore;
@property (nonatomic) float freshness;
@property (nonatomic) float engagementScore;
@property (nonatomic) float predictedLikelihoodOfEngagement;
@property (nonatomic) BOOL wasNominatedAsTopHit;
@property (nonatomic) float sodiumL2Score;
@property (nonatomic) BOOL isExactMatchOfLaunchString;
@property (nonatomic) BOOL wasEngagedInSpotlight;
@property (nonatomic) int resultQueryRecency;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFacade:(id)facade;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* _SFPBCoreSpotlightRankingSignals_h */
