//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RERankingRule_h
#define RERankingRule_h
@import Foundation;

#include "RERule.h"
#include "REAutomaticExportedInterface-Protocol.h"
#include "REComparisonCondition.h"
#include "RECondition.h"
#include "REConditionEvaluator.h"

@interface RERankingRule : RERule<REAutomaticExportedInterface>

@property (readonly, nonatomic) REConditionEvaluator *leftConditionEvaluator;
@property (readonly, nonatomic) REConditionEvaluator *rightConditionEvaluator;
@property (readonly, nonatomic) REConditionEvaluator *comparisonConditionEvaluator;
@property (readonly, nonatomic) RECondition *leftCondition;
@property (readonly, nonatomic) RECondition *rightCondition;
@property (readonly, nonatomic) REComparisonCondition *comparison;
@property (readonly, nonatomic) long long order;

/* instance methods */
- (id)initWithLeftCondition:(id)condition rightCondition:(id)condition comparisonCondition:(id)condition order:(long long)order;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RERankingRule_h */
