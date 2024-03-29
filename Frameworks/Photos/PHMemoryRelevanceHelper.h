//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHMemoryRelevanceHelper_h
#define PHMemoryRelevanceHelper_h
@import Foundation;

@interface PHMemoryRelevanceHelper : NSObject
/* class methods */
+ (double)relevanceScoreForMemory:(id)memory atDate:(id)date;
+ (BOOL)isMemory:(id)memory relevantAtDate:(id)date;
+ (BOOL)isMemory:(id)memory proactiveWorthyAtDate:(id)date;
+ (BOOL)_isMemoryTemporal:(id)temporal;
+ (BOOL)_isMemoryCategoryTemporal:(unsigned long long)temporal;
+ (BOOL)_isMemorySubcategoryTemporal:(unsigned long long)temporal;
+ (BOOL)_isDate:(id)date inSameDayAndMonthAsDate:(id)date;
+ (double)_notificationScoreComponentForMemory:(id)memory;
+ (double)_categoryScoreComponentForMemory:(id)memory;
+ (double)_triggerScoreComponentForMemory:(id)memory;
+ (double)_notificationLevelWeightForMemory:(id)memory;
+ (double)_triggerScoreForMemory:(id)memory;
+ (double)_categoryWeightForMemory:(id)memory;
+ (double)_subcategoryWeightForMemory:(id)memory;
+ (double)_memoryTriggerTierScoreByTriggerType:(unsigned long long)type;
@end

#endif /* PHMemoryRelevanceHelper_h */
