//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef CAARSchemaCAARActionLevelDisambiguationHistory_h
#define CAARSchemaCAARActionLevelDisambiguationHistory_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface CAARSchemaCAARActionLevelDisambiguationHistory : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 numActionDisambiguationsLastTwoMinutes; unsigned int x :1 numActionDisambiguationsLasTenMinutes; unsigned int x :1 numActionDisambiguationsLastOneHour; unsigned int x :1 numActionDisambiguationsLastSixHours; unsigned int x :1 numActionDisambiguationsLastOneDay; unsigned int x :1 numActionDisambiguationsLastSevenDays; unsigned int x :1 numActionDisambiguationsLastTwentyEightDays; unsigned int x :1 numActionDisambiguationsLastInfinity; unsigned int x :1 numSelectedActionDisambiguationsLastTwoMinutes; unsigned int x :1 numSelectedActionDisambiguationsLastTenMinutes; unsigned int x :1 numSelectedActionDisambiguationsLastOneHour; unsigned int x :1 numSelectedActionDisambiguationsLastSixHours; unsigned int x :1 numSelectedActionDisambiguationsLastOneDay; unsigned int x :1 numSelectedActionDisambiguationsLastSevenDays; unsigned int x :1 numSelectedActionDisambiguationsLastTwentyEightDays; unsigned int x :1 numSelectedActionDisambiguationsLastInfinity; unsigned int x :1 minutesSinceLastDisambiguationSameActions; unsigned int x :1 minutesSinceLastActionDisambiguationForThisAction; unsigned int x :1 wasActionSelectedInLastDisambiguation; unsigned int x :1 minutesSinceLastDisambiguationForSameActions; } _has;
}

@property (nonatomic) unsigned int numActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLasTenMinutes;
@property (nonatomic) BOOL hasNumActionDisambiguationsLasTenMinutes;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumActionDisambiguationsLastInfinity;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwoMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTenMinutes;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneHour;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSixHours;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastOneDay;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastSevenDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastTwentyEightDays;
@property (nonatomic) unsigned int numSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL hasNumSelectedActionDisambiguationsLastInfinity;
@property (nonatomic) BOOL minutesSinceLastDisambiguationSameActions;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationSameActions;
@property (nonatomic) unsigned int minutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) BOOL hasMinutesSinceLastActionDisambiguationForThisAction;
@property (nonatomic) BOOL wasActionSelectedInLastDisambiguation;
@property (nonatomic) BOOL hasWasActionSelectedInLastDisambiguation;
@property (nonatomic) unsigned int minutesSinceLastDisambiguationForSameActions;
@property (nonatomic) BOOL hasMinutesSinceLastDisambiguationForSameActions;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteNumActionDisambiguationsLastTwoMinutes;
- (void)deleteNumActionDisambiguationsLasTenMinutes;
- (void)deleteNumActionDisambiguationsLastOneHour;
- (void)deleteNumActionDisambiguationsLastSixHours;
- (void)deleteNumActionDisambiguationsLastOneDay;
- (void)deleteNumActionDisambiguationsLastSevenDays;
- (void)deleteNumActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumActionDisambiguationsLastInfinity;
- (void)deleteNumSelectedActionDisambiguationsLastTwoMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastTenMinutes;
- (void)deleteNumSelectedActionDisambiguationsLastOneHour;
- (void)deleteNumSelectedActionDisambiguationsLastSixHours;
- (void)deleteNumSelectedActionDisambiguationsLastOneDay;
- (void)deleteNumSelectedActionDisambiguationsLastSevenDays;
- (void)deleteNumSelectedActionDisambiguationsLastTwentyEightDays;
- (void)deleteNumSelectedActionDisambiguationsLastInfinity;
- (void)deleteMinutesSinceLastDisambiguationSameActions;
- (void)deleteMinutesSinceLastActionDisambiguationForThisAction;
- (void)deleteWasActionSelectedInLastDisambiguation;
- (void)deleteMinutesSinceLastDisambiguationForSameActions;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* CAARSchemaCAARActionLevelDisambiguationHistory_h */
