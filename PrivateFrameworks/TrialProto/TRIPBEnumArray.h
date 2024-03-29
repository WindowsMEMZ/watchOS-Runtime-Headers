//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIPBEnumArray_h
#define TRIPBEnumArray_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TRIPBMessage.h"

@interface TRIPBEnumArray : NSObject<NSCopying> {
  /* instance variables */
  TRIPBMessage *_autocreator;
  int * _values;
  unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) undefined * validationFunc;

/* class methods */
+ (id)array;
+ (id)arrayWithValidationFunction:(undefined *)function;
+ (id)arrayWithValidationFunction:(undefined *)function rawValue:(int)value;
+ (id)arrayWithValueArray:(id)array;
+ (id)arrayWithValidationFunction:(undefined *)function capacity:(unsigned long long)capacity;

/* instance methods */
- (id)init;
- (id)initWithValueArray:(id)array;
- (id)initWithValidationFunction:(undefined *)function;
- (id)initWithValidationFunction:(undefined *)function rawValues:(const int *)values count:(unsigned long long)count;
- (id)initWithValidationFunction:(undefined *)function capacity:(unsigned long long)capacity;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)dealloc;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)enumerateRawValuesWithBlock:(id /* block */)block;
- (void)enumerateRawValuesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (int)valueAtIndex:(unsigned long long)index;
- (int)rawValueAtIndex:(unsigned long long)index;
- (void)enumerateValuesWithBlock:(id /* block */)block;
- (void)enumerateValuesWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (void)internalResizeToCapacity:(unsigned long long)capacity;
- (void)addRawValue:(int)value;
- (void)addRawValues:(const int *)values count:(unsigned long long)count;
- (void)insertRawValue:(int)value atIndex:(unsigned long long)index;
- (void)replaceValueAtIndex:(unsigned long long)index withRawValue:(int)value;
- (void)addRawValuesFromArray:(id)array;
- (void)removeValueAtIndex:(unsigned long long)index;
- (void)removeAll;
- (void)exchangeValueAtIndex:(unsigned long long)index withValueAtIndex:(unsigned long long)index;
- (void)addValue:(int)value;
- (void)addValues:(const int *)values count:(unsigned long long)count;
- (void)insertValue:(int)value atIndex:(unsigned long long)index;
- (void)replaceValueAtIndex:(unsigned long long)index withValue:(int)value;
@end

#endif /* TRIPBEnumArray_h */
