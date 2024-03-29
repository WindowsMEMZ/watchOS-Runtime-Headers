//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1110.5.0.0.0
//
#ifndef NSObject_CARenderValue_h
#define NSObject_CARenderValue_h
@import Foundation;

@interface NSObject (CARenderValue) <CARenderValue, CAAnimatableValue>
/* class methods */
+ (undefined *)CA_setterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned int x1 :16; unsigned int x2 :16; SEL x3[2] char * x4; struct __CFString * x5; } *)property;
+ (undefined *)CA_getterForProperty:(const struct _CAPropertyInfo { unsigned int x0; unsigned int x1 :16; unsigned int x2 :16; SEL x3[2] char * x4; struct __CFString * x5; } *)property;
+ (BOOL)CA_encodesPropertyConditionally:(unsigned int)conditionally type:(int)type;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;
+ (id)CA_CAMLPropertyForKey:(id)key;

/* instance methods */
- (id)CA_archivingValueForKey:(id)key;
- (BOOL)CA_validateValue:(id)value forKey:(id)key;
- (id)CAMLType;
- (void)encodeWithCAMLWriter:(id)camlwriter;
- (id)CAMLTypeForKey:(id)key;
- (BOOL)CAMLTypeSupportedForKey:(id)key;
- (id)CA_addValue:(id)value multipliedBy:(int)by;
- (id)CA_interpolateValue:(id)value byFraction:(float)fraction;
- (id)CA_roundToIntegerFromValue:(id)value;
- (id)CA_interpolateValues:(id)values;
- (double)CA_distanceToValue:(id)value;
- (void)CA_prepareRenderValue;
- (struct Object { undefined * * x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2 :8; unsigned int x3 :24; } *)CA_copyRenderValue;
- (struct Object { undefined * * x0; struct Atomic { struct { int x0; } x0; } x1; unsigned int x2 :8; unsigned int x3 :24; } *)CA_copyRenderValueWithColorspace:(struct CGColorSpace *)colorspace;
- (unsigned long long)CA_numericValueCount;
- (unsigned long long)CA_copyNumericValue:(double *)value;
@end

#endif /* NSObject_CARenderValue_h */
