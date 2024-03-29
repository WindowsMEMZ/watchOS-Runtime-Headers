//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef PEGASUSSchemaPEGASUSCrossIntentRankerResponse_h
#define PEGASUSSchemaPEGASUSCrossIntentRankerResponse_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "PEGASUSSchemaPEGASUSCirAlerts.h"
#include "PEGASUSSchemaPEGASUSDomainCards.h"
#include "PEGASUSSchemaPEGASUSSortedScore.h"

@class NSArray, NSData, NSString;

@interface PEGASUSSchemaPEGASUSCrossIntentRankerResponse : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *crossDomainRankerScoreKeepers;
@property (copy, nonatomic) NSArray *crossIntentRankerScoreKeepers;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSDomainCards *domainCards;
@property (nonatomic) BOOL hasDomainCards;
@property (copy, nonatomic) NSString *cirPireneConfidenceDebug;
@property (nonatomic) BOOL hasCirPireneConfidenceDebug;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSSortedScore *sortedScore;
@property (nonatomic) BOOL hasSortedScore;
@property (retain, nonatomic) PEGASUSSchemaPEGASUSCirAlerts *cirAlerts;
@property (nonatomic) BOOL hasCirAlerts;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearCrossDomainRankerScoreKeeper;
- (void)deleteCrossDomainRankerScoreKeeper;
- (void)addCrossDomainRankerScoreKeeper:(id)keeper;
- (unsigned long long)crossDomainRankerScoreKeeperCount;
- (id)crossDomainRankerScoreKeeperAtIndex:(unsigned long long)index;
- (void)clearCrossIntentRankerScoreKeeper;
- (void)deleteCrossIntentRankerScoreKeeper;
- (void)addCrossIntentRankerScoreKeeper:(id)keeper;
- (unsigned long long)crossIntentRankerScoreKeeperCount;
- (id)crossIntentRankerScoreKeeperAtIndex:(unsigned long long)index;
- (void)deleteDomainCards;
- (void)deleteCirPireneConfidenceDebug;
- (void)deleteSortedScore;
- (void)deleteCirAlerts;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* PEGASUSSchemaPEGASUSCrossIntentRankerResponse_h */
