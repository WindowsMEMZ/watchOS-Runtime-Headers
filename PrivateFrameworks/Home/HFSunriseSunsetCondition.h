//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFSunriseSunsetCondition_h
#define HFSunriseSunsetCondition_h
@import Foundation;

#include "HFTimeCondition.h"
#include "HFPrimitiveTimeCondition-Protocol.h"

@class NSDateComponents, NSString;

@interface HFSunriseSunsetCondition : HFTimeCondition<HFPrimitiveTimeCondition>

@property (readonly, copy, nonatomic) NSString *significantEvent;
@property (readonly, nonatomic) NSDateComponents *offset;
@property (readonly, nonatomic) unsigned long long comparisonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPredicate:(id)predicate;
- (id)initWithSignificantEvent:(id)event comparisonType:(unsigned long long)type;
- (id)initWithSignificantEvent:(id)event offset:(id)offset comparisonType:(unsigned long long)type;
- (long long)compare:(id)compare;
@end

#endif /* HFSunriseSunsetCondition_h */
