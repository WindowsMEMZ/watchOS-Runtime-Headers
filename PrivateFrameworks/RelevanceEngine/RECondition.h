//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef RECondition_h
#define RECondition_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "REAutomaticExportedInterface-Protocol.h"

@interface RECondition : NSObject<REAutomaticExportedInterface, NSCopying>
/* class methods */
+ (id)trueCondition;
+ (id)falseCondition;
+ (id)conditionHasValueForFeature:(id)feature;
+ (id)conditionForFeature:(id)feature relation:(long long)relation floatValue:(float)value;
+ (id)conditionForFeature:(id)feature relation:(long long)relation integerValue:(long long)value;
+ (id)conditionForFeature:(id)feature hasValue:(id)value;
+ (id)conditionForFeature:(id)feature hasIntegerValue:(long long)value;
+ (id)conditionForFeature:(id)feature hasBoolValue:(BOOL)value;
+ (id)conditionForFeature:(id)feature relation:(long long)relation feature:(id)feature;
+ (id)conditionForProbabilityWithRelation:(long long)relation floatValue:(float)value;
+ (id)conditionForProbabilityForInteraction:(id)interaction relation:(long long)relation floatValue:(float)value;
+ (id)conditionForProbabilityForInteraction:(id)interaction relation:(long long)relation feature:(id)feature;
+ (id)andConditions:(id)conditions;
+ (id)orConditions:(id)conditions;
+ (id)notCondition:(id)condition;

/* instance methods */
- (id)_dependentFeatures;
- (id)_notCondition;
- (BOOL)_requiresTwoFeatures;
- (BOOL)_validForRanking;
- (BOOL)_needsProbability;
- (BOOL)_acceptsFeatureMap:(id)map predictionSet:(id)set explanation:(id *)explanation;
- (BOOL)_acceptsLeftFeatureMap:(id)map rightFeatureMap:(id)map;
- (id)_inflectionFeatureValuePairs;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RECondition_h */
