//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef INIntentSleepAlarmAttributeSlotValueTransformer_h
#define INIntentSleepAlarmAttributeSlotValueTransformer_h
@import Foundation;

#include "NSValueTransformer.h"

@interface INIntentSleepAlarmAttributeSlotValueTransformer : NSValueTransformer
/* class methods */
+ (Class)transformedValueClass;
+ (Class)reverseTransformedValueClass;
+ (BOOL)allowsReverseTransformation;
+ (long long)_intents_valueType;

/* instance methods */
- (id)transformedValue:(id)value;
- (id)reverseTransformedValue:(id)value;
@end

#endif /* INIntentSleepAlarmAttributeSlotValueTransformer_h */
