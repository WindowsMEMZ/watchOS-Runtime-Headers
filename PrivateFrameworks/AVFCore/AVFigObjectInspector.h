//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVFigObjectInspector_h
#define AVFigObjectInspector_h
@import Foundation;

@interface AVFigObjectInspector : NSObject
/* class methods */
+ (void)initialize;

/* instance methods */
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)property;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeForProperty:(struct __CFString *)property defaultValue:(struct { long long x0; int x1; unsigned int x2; long long x3; })value;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_timeForProperty:(struct __CFString *)property;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })_timeRangeForProperty:(struct __CFString *)property;
- (float)_floatForProperty:(struct __CFString *)property defaultValue:(float)value;
- (float)_floatForProperty:(struct __CFString *)property;
- (short)_SInt16ForProperty:(struct __CFString *)property;
- (int)_SInt32ForProperty:(struct __CFString *)property defaultValue:(int)value;
- (int)_SInt32ForProperty:(struct __CFString *)property;
- (long long)_longLongForProperty:(struct __CFString *)property;
- (unsigned char)_booleanForProperty:(struct __CFString *)property;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString *)property defaultValue:(struct CGSize { double x0; double x1; })value;
- (struct CGSize { double x0; double x1; })_sizeForProperty:(struct __CFString *)property;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_affineTransformForProperty:(struct __CFString *)property;
- (id)_tollFreeBridgedObjectForProperty:(struct __CFString *)property;
- (id)_stringForProperty:(struct __CFString *)property;
- (id)_arrayForProperty:(struct __CFString *)property;
- (id)_nonNilArrayForProperty:(struct __CFString *)property;
- (id)_dictionaryForProperty:(struct __CFString *)property;
- (id)_nonNilDictionaryForProperty:(struct __CFString *)property;
- (id)_dataForProperty:(struct __CFString *)property;
@end

#endif /* AVFigObjectInspector_h */
