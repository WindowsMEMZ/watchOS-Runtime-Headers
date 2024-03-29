//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDateComponentsCondition_h
#define HFDateComponentsCondition_h
@import Foundation;

#include "HFTimeCondition.h"
#include "HFPrimitiveTimeCondition-Protocol.h"

@class NSDateComponents, NSString;

@interface HFDateComponentsCondition : HFTimeCondition<HFPrimitiveTimeCondition>

@property (readonly, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) BOOL isTimeOfDayCondition;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDateComponents:(id)components comparisonType:(unsigned long long)type;
- (id)initWithPredicate:(id)predicate;
- (long long)compare:(id)compare;
- (unsigned long long)timeConditionType;
@end

#endif /* HFDateComponentsCondition_h */
