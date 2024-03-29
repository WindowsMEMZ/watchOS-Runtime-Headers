//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPCharacteristicValueTransition_NaturalLighting_h
#define HAPCharacteristicValueTransition_NaturalLighting_h
@import Foundation;

@interface HAPCharacteristicValueTransition (NaturalLighting)
/* class methods */
+ (id)naturalLightingValueTransitionWithLightProfile:(id)profile naturalLightingEnabled:(BOOL)enabled startDate:(id)date dataSource:(id)source;
+ (id)transitionPointsByCoalescingTransitionPoints:(id)points ofCurve:(id)curve;
+ (BOOL)updateTransition:(id)transition withCurve:(id)curve brightnessCharacteristic:(id)characteristic millisecondsElapsedSinceStartOfDay:(unsigned long long)day transitionStartTimeInMilliseconds:(unsigned long long)milliseconds;
+ (BOOL)canCoalesceTransitionPoint1:(id)point1 transitionPoint2:(id)point2 ofCurve:(id)curve;

/* instance methods */
- (id)naturalLightingActiveTransitionContextForCharacteristic:(id)characteristic;
- (id)naturalLightingActiveTransitionContextLightProfile:(id)profile;
@end

#endif /* HAPCharacteristicValueTransition_NaturalLighting_h */
