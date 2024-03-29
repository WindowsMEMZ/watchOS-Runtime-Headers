//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef EKUIRecurrenceRuleBuilder_h
#define EKUIRecurrenceRuleBuilder_h
@import Foundation;

@class NSArray;

@interface EKUIRecurrenceRuleBuilder : NSObject

@property long long frequency;
@property long long interval;
@property unsigned long long count;
@property (retain) NSArray *dayNumbers;
@property int days;
@property int ordinalValue;
@property (retain) NSArray *monthNumbers;

/* instance methods */
- (id)init;
- (void)_setDefaultValues;
- (id)recurrenceRule;
- (long long)_frequencyToUse;
- (id)daysOfTheWeek;
- (id)daysOfTheWeekWithWeek:(long long)week;
- (id)setPositions;
- (id)description;
@end

#endif /* EKUIRecurrenceRuleBuilder_h */
