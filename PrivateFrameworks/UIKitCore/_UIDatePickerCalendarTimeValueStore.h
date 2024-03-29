//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDatePickerCalendarTimeValueStore_h
#define _UIDatePickerCalendarTimeValueStore_h
@import Foundation;

#include "_UIDatePickerCalendarTimeFormat.h"

@interface _UIDatePickerCalendarTimeValueStore : NSObject

@property (readonly, nonatomic) unsigned long long * inputBuffer;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat;
@property (nonatomic) unsigned long long hourValue;
@property (nonatomic) unsigned long long minuteValue;
@property (nonatomic) BOOL isPM;
@property (nonatomic) long long minuteInterval;
@property (nonatomic) long long decrementBehaviour;

/* instance methods */
- (id)initWithTimeFormat:(id)format;
- (id)initWithTimeFormat:(id)format minuteInterval:(long long)interval decrementBehaviour:(long long)behaviour;
- (void)dealloc;
- (void)_verifyInputWithScope:(long long)scope;
- (void)__setIntegerInBuffer:(unsigned long long)buffer range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (unsigned long long)__integerInBufferWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)_setDigits:(unsigned long long)digits count:(unsigned long long)count inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range append:(BOOL)append;
- (void)_removeLastDigitInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setDigits:(unsigned long long)digits count:(unsigned long long)count inScope:(long long)scope append:(BOOL)append;
- (unsigned long long)digitsInScope:(long long)scope;
- (void)removeLastDigitInScope:(long long)scope;
- (BOOL)roundToMinuteInterval;
- (void)incrementDigitForScope:(long long)scope;
- (void)decrementDigitForScope:(long long)scope;
@end

#endif /* _UIDatePickerCalendarTimeValueStore_h */
